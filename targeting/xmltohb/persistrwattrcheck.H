/**
 *  @file persistrwattrcheck.H
 *
 *  @brief Verify enum attribute values are correct.
 */

#ifndef PERSISTRWATTRCHECK_H
#define PERSISTRWATTRCHECK_H

template<>
bool Target::tryGetAttr<ATTR_EECACHE_VPD_STATE>(typename AttributeTraits<ATTR_EECACHE_VPD_STATE>::Type& o_attrValue) const;

template<>
bool Target::tryGetAttr<ATTR_FOUND_PRESENT_BY_SP>(typename AttributeTraits<ATTR_FOUND_PRESENT_BY_SP>::Type& o_attrValue) const;

template<>
bool Target::tryGetAttr<ATTR_KEY_CLEAR_REQUEST>(typename AttributeTraits<ATTR_KEY_CLEAR_REQUEST>::Type& o_attrValue) const;

template<>
bool Target::tryGetAttr<ATTR_PAYLOAD_KIND>(typename AttributeTraits<ATTR_PAYLOAD_KIND>::Type& o_attrValue) const;

template<>
bool Target::tryGetAttr<ATTR_SECURE_VERSION_LOCKIN_POLICY>(typename AttributeTraits<ATTR_SECURE_VERSION_LOCKIN_POLICY>::Type& o_attrValue) const;

template<>
bool Target::tryGetAttr<ATTR_TPM_REQUIRED>(typename AttributeTraits<ATTR_TPM_REQUIRED>::Type& o_attrValue) const;

template<>
bool Target::tryGetAttr<ATTR_TPM_UNUSABLE>(typename AttributeTraits<ATTR_TPM_UNUSABLE>::Type& o_attrValue) const;

#endif
