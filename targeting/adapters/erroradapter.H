// IBM_PROLOG_BEGIN_TAG 
// This is an automatically generated prolog. 
//  
// fips1110 src/hbfw/fsp/targeting/adapters/erroradapter.H 1.1 
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

#ifndef __TARGETING_ERRORADAPTER_H
#define __TARGETING_ERRORADAPTER_H

/**
 *  @file targeting/adapters/erroradapter.H
 *
 *  @brief Adapts platform neutral error log code to platform specific support.
 */
/**
 *  @page ChangeLogs Change Logs
 *  @section ERRORADAPTER_H erroradapter.H
 *  @verbatim
 *
 *  Flag   Defect/Feature User     Date         Description
 *  ------ -------------- -------- ------------ --------------------------------
 *         F 831072       bofferdn Mar 01, 2012 Created
 *
 *  @endverbatim
 */

// Include the platform specific errlentry.H file and
// pick up the platform specific errlHndlt_t typedef. This is enough for
// common code to use pass errlHndl_t pointers around and check for NULL
#ifdef FSP
#include <errlentry.H>
#include <targeting/common/trace.H>

namespace COMMON
{

namespace ERRORLOG
{
    /**
     *  @brief Import error log type into namespace
     */
    typedef ::ErrlEntry ErrlEntry;

    /**
     *  @brief Commit/delete/nullify an error log
     *
     *  @param[in/out] io_pError
     *      On input, the error log to commit (should be !NULL).  If NULL, the
     *      operation will be a noop.  On output, the error log will be deleted
     *      and nullified in the caller's context.
     *
     *  @param[in] i_committerComp
     *      The component ID of the comitter
     */
    inline void errlCommit(
              errlHndl_t& io_pError,
        const comp_id_t   i_committerComp)
    {
       if(io_pError != NULL)
       {
           io_pError->commit(i_committerComp,ERRL_ACTION_HIDDEN);
           delete io_pError;
           io_pError = NULL;
       }
    }

} // End namespace COMMON

} // End namespace ERRORLOG
#endif
#endif // __TARGETING_ERRORADAPTER_H
