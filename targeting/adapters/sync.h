// IBM_PROLOG_BEGIN_TAG 
// This is an automatically generated prolog. 
//  
// fips1110 src/hbfw/fsp/targeting/adapters/sync.h 1.1 
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

#ifndef __TARGETING_SYNC_H
#define __TARGETING_SYNC_H

/**
 *  @file targeting/adapters/sync.h
 *
 *  @brief Defines platform specific mutex structures to ensure compatibility
 *      with common code, but which is not materially used by FSP otherwise
 */
/**
 *  @page ChangeLogs Change Logs
 *  @section SYNC_H sync.h
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

#include <stdint.h>

/**
 *  @brief Hostboot futex type; if Hostboot ever changes this structure,
 *      FSP code will need to reevaluate the compatibility
 */
struct _futex_imp_t
{
    uint64_t iv_val;
};

/**
 *  @brief Hostboot mutex type; if Hostboot ever changes this structure,
 *      FSP code will need to reevaluate the compatibility
 */
typedef _futex_imp_t mutex_t;

#endif // __TARGETING_SYNC_H
