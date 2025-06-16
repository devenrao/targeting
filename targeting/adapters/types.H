// IBM_PROLOG_BEGIN_TAG 
// This is an automatically generated prolog. 
//  
// fips1110 src/hbfw/fsp/targeting/adapters/types.H 1.1 
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

#ifndef __TARGETING_TYPES_H
#define __TARGETING_TYPES_H

/**
 *  @file targeting/adapters/types.H
 *
 *  @brief Adapts various common types to platform specific types
 */
/**
 *  @page ChangeLogs Change Logs
 *  @section TYPES_H types.H
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

// STD
#include <stdint.h>

// Other Components
#include <utilsingleton.H>
#include <fips_comp_id.H>

// This component
#include <targeting/adapters/sync.h>
#include <builtins.h>

/**
 *  @brief Adapt common singleton to platform specific singleton
 *
 *  @param[in] __T__
 *      Type of singleton (fully namespaced)
 *
 *  @param[in] __NAME_
 *      Name to give the singleton
 */
#define TARG_DECLARE_SINGLETON(__T__,__NAME__) \
    typedef util::SingletonHolder<__T__> __NAME__

/**
 *  @brief Adapt common singleton "getter" to the platform specific version
 *
 *  @param[in] __TYPE__
 *      The singleton to locate, using the typedef previously declared above
 *
 *  @return Reference to the singleton
 */
#define TARG_GET_SINGLETON(__TYPE__) \
    __TYPE__::Instance()

#endif // __TARGETING_TYPES_H
