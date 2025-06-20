/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: src/include/usr/targeting/common/utilFilter.H $               */
/*                                                                        */
/* OpenPOWER HostBoot Project                                             */
/*                                                                        */
/* Contributors Listed Below - COPYRIGHT 2021,2024                        */
/* [+] International Business Machines Corp.                              */
/*                                                                        */
/*                                                                        */
/* Licensed under the Apache License, Version 2.0 (the "License");        */
/* you may not use this file except in compliance with the License.       */
/* You may obtain a copy of the License at                                */
/*                                                                        */
/*     http://www.apache.org/licenses/LICENSE-2.0                         */
/*                                                                        */
/* Unless required by applicable law or agreed to in writing, software    */
/* distributed under the License is distributed on an "AS IS" BASIS,      */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or        */
/* implied. See the License for the specific language governing           */
/* permissions and limitations under the License.                         */
/*                                                                        */
/* IBM_PROLOG_END_TAG                                                     */
#ifndef __TARGETING_COMMON_UTIL_FILTER_H
#define __TARGETING_COMMON_UTIL_FILTER_H

/**
 *  @file targeting/common/utilFilter.H
 *
 *  @brief Targeting Filter utility functions
 */

#include <attributeenums.H>
#include <targeting/common/predicates/predicates.H>
#include <targeting/common/iterators/targetiterator.H>
#include <targeting/common/iterators/rangefilter.H>

namespace TARGETING
{

