// IBM_PROLOG_BEGIN_TAG 
// This is an automatically generated prolog. 
//  
// fips1110 src/hbfw/fsp/targeting/adapters/vmmconst.h 1.1 
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

#ifndef __TARGETING_VMMCONST_H
#define __TARGETING_VMMCONST_H

/**
 *  @file targeting/adapters/vmmconst.h
 *
 *  @brief Provides Hostboot VMM addresses for the xmltohb compiler
 */
/**
 *  @page ChangeLogs Change Logs
 *  @section VMMCONST_H vmmconst.h
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

#include <limits.h>

/**
 *  @brief Attribute resource provider VMM address for PNOR image
 */
#define VMM_VADDR_ATTR_RP  (4ul * 1024ul * 1024ul * 1024ul)

#endif // __TARGETING_VMMCONST_H
