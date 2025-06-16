// IBM_PROLOG_BEGIN_TAG 
// This is an automatically generated prolog. 
//  
// fips1110 src/hbfw/fsp/targeting/adapters/assertadapter.C 1.1 
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

/**
 *  @file targeting/adapters/assertadapter.C
 *
 *  @brief Implementation for platform specific code which intercepts common
 *      targeting assert requests and translates them to FSP specific requests
 */
/**
 *  @page ChangeLogs Change Logs
 *  @section ASSERTADAPTER_C assertadapter.C
 *  @verbatim
 *
 *  Flag   Defect/Feature User     Date         Description
 *  ------ -------------- -------- ------------ --------------------------------
 *         F 831072       bofferdn Mar 01, 2012 Created
 *
 *  @endverbatim
 */

//******************************************************************************
// Includes
//******************************************************************************

// FSP
#include <utilbase.H>
#include <stdlib.h>

// Targeting
#include <targeting/adapters/assertadapter.H>
#include <targeting/common/trace.H>

//******************************************************************************
// Implementation
//******************************************************************************

// Initialize assert trace buffer
namespace TRACE
{
    ::TARGETING::TARG_TD_t g_assertTraceBuffer = {0};
    TRAC_INIT(&g_assertTraceBuffer, "TARG", 4096);
}

//******************************************************************************
// __platassert
//******************************************************************************

extern "C" void __platassert(
    const AssertBehavior i_assertBehavior,
    const int            i_line)  
{
    switch (i_assertBehavior)
    {
        // Caller logged own trace
        case ASSERT_TRACE_DONE:
            util::utilAssert(0);
            break;
        
        // Caller did not log trace; do it on behalf of caller
        case ASSERT_TRACE_NOTDONE:
            TRACFCOMP(TRACE::g_assertTraceBuffer,
                      "Assertion failed on line %d",i_line);
            util::utilAssert(0);
            break;

        default:
            util::utilAssert(0);
            break;
    }

    TRACFCOMP(TRACE::g_assertTraceBuffer,
              "Failed to assert properly, exiting");
    exit(-1);
}