    /**
     * Enum of functional states for use with calls to getChip/ChipletResources
     */
    enum ResourceState
    {
        UTIL_FILTER_ALL,                     // All targets
        UTIL_FILTER_PRESENT,                 // Present at minimum
        UTIL_FILTER_FUNCTIONAL,              // Functional targets only
        UTIL_FILTER_PRESENT_NON_FUNCTIONAL,  // All present and non-functional
        UTIL_FILTER_NON_FUNCTIONAL           // All non-functional
    };

/*
 * Enum of "Extended Cache-Only" (ECO) core status for use with calls to getCoreChiplets. A core flagged with ECO Mode
 * Enabled is only used for its L3 cache.
 */
enum CoreEcoState
{
    UTIL_FILTER_CORE_ALL,    // All core chiplets regardless of ECO status
    UTIL_FILTER_CORE_ECO,    // Only core chiplets with ECO mode Enabled
    UTIL_FILTER_CORE_NON_ECO // Only core chiplets with ECO mode Disabled
};

/**
 * @brief Populate the o_vector with target object pointers based on the
 *        requested class, type, and functional state.
 *
 * @parm[out] o_vector, reference of vector of target pointers.
 * @parm[in]  i_class,  the class of the targets to be obtained
 * @parm[in]  i_type,   the type of the targets to be obtained
 * @parm[in]  i_state,  Selection filter based on ResourceState enum,
 *                      designates all, present, or functional
 *
 * @return N/A
 */
void getClassResources( TARGETING::TargetHandleList & o_vector,
                        CLASS i_class, TYPE  i_type, ResourceState i_state );

/**
 * @brief Predicate function to sort by HUID
 *
 * @parm[in]  t1, Target 1 for HUID comparison against target 2
 * @parm[in]  t2, Target 2 for HUID comparison against target 1
 *
 * @return bool, true if t1 HUID < t2 HUID, false otherwise
 */
inline bool compareTargetHuid(TargetHandle_t t1, TargetHandle_t t2)
{
  return (t1->getAttr<ATTR_HUID>() < t2->getAttr<ATTR_HUID>());
}

/**
 * @brief Predicate function to sort by Affinity path (lexicographical order)
 *
 * @parm[in]  t1, Target 1 for AffinityPath comparison against target 2
 * @parm[in]  t2, Target 2 for AffinityPath comparison against target 1
 *
 * @return bool, true if t1 AffinityPath < t2 AffinityPath, false otherwise
 */
inline bool compareAffinity(TargetHandle_t t1, TargetHandle_t t2)
{
    EntityPath t1_Affinity = t1->getAttr<ATTR_AFFINITY_PATH>();
    EntityPath t2_Affinity = t2->getAttr<ATTR_AFFINITY_PATH>();
    return t1_Affinity < t2_Affinity;
}

/**
 * @brief Predicate function to sort by CHIP_UNIT
 *
 * @parm[in]  t1, Target 1 for CHIP_UNIT comparison against target 2
 * @parm[in]  t2, Target 2 for CHIP_UNIT comparison against target 1
 *
 * @return bool, true if t1 CHIP_UNIT < t2 CHIP_UNIT, false otherwise
 */
inline bool compareTargetChipUnit(TargetHandle_t t1, TargetHandle_t t2)
{
  return (t1->getAttr<ATTR_CHIP_UNIT>() < t2->getAttr<ATTR_CHIP_UNIT>());
}

/**
 * @brief Populate the o_vector with target chip pointers based on the
 *        requested type, and functional state.
 *
 * @parm[out] o_vector, reference of vector of target pointers.
 * @parm[in]  i_type, the type of the chip targets to be obtained
 * @parm[in]  i_state, Selection filter based on ResourceState enum
 *
 * @return N/A
 */
void getChipResources(TARGETING::TargetHandleList & o_vector,
                      TYPE i_type, ResourceState i_state );

/**
 * @brief Populate the o_vector with target enc pointers based on the
 *        requested type, and functional state.
 *
 * @parm[out] o_vector, reference of vector of target pointers.
 * @parm[in]  i_type, the type of the chip targets to be obtained
 * @parm[in]  i_state, Selection filter based on ResourceState enum
 *
 * @return N/A
 */
void getEncResources(TARGETING::TargetHandleList & o_vector,
                      TYPE i_type, ResourceState i_state );

/**
 * @brief Populate the o_vector with target chiplet pointers based on the
 *        requested type, and functional state.
 *
 * @parm[out] o_vector, reference of vector of target pointers.
 * @parm[in]  i_type, the type of the chiplet targets to be obtained
 * @parm[in]  i_state, Selection filter based on ResourceState enum
 *
 * @return N/A
 */
void getChipletResources(TARGETING::TargetHandleList & o_vector,
                      TYPE i_type, ResourceState i_state );


/**
 * @brief Populate the o_vector with target chip pointers based on the
 *        requested type, and functional state.
 *
 * @parm[out] o_vector, reference of vector of target pointers.
 * @parm[in]  i_type, the type of the chip targets to be obtained
 * @parm[in]  i_functional, set to true to return only functional targets
 *
 * @return N/A
 */
void getAllChips(TARGETING::TargetHandleList & o_vector,
                      TYPE i_type, bool i_functional = true );

/**
 * @brief Populate the output target handle list with ASIC target handles based
 *     on the requested type and functional state.
 *
 * @parm[out] o_asics      Reference to a vector holding target pointers
 * @parm[in]  i_asicType   The type of the ASIC targets to be obtained
 * @parm[in]  i_functional Set to true to return only functional targets
 *
 * @return N/A
 */
void getAllAsics(TARGETING::TargetHandleList& o_asics,
                 TYPE i_asicType,
                 bool i_functional = true);

/**
 * @brief Populate the o_vector with target chiplet pointers based on the
 *        requested type, and functional state.
 *
 * @parm[out] o_vector, reference of vector of target pointers.
 * @parm[in]  i_type, the type of the chiplet targets to be obtained
 * @parm[in]  i_functional, set to true to return only functional targets
 *
 * @return N/A
 */
void getAllChiplets(TARGETING::TargetHandleList & o_vector,
                      TYPE i_type, bool i_functional = true );

/**
 * @brief Populate the o_vector with chiplet target object pointers associated
 *        to the input chip
 *
 * @parm[out] o_vector, reference of vector of target pointers.
 * @parm[in]  i_chip, the chip target for retrieving its child chiplets
 * @parm[in]  i_type, the type of the chiplet targets to be obtained
 * @parm[in]  i_functional, set to true to return only functional targets
 *
 * @return N/A
 */
void getChildChiplets(TARGETING::TargetHandleList & o_vector,
               const Target * i_chip, TYPE i_type, bool i_functional = true );


/**
 * @brief Populate the o_vector with target object pointers which are
 *        affinity children of the input target and filters based on a
 *        functional state
 *
 * @parm[out] o_vector, reference of vector of target pointers.
 * @parm[in]  i_target, the target for retrieving affinity-parent targets
 * @parm[in]  i_class, the class of the target to be obtained
 * @parm[in]  i_type, the type of the target to be obtained
 * @parm[in]  i_functional, set to true to return only functional targets
 * @parm[in]  i_state, Selection filter based on ResourceState enum
 *
 * @return N/A
 */
void getChildAffinityTargetsByState ( TARGETING::TargetHandleList& o_vector,
           const Target * i_target, CLASS i_class, TYPE i_type,
           ResourceState i_state );

/**
 * @brief Given an input target, finds all the targets linked to it via a
 *   PERVASIVE_CHILD relationship and writes them to the output vector.
 *   The class, type, and resource state further filter the set of results.
 *
 * @parm[out] o_vector, reference to vector of target pointers
 * @parm[in]  i_target, source target to search from
 * @parm[in]  i_class, class of the targets to be obtained
 * @parm[in]  i_type, type of the targets to be obtained
 * @parm[in]  i_state, specifies state the target should be in
 *
 * @return N/A
 */
void getPervasiveChildTargetsByState (
          TARGETING::TargetHandleList& o_vector,
    const Target*                      i_target,
          CLASS                        i_class,
          TYPE                         i_type,
          ResourceState                i_state );

/**
 * @brief  getTargetWithPGAttr
 *
 *                          Common HWAS function to find the target that
 *                          contains the PG attribute for the input target
 *                          (if such a target exists).
 *
 * @param[in] i_target      The target to obtain a PERV for.
 *
 * @return Target*          A pointer to the target with the PG attribute for the
 *                          input target, or nullptr if there is no such target.
 */
TARGETING::Target* getTargetWithPGAttr(TARGETING::Target& i_target);

/**
 * @brief Populate the o_vector with target object pointers which are
 *        affinity children of the input target
 *
 * @parm[out] o_vector, reference of vector of target pointers.
 * @parm[in]  i_target, the target for retrieving affinity-child targets
 * @parm[in]  i_class, the class of the target to be obtained
 * @parm[in]  i_type, the type of the target to be obtained
 * @parm[in]  i_functional, set to true to return only functional targets
 *
 * @return N/A
 */
inline
void getChildAffinityTargets ( TARGETING::TargetHandleList& o_vector,
           const Target * i_target, CLASS i_class, TYPE i_type,
           bool i_functional = true )
{
    getChildAffinityTargetsByState(o_vector, i_target, i_class, i_type,
                                   i_functional ? UTIL_FILTER_FUNCTIONAL :
                                                  UTIL_FILTER_ALL);
}

/**
 * @brief Populate the o_vector with target object pointers which are
 *        affinity parents of the input target and filters based on a
 *        functional state
 *
 * @parm[out] o_vector, reference of vector of target pointers.
 * @parm[in]  i_target, the target for retrieving affinity-parent targets
 * @parm[in]  i_class, the class of the target to be obtained
 * @parm[in]  i_type, the type of the target to be obtained
 * @parm[in]  i_functional, set to true to return only functional targets
 * @parm[in]  i_state, Selection filter based on ResourceState enum
 *
 * @return N/A
 */
void getParentAffinityTargetsByState ( TARGETING::TargetHandleList& o_vector,
           const Target * i_target, CLASS i_class, TYPE i_type,
           ResourceState i_state );
/**
 * @brief Given an input target, finds all the targets linked to it via a
 *   PARENT_PERVASIVE relationship and writes them to the output vector.
 *   The class, type, and resource state further filter the set of results.
 *
 * @parm[out] o_vector, reference to vector of target pointers
 * @parm[in]  i_target, source target to search from
 * @parm[in]  i_class, class of the targets to be obtained
 * @parm[in]  i_type, type of the targets to be obtained
 * @parm[in]  i_state, specifies state the target should be in
 *
 * @return N/A
 */
void getParentPervasiveTargetsByState (
          TARGETING::TargetHandleList& o_vector,
    const Target*                      i_target,
          CLASS                        i_class,
          TYPE                         i_type,
          ResourceState                i_state);

/**
 * @brief Given an input target, finds all the targets linked to it via a
 *   OMIC_PARENT relationship and writes them to the output vector.
 *   The class, type, and resource state further filter the set of results.
 *   Note: It is expected that only 1 target will be added to the output
 *         vector for getParentOmicTargetsByState calls.
 *
 * @parm[out] o_vector, reference to vector of target pointers
 * @parm[in]  i_target, source target to search from
 * @parm[in]  i_class, class of the targets to be obtained
 * @parm[in]  i_type, type of the targets to be obtained
 * @parm[in]  i_state, specifies state the target should be in
 *
 * @return N/A
 */
void getParentOmicTargetsByState (
          TARGETING::TargetHandleList& o_vector,
    const Target*                      i_target,
          CLASS                        i_class,
          TYPE                         i_type,
          ResourceState                i_state);

/**
 * @brief Given an input target, finds all the targets linked to it via a
 *   OMI_CHILD relationship and writes them to the output vector.
 *   The class, type, and resource state further filter the set of results.
 *
 * @parm[out] o_vector, reference to vector of target pointers
 * @parm[in]  i_target, source target to search from
 * @parm[in]  i_class, class of the targets to be obtained
 * @parm[in]  i_type, type of the targets to be obtained
 * @parm[in]  i_state, specifies state the target should be in
 *
 * @return N/A
 */
void getChildOmiTargetsByState (
          TARGETING::TargetHandleList& o_vector,
    const Target*                      i_target,
          CLASS                        i_class,
          TYPE                         i_type,
          ResourceState                i_state);

/**
 * @brief Given an input target, finds all the targets linked to it via a
 *   PAUC_PARENT relationship and writes them to the output vector.
 *   The class, type, and resource state further filter the set of results.
 *   Note: It is expected that only 1 PAUC target will be added to the output
 *         vector for getParentPaucTargetsByState calls.
 *
 * @parm[out] o_vector, reference to vector of target pointers
 * @parm[in]  i_target, source target to search from
 * @parm[in]  i_class, class of the targets to be obtained
 * @parm[in]  i_type, type of the targets to be obtained
 * @parm[in]  i_state, specifies state the target should be in
 *
 * @return N/A
 */
void getParentPaucTargetsByState (
          TARGETING::TargetHandleList& o_vector,
    const Target*                      i_target,
          CLASS                        i_class,
          TYPE                         i_type,
          ResourceState                i_state);

/**
 * @brief Given an input target, finds all the targets linked to it via a
 *   PAUC_CHILD relationship and writes them to the output vector.
 *   The class, type, and resource state further filter the set of results.
 *   Note: It is expected that 2 OMIC targets will be added to the output
 *         vector for getChildPaucTargetsByState calls.
 *
 * @parm[out] o_vector, reference to vector of target pointers
 * @parm[in]  i_target, source target to search from
 * @parm[in]  i_class, class of the targets to be obtained
 * @parm[in]  i_type, type of the targets to be obtained
 * @parm[in]  i_state, specifies state the target should be in
 *
 * @return N/A
 */
void getChildPaucTargetsByState (
          TARGETING::TargetHandleList& o_vector,
    const Target*                      i_target,
          CLASS                        i_class,
          TYPE                         i_type,
          ResourceState                i_state);

/**
 * @brief Given an input IOHS target, retrieves the associated PAU child. This
 *        will be the PAU with the CHIP_UNIT equal to the one the IOHS
 *        designates with IOHS_PHY_TO_PAU_MAPPING (if the IOHS's
 *        IOHS_CONFIG_MODE is OCAPI). If there is no such PAU, then the returned
 *        list is empty.
 *
 * @note o_vector is cleared of previous contents.
 * @note There will be a maximum of 1 target returned, minimum of 0.
 * @note If i_target is not an IOHS target, then no children are returned.
 *
 * @parm[out] o_vector, reference to vector of target pointers
 * @parm[in]  i_target, source target to search from
 * @parm[in]  i_class, class of the targets to be obtained
 * @parm[in]  i_type, type of the targets to be obtained
 * @parm[in]  i_state, specifies state the target should be in
 *
 * @return N/A
 */
void getChildPauTargetsByState(
          TARGETING::TargetHandleList& o_vector,
    const Target*                      i_target,
          CLASS                        i_class,
          TYPE                         i_type,
          ResourceState                i_state );

/**
 * @brief Given an input PAU target, retrieves the associated IOHS parent. This
 *        will be the IOHS with the IOHS_PHY_TO_PAU_MAPPING set to the PAU's
 *        CHIP_UNIT (if the IOHS's IOHS_CONFIG_MODE is OCAPI). If no such IOHS
 *        exists, the returned list is empty.
 *
 * @note o_vector is cleared of previous contents.
 * @note There will be a maximum of 1 target returned, minimum of 0.
 * @note If i_target is not a PAU target, then no parents are returned.
 *
 * @parm[out] o_vector, reference to vector of target pointers
 * @parm[in]  i_target, source target to search from
 * @parm[in]  i_class, class of the targets to be obtained
 * @parm[in]  i_type, type of the targets to be obtained
 * @parm[in]  i_state, specifies state the target should be in
 *
 * @return N/A
 */
void getParentIohsTargetsByState(
          TARGETING::TargetHandleList& o_vector,
    const Target*                      i_target,
          CLASS                        i_class,
          TYPE                         i_type,
          ResourceState                i_state );

/**
 * @brief Populate the o_vector with target object pointers which are
 *        affinity parents of the input target
 *
 * @parm[out] o_vector, reference of vector of target pointers.
 * @parm[in]  i_target, the target for retrieving affinity-parent targets
 * @parm[in]  i_class, the class of the target to be obtained
 * @parm[in]  i_type, the type of the target to be obtained
 * @parm[in]  i_functional, set to true to return only functional targets
 *
 * @return N/A
 */
inline
void getParentAffinityTargets ( TARGETING::TargetHandleList& o_vector,
           const Target * i_target, CLASS i_class, TYPE i_type,
           bool i_functional = true )
{
    getParentAffinityTargetsByState(o_vector, i_target, i_class, i_type,
                                    i_functional ? UTIL_FILTER_FUNCTIONAL :
                                                   UTIL_FILTER_ALL);
}

/**
 * @brief return the parent chip target of the specified input chiplet
 *
 * @parm[in]  i_pChiplet, chiplet target for retrieving the parent chip target
 *
 * @return Parent chip target pointer or NULL if error
 */
const Target * getParentChip( const Target * i_pChiplet );


/**
 * @brief return the affinity parent target of the specified input unit
 *
 * @parm[in]  i_unit, unit target used for finding the parent target
 * @parm[in]  i_pType, type of the parent
 *
 * @return Parent target pointer or NULL if error
 */
Target * getAffinityParent( const Target * i_unit , TARGETING::TYPE i_pType );

/**
 * @brief return the physical parent target of the specified input unit
 *
 * @parm[in]  i_unit, unit target used for finding the parent target
 * @parm[in]  i_pType, type of the parent
 *
 * @return Parent target pointer or NULL if error
 */
Target * getParent( const Target * i_unit , TARGETING::TYPE i_pType );

/**
 * @brief return the immediate physical parent target of the specified input child
 *
 * @parm[in]  i_child, unit target used for finding the physical parent target
 *
 * @return Parent target pointer or NULL if error
 */
Target * getImmediateParentByPhysical( const Target * i_child );

/**
 * @brief return the immediate affinity parent target of the specified input child
 *
 * @parm[in]  i_child, unit target used for finding the affinity parent target
 *
 * @return Parent target pointer or NULL if error
 */
Target * getImmediateParentByAffinity( const Target * i_child );

/**
 * @brief return the EX target of the specified input core chiplet
 *
 * @parm[in]  i_pCoreChiplet, core chiplet target for retrieving the
 *            EX target
 *
 * @return EX target pointer or NULL if error
 */
const Target * getExChiplet( const Target * i_pCoreChiplet );

/**
 * @brief return the Core target of the specified input EX chiplet
 *
 * @parm[in]  i_pExChiplet, EX chiplet target for retrieving the
 *            Core target
 *
 * @return Core target pointer or NULL if error
 */
const Target * getCoreChiplet( const Target * i_pExChiplet );

/*
 * @brief Returns a list of core chiplet targets of the requested resource and "Extended Cache-Only" (ECO) state.
 *
 * @param[out]   o_coreList       A list of target handles matching the request.
 *
 * @param[in]    i_coreEcoState   The requested ECO state of the cores in the returned list. See CoreEcoState for valid
 *                                options.
 *
 * @param[in]    i_state          The requested resource state of the cores in the returned list. See ResourceState for
 *                                valid options.
 *
 * @param[in]    i_parent         The parent target to retrieve core chiplets from. Default nullptr; In that case all
 *                                cores in the system matching given criteria will be returned.
 */
void getCoreChiplets(TARGETING::TargetHandleList & o_coreList,
                     CoreEcoState                  i_coreEcoState,
                     ResourceState                 i_state,
                     Target *                      i_parent = nullptr);


/*
 * @brief Returns a list of non-ECO core chiplet targets of the requested functional state.
 *
 * @param[out]   o_coreList       A list of target handles matching the request.
 *
 * @param[in]    i_parent         The parent target to retrieve core chiplets from. Default nullptr; In that case all
 *                                cores in the system matching given criteria will be returned.
 *
 * @param[in]    i_functional     The requested functional state.
 *                                true:functional; false:present
 */
void getNonEcoCores(TARGETING::TargetHandleList & o_coreList,
                    Target*                       i_parent = nullptr,
                    bool                          i_functional = true);

/*
 * @brief Returns a list of ECO core chiplet targets of the requested functional state.
 *
 * @param[out]   o_coreList       A list of target handles matching the request.
 *
 * @param[in]    i_parent         The parent target to retrieve core chiplets from. Default nullptr; In that case all
 *                                cores in the system matching given criteria will be returned.
 *
 * @param[in]    i_functional     The requested functional state.
 *                                true:functional; false:present
 */
void getEcoCores(TARGETING::TargetHandleList & o_coreList,
                 Target*                       i_parent = nullptr,
                 bool                          i_functional = true);

/*
 * @brief Returns a list of FC chiplet targets of the requested resource state and with CORE children of the requested
 *        "Extended Cache-Only" (ECO) mode. The resource state requested of the FC will be used when searching for CORE
 *        children.
 *
 * @param[out]   o_coreList       A list of target handles matching the request.
 *
 * @param[in]    i_coreEcoState   The requested ECO state of the child cores. See CoreEcoState for valid options.
 *
 * @param[in]    i_state          The requested resource state of the FCs and COREs in the returned list.
 *                                See ResourceState for valid options.
 *
 * @param[in]    i_parent         The parent target to retrieve core chiplets from. Default nullptr; In that case all
 *                                cores in the system matching given criteria will be returned.
 */
void getFcsByEcoMode(TARGETING::TargetHandleList & o_fcList,
                     CoreEcoState                  i_coreEcoState,
                     ResourceState                 i_state,
                     Target *                      i_parent = nullptr);

/*
 * @brief Returns a list of FC chiplet targets whose child COREs are non-ECO. The functional state requested of the FC
 *        is also used when searching for its child COREs.
 *
 * @param[out]   o_fcList         A list of target handles matching the request.
 *
 * @param[in]    i_parent         The parent target to retrieve chiplets from. Default nullptr; In that case all
 *                                FCs in the system matching given criteria will be returned.
 *
 * @param[in]    i_functional     The requested functional state.
 *                                true:functional; false:present
 */
void getNonEcoFcs(TARGETING::TargetHandleList & o_fcList,
                  Target*                       i_parent = nullptr,
                  bool                          i_functional = true);

/*
 * @brief Returns a list of FC chiplet targets whose child COREs are ECO. The functional state requested of the FC
 *        is also used when searching for its child COREs.
 *
 * @param[out]   o_fcList         A list of target handles matching the request.
 *
 * @param[in]    i_parent         The parent target to retrieve chiplets from. Default nullptr; In that case all
 *                                FCs in the system matching given criteria will be returned.
 *
 * @param[in]    i_functional     The requested functional state.
 *                                true:functional; false:present
 */
void getEcoFcs(TARGETING::TargetHandleList & o_fcList,
               Target*                       i_parent = nullptr,
               bool                          i_functional = true);

/**
 * @brief Return a list of all cards in a system
 *
 * @param[out] o_vector - Vector of the matching targets.
 * @param[in] i_cardType - The Targeting type.
 * @param[in] i_function - Return only Functional cards, default = true
 *
 * @return NONE
 */
void getAllCards( TARGETING::TargetHandleList & o_vector,
                  TYPE i_cardType,
                  bool i_functional = true );


/**
 * @brief Return a list of all cards in a system
 *
 * @param[out] o_vector - Vector of the matching targets.
 * @param[in] i_cardType - The Targeting type.
 * @param[in] i_function - Return only Functional cards, default = true
 *
 * @return NONE
 */

void getAllLogicalCards( TARGETING::TargetHandleList & o_vector,
                         TYPE i_cardType,
                         bool i_functional = true );

/**
 * @brief Returns the list of targets which is an immediate peer of the source
 * target provided by the user.
 *
 * @par Detailed Description:
 *
 * Two types of filter provided here as argument -
 * a.   i_pPeerFilter, constrain the search only to follow PEER_TARGET links for
 *      leaf targets (of the source target, inclusive) that meet the filter
 *      criteria. Omitting the filter crosses all leaf targets of the source
 *      (inclusive) that have PEER_TARGET attributes
 * b.   i_pResultFilter, constrains the result targets returned, such that after
 *      crossing a peer link, only the first target ['if any'] matching the
 *      filter criteria [(searching upwards in the chain of physical parent
 *      targets)] is returned. Omitting the filter has the side effect of
 *      returning the target immediately on the other end of a peer link
 *
 * Filter usage guidelines -
 * 1.   If source target given by the user suports PEER TARGET Attribute &
 *      i_pPeerFilter is also provided then a Target list will be prepared by
 *      going inwards from the source target including the source target.
 *      If the source target doesn't support PEER Target Attribute & filter is
 *      provided then list will be prepared by going inwards from the source
 *      target excluding the source target.
 * 2.   If i_pResultFilter is NULL, then a Peer Target list which includes all
 *      Peer Targets of the source target list mentioned above in step 1, will
 *      be prepared and returned to the user. If i_pResultFilter is not NULL,
 *      then the filter will applied on the parent chain of all peer target
 *      found from the step 1 list above (inclusive), that matches the criteria
 *
 * @param[out] o_peerTargets List of target handles that match the specified
 *             criteria. This will be cleared in case not already done.
 * @param[in] i_pSrcTarget Target from which to search for other targets
 * @param[in] i_pPeerFilter to be applied on the target & target leafs that
 *            has PEER Target Attribute, as provided by user.
 *            i_pPeerFilter Pointer to a predicate to be evaluated against each
 *            candidate target (as determined by the source target, type, and
 *            recursion level parameters).
 * @param[in] i_pResultFilter to be applied on self and the Parent chain of
 *            Peer Targets of the source target & target leaf provided by user
 *            or evaluated on the basis of the i_pPeerFilter given by user.
 *            i_pResultFilter Pointer to a predicate to be evaluated against
 *            each candidate target (as determined by the source target, type,
 *            and recursion level parameters).
 *
 * @return N/A
 */
void getPeerTargets(
          TARGETING::TargetHandleList& o_peerTargets,
    const Target*                      i_pSrcTarget,
    const PredicateBase*               i_pPeerFilter = NULL,
    const PredicateBase*               i_pResultFilter = NULL);

/**
 * @brief Locates a present paired_type target that is paired based on rel_pos
 *
 * @param[in] i_source_tgt  Search for this target's pair
 * @param[in] i_paired_type Search for this type of paired target
 *                          (TYPE_PMIC and TYPE_POWER_IC are supported types)
 * @return Pointer to paired target or nullptr
 */
Target * getPositionPairedTarget(const Target * i_source_tgt,
                                 TYPE i_paired_type);


#if __cplusplus >= 201300

/* @brief Wrap the given utility filter function such that it can be called with
 * its normal arguments except the vector in the first position. That wrapper
 * will create that vector itself and return it, making the targeting filter
 * functions composable
 *
 * @param[in] i_functor      The function to call.
 * @return                   A wrapper which will call the original function
 *                           and return the first argument vector as a result.
 */
template<typename F>
auto composable(F&& i_functor)
{
    return [functor = std::move(i_functor)](auto&&... args)
    {
        TargetHandleList result;
        functor(result, std::forward<decltype(args)>(args)...);
        return result;
    };
}

#ifdef __HOSTBOOT_MODULE
/**
 * @brief Populate the o_vector with all targets that have the passed in attribute
 *
 * @parm[out] o_vector, reference of vector of target pointers.
 *
 * @return N/A
 */
template <ATTRIBUTE_ID A>
void getTargetsWithAttr(TargetHandleList& o_vector)
{
    Target* l_pSys = TARGETING::UTIL::assertGetToplevelTarget();

    PredicateAttr<A> l_predAttr;
    PredicatePostfixExpr l_predExpr;
    l_predExpr.push(&l_predAttr);

    targetService().getAssociated(o_vector,
                                  l_pSys,
                                  TargetService::CHILD,
                                  TargetService::ALL,
                                  &l_predExpr);

    return;
}

enum ocmbsInSystem : int
{
    // (default) Unknown which types of OCMBs are in the system
    // NOTE: This can represent the case that targeting is not fully up such that not all of the
    //       OCMBs have not been detected yet
    UTIL_OCMBS_UNDEFINED      = 0x00,

