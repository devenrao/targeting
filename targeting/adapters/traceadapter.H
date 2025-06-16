// IBM_PROLOG_BEGIN_TAG 
// This is an automatically generated prolog. 
//  
// fips1110 src/hbfw/fsp/targeting/adapters/traceadapter.H 1.1 
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

#ifndef __TARGETING_TRACEADAPTER_H
#define __TARGETING_TRACEADAPTER_H

/**
 *  @file targeting/adapters/traceadapter.H
 *
 *  @brief Platform specific targeting trace macro support
 */
/**
 *  @page ChangeLogs Change Logs
 *  @section TRACEADAPTER_H traceadapter.H
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

// Other Components
#include <tracinterface.H>

/**
 *  @brief Adapt platform testcase INF_MRK to local INFO_MRK
 */
#define INF_MRK INFO_MRK

namespace TARGETING
{
    /**
     *  @brief Map platform specific trace type to common trace type
     */
    typedef trace_desc_t TARG_TD_t;

    /**
     *  @brief Export the trace descriptor
     */
    extern TARG_TD_t g_trac_targeting;
}

#endif // __TARGETING_TRACEADAPTER_H
