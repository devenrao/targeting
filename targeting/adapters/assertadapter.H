// IBM_PROLOG_BEGIN_TAG 
// This is an automatically generated prolog. 
//  
// fips1110 src/hbfw/fsp/targeting/adapters/assertadapter.H 1.2 
//  
// IBM CONFIDENTIAL 
//  
// OBJECT CODE ONLY SOURCE MATERIALS 
//  
// COPYRIGHT International Business Machines Corp. 2012 
// All Rights Reserved 
//  
// The source code for this program is not published or otherwise 
// divested of its trade secrets, irrespective of what has been 
// deposited with the U.S. Copyright Office. 
//  
// IBM_PROLOG_END_TAG 

#ifndef __TARGETING_ASSERTADAPTER_H
#define __TARGETING_ASSERTADAPTER_H

/**
 *  @file targeting/adapters/assertadapter.H
 *
 *  @brief Defines interfaces for translating a generic platform neutral
 *      assertion request into a platform specific one.
 */
/**
 *  @page ChangeLogs Change Logs
 *  @section ASSERTADAPTER_H assertadapter.H
 *  @verbatim
 *
 *  Flag   Defect/Feature User     Date         Description
 *  ------ -------------- -------- ------------ --------------------------------
 *         F 831072       bofferdn Mar 01, 2012 Created
 *         F 850308       bofferdn Aug 28, 2012 Added CPPASSERT macro
 *
 *  @endverbatim
 */

//******************************************************************************
// Includes
//******************************************************************************

// Targeting
#include <builtins.h>
#include <targeting/adapters/traceadapter.H>

//******************************************************************************
// Interface
//******************************************************************************

namespace TRACE 
{
    // Point assert trace requests to the trace buffer
    extern TARGETING::TARG_TD_t g_assertTraceBuffer;
};

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

/**
 *  @enum AssertBehavior
 *  @brief Indicates the type of assert to perform (used by __platassert
 *      function)
 */
enum AssertBehavior
{
    // Standard assert, custom trace already logged
    ASSERT_TRACE_DONE, 

     // Standard assert, but with no custom trace logged
    ASSERT_TRACE_NOTDONE,
};

/**
 *  @brief Internal function utilized by assert macros to handle asserts in
 *      common way
 *
 *  @par Detailed Description:
 *      Writes an assert trace if user failed provide one (discouraged), then
 *      calls util::utilAssert to abend the process
 *
 *  @param[in] i_assertBehavior
 *      Internal enumeration indicating whether assert trace was already logged
 *      or not
 *
 *  @param[in] i_line
 *      Line number at which the assert macro was called.
 */
NO_RETURN void __platassert(
    AssertBehavior i_assertBehavior,
    int            i_line);

// Macro tricks to determine if there is a custom string.
#define __ASSERT_HAS_TRACE_(_1, _2, ...) _2
#define __ASSERT_HAS_TRACE(...) __ASSERT_HAS_TRACE_(0, ##__VA_ARGS__, 0)

/** 
 *  @brief Macro which writes custom assert trace, if provided
 *
 *  @par Detailed Description:
 *      This macro writes a custom assert trace, if provided.  Such tracing
 *      results in larger code size of the caller to call the trace routines
 *      but may provide additional debug information.  The "code" here will be
 *      compiled down to nothing or a single trace call by the optimizer.
 *      Search for "Constant Folding" for compiler background.
 *
 *  @param[in] expr,...
 *      Assert trace arguments, in printf format
 *
 *  @return N/A
 */
#define __ASSERT_DO_TRACE(expr, ...) \
{ \
    int __assert_unused_var = 0; \
    __assert_unused_var += (__ASSERT_HAS_TRACE(__VA_ARGS__) ? \
            TRACFCOMP(TRACE::g_assertTraceBuffer, \
                    "Assertion [ " #expr " ] failed; " __VA_ARGS__),1 \
                        : 0); \
}

/** 
 *  @brief Invoke an assertion
 *
 *  @par Detailed Description:
 *      Verifies caller supplied condition given by "expr", calls custom trace
 *      if provided, and calls internal __platassert function for remainder of
 *      common assert behavior.
 *
 *  @param[in] expr,...
 *      Assert trace arguments, in printf format
 *
 *  @return N/A
 */
#define TARG_ASSERT(expr,...) \
{\
    if (unlikely(!(expr)))\
    {\
        __ASSERT_DO_TRACE(expr, __VA_ARGS__); \
        __platassert((__ASSERT_HAS_TRACE(__VA_ARGS__) ? \
                 ASSERT_TRACE_DONE : ASSERT_TRACE_NOTDONE),\
                 __LINE__);\
    }\
}

/**
 *  @brief Macro for triggering a compile time assert
 */
#define CPPASSERT(exp) typedef char compile_time_assert_failed[2*((exp)!=0)-1]

// Empty macro definitions for when NDEBUG is defined.
#ifdef NDEBUG
#undef assert
#define TARG_ASSERT(expr,...) { }
#endif

#ifdef __cplusplus
};
#endif // __cplusplus

#endif // __TARGETING_ASSERTADAPTER_H