    UTIL_EXPLORER_FOUND       = 0x01,      // At least one Explorer is in the system
    UTIL_ODYSSEY_FOUND        = 0x02,      // At least one Odyssey is in the system

    UTIL_EXPLORER_AND_ODYSSEY = UTIL_EXPLORER_FOUND | UTIL_ODYSSEY_FOUND,
};

/**
 * @brief Checks to see if a specific ocmbsInSystem value (i_check) is contained in the
 *        enum that might hold multiple values (i_source)
 *
 * @param[in] i_source    A version of ocmbsInSystem that might hold multiple values
 * @param[in] i_check     A value of ocmbsInSystem that is checked to see if it is in i_source
 *
 * @return bool           True if i_check is in i_source; otherwise false
 */
inline bool compareOcmbsInSystem(const ocmbsInSystem& i_source,
                                 const ocmbsInSystem& i_check)
{
    return ((static_cast<int>(i_source) & static_cast<int>(i_check)) == static_cast<int>(i_check));
}

/**
 * @brief Determine the types of OCMB chips present in the System
 *
 * @param[in] i_detectionType   Determines if the search uses present (default), functional,
 *                              or other options
 *
 * @return ocmbsInSystem        Enum representing which, if any, OCMBs are found in the system
 */
ocmbsInSystem getOcmbChipTypesInSystem(const ResourceState & i_detectionType = UTIL_FILTER_PRESENT);

#endif // __HOSTBOOT_MODULE

#endif // __cplusplus >= 201300

}

#endif // __TARGETING_COMMON_UTIL_FILTER_H
