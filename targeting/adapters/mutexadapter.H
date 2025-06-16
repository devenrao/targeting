// IBM_PROLOG_BEGIN_TAG 
// This is an automatically generated prolog. 
//  
// fips1110 src/hbfw/fsp/targeting/adapters/mutexadapter.H 1.1 
//  
// IBM CONFIDENTIAL 
//  
// OBJECT CODE ONLY SOURCE MATERIALS 
//  
// COPYRIGHT International Business Machines Corp. 2013 
// All Rights Reserved 
//  
// The source code for this program is not published or otherwise 
// divested of its trade secrets, irrespective of what has been 
// deposited with the U.S. Copyright Office. 
//  
// IBM_PROLOG_END_TAG 
#ifndef __TARGETING_MUTEXADAPTER_H
#define __TARGETING_MUTEXADAPTER_H

/**
* @file mutexAdapter.H
*
* @brief Provides FSP specific TARGETING Mutex
*/

/**
 *  @page ChangeLogs Change Logs
 *  @section MUTEXADAPTER_H mutexadapter.H
 *  @verbatim
 *
 *  Flag   Defect/Feature User     Date         Description
 *  ------ -------------- -------- ------------ --------------------------------
 *         F 873769       mjjones  Mar 14, 2013 Created
 *
 *  @endverbatim
 */

#include <utilmutex.H>

#define TARG_MUTEX_TYPE \
 util::Mutex

#define TARG_MUTEX_INIT(_t)

#define TARG_MUTEX_DESTROY(_t)

#define TARG_MUTEX_LOCK(_t) \
 (_t).Lock()

#define TARG_MUTEX_UNLOCK(_t) \
 (_t).Unlock()

#endif
