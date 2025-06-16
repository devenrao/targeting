/**
 *  @file persistrwattrcheck.C
 *
 *  @brief Verify enum attribute values are correct.
 */

#include <targeting/common/target.H>

namespace TARGETING
{

#ifndef __HOSTBOOT_RUNTIME

template<>
bool Target::tryGetAttr<ATTR_EECACHE_VPD_STATE>(typename AttributeTraits<ATTR_EECACHE_VPD_STATE>::Type& o_attrValue) const
{
    bool l_read = _tryGetAttrUnsafe(ATTR_EECACHE_VPD_STATE,sizeof(o_attrValue),&o_attrValue);
    if (l_read)
    {
        switch( o_attrValue )
        {
            case EECACHE_VPD_STATE_VPD_GOOD:
            case EECACHE_VPD_STATE_VPD_NEEDS_REFRESH:
            case EECACHE_VPD_STATE_INVALID:
                break;
            default:
                handleEnumCheckFailure(this, ATTR_EECACHE_VPD_STATE, (o_attrValue));
        }
    }
    return l_read;
}

template<>
bool Target::tryGetAttr<ATTR_FOUND_PRESENT_BY_SP>(typename AttributeTraits<ATTR_FOUND_PRESENT_BY_SP>::Type& o_attrValue) const
{
    bool l_read = _tryGetAttrUnsafe(ATTR_FOUND_PRESENT_BY_SP,sizeof(o_attrValue),&o_attrValue);
    if (l_read)
    {
        switch( o_attrValue )
        {
            case FOUND_PRESENT_BY_SP_NO_ATTEMPT:
            case FOUND_PRESENT_BY_SP_FOUND:
            case FOUND_PRESENT_BY_SP_MISSING:
            case FOUND_PRESENT_BY_SP_SKIP:
            case FOUND_PRESENT_BY_SP_INVALID:
                break;
            default:
                handleEnumCheckFailure(this, ATTR_FOUND_PRESENT_BY_SP, (o_attrValue));
        }
    }
    return l_read;
}

template<>
bool Target::tryGetAttr<ATTR_KEY_CLEAR_REQUEST>(typename AttributeTraits<ATTR_KEY_CLEAR_REQUEST>::Type& o_attrValue) const
{
    bool l_read = _tryGetAttrUnsafe(ATTR_KEY_CLEAR_REQUEST,sizeof(o_attrValue),&o_attrValue);
    if (l_read)
    {
        switch( o_attrValue )
        {
            case KEY_CLEAR_REQUEST_NONE:
            case KEY_CLEAR_REQUEST_ALL:
            case KEY_CLEAR_REQUEST_OS_KEYS:
            case KEY_CLEAR_REQUEST_POWERVM_SYSKEY:
            case KEY_CLEAR_REQUEST_RESERVED_1:
            case KEY_CLEAR_REQUEST_MFG_ALL:
            case KEY_CLEAR_REQUEST_MFG:
            case KEY_CLEAR_REQUEST_RESERVED_2:
            case KEY_CLEAR_REQUEST_INVALID:
                break;
            default:
                handleEnumCheckFailure(this, ATTR_KEY_CLEAR_REQUEST, (o_attrValue));
        }
    }
    return l_read;
}

template<>
bool Target::tryGetAttr<ATTR_PAYLOAD_KIND>(typename AttributeTraits<ATTR_PAYLOAD_KIND>::Type& o_attrValue) const
{
    bool l_read = _tryGetAttrUnsafe(ATTR_PAYLOAD_KIND,sizeof(o_attrValue),&o_attrValue);
    if (l_read)
    {
        switch( o_attrValue )
        {
            case PAYLOAD_KIND_UNKNOWN:
            case PAYLOAD_KIND_PHYP:
            case PAYLOAD_KIND_SAPPHIRE:
            case PAYLOAD_KIND_NONE:
            case PAYLOAD_KIND_INVALID:
                break;
            default:
                handleEnumCheckFailure(this, ATTR_PAYLOAD_KIND, (o_attrValue));
        }
    }
    return l_read;
}

#endif // !__HOSTBOOT_RUNTIME

bool Target::_tryGetAttr(ATTRIBUTE_ID i_attr, uint32_t i_size,
                                                       void* io_attrData) const
{
    #ifndef __HOSTBOOT_RUNTIME
    switch(i_attr)
    {
        case (ATTR_EECACHE_VPD_STATE):
            return tryGetAttr<ATTR_EECACHE_VPD_STATE>(
                * reinterpret_cast<
                    typename AttributeTraits<ATTR_EECACHE_VPD_STATE>::Type*
                >(io_attrData)
            );
        case (ATTR_FOUND_PRESENT_BY_SP):
            return tryGetAttr<ATTR_FOUND_PRESENT_BY_SP>(
                * reinterpret_cast<
                    typename AttributeTraits<ATTR_FOUND_PRESENT_BY_SP>::Type*
                >(io_attrData)
            );
        case (ATTR_KEY_CLEAR_REQUEST):
            return tryGetAttr<ATTR_KEY_CLEAR_REQUEST>(
                * reinterpret_cast<
                    typename AttributeTraits<ATTR_KEY_CLEAR_REQUEST>::Type*
                >(io_attrData)
            );
        case (ATTR_PAYLOAD_KIND):
            return tryGetAttr<ATTR_PAYLOAD_KIND>(
                * reinterpret_cast<
                    typename AttributeTraits<ATTR_PAYLOAD_KIND>::Type*
                >(io_attrData)
            );
        case (ATTR_SECURE_VERSION_LOCKIN_POLICY):
            return tryGetAttr<ATTR_SECURE_VERSION_LOCKIN_POLICY>(
                * reinterpret_cast<
                    typename AttributeTraits<ATTR_SECURE_VERSION_LOCKIN_POLICY>::Type*
                >(io_attrData)
            );
        case (ATTR_TPM_REQUIRED):
            return tryGetAttr<ATTR_TPM_REQUIRED>(
                * reinterpret_cast<
                    typename AttributeTraits<ATTR_TPM_REQUIRED>::Type*
                >(io_attrData)
            );
        case (ATTR_TPM_UNUSABLE):
            return tryGetAttr<ATTR_TPM_UNUSABLE>(
                * reinterpret_cast<
                    typename AttributeTraits<ATTR_TPM_UNUSABLE>::Type*
                >(io_attrData)
            );
        default:
            return _tryGetAttrUnsafe(i_attr, i_size, io_attrData);
    }
    #else
        return _tryGetAttrUnsafe(i_attr, i_size, io_attrData);
    #endif
}

#if !defined(__HOSTBOOT_RUNTIME) && defined(__HOSTBOOT_MODULE)
template<>
bool Target::tryGetAttr<ATTR_SECURE_VERSION_LOCKIN_POLICY>(typename AttributeTraits<ATTR_SECURE_VERSION_LOCKIN_POLICY>::Type& o_attrValue) const
{
    bool l_read = _tryGetAttrUnsafe(ATTR_SECURE_VERSION_LOCKIN_POLICY,sizeof(o_attrValue),&o_attrValue);
    if (l_read)
    {
        do {
            if (o_attrValue >= 0 && o_attrValue <= 1)
            {
                break;
            }
            handleRangeCheckFailure(this,ATTR_SECURE_VERSION_LOCKIN_POLICY,o_attrValue);
       } while(0);
   }
   return l_read;
}
template<>
bool Target::tryGetAttr<ATTR_TPM_REQUIRED>(typename AttributeTraits<ATTR_TPM_REQUIRED>::Type& o_attrValue) const
{
    bool l_read = _tryGetAttrUnsafe(ATTR_TPM_REQUIRED,sizeof(o_attrValue),&o_attrValue);
    if (l_read)
    {
        do {
            if (o_attrValue >= 0 && o_attrValue <= 1)
            {
                break;
            }
            handleRangeCheckFailure(this,ATTR_TPM_REQUIRED,o_attrValue);
       } while(0);
   }
   return l_read;
}
template<>
bool Target::tryGetAttr<ATTR_TPM_UNUSABLE>(typename AttributeTraits<ATTR_TPM_UNUSABLE>::Type& o_attrValue) const
{
    bool l_read = _tryGetAttrUnsafe(ATTR_TPM_UNUSABLE,sizeof(o_attrValue),&o_attrValue);
    if (l_read)
    {
        do {
            if (o_attrValue >= 0 && o_attrValue <= 1)
            {
                break;
            }
            handleRangeCheckFailure(this,ATTR_TPM_UNUSABLE,o_attrValue);
       } while(0);
   }
   return l_read;
}
void validateAllRwNvAttr(const Target* i_pTarget)
{
    AttributeTraits<ATTR_EECACHE_VPD_STATE>::Type o_eecache_vpd_state_value;
    i_pTarget->tryGetAttr<ATTR_EECACHE_VPD_STATE>(o_eecache_vpd_state_value);

    AttributeTraits<ATTR_FOUND_PRESENT_BY_SP>::Type o_found_present_by_sp_value;
    i_pTarget->tryGetAttr<ATTR_FOUND_PRESENT_BY_SP>(o_found_present_by_sp_value);

    AttributeTraits<ATTR_KEY_CLEAR_REQUEST>::Type o_key_clear_request_value;
    i_pTarget->tryGetAttr<ATTR_KEY_CLEAR_REQUEST>(o_key_clear_request_value);

    AttributeTraits<ATTR_PAYLOAD_KIND>::Type o_payload_kind_value;
    i_pTarget->tryGetAttr<ATTR_PAYLOAD_KIND>(o_payload_kind_value);

    AttributeTraits<ATTR_SECURE_VERSION_LOCKIN_POLICY>::Type o_secure_version_lockin_policy_value;
    i_pTarget->tryGetAttr<ATTR_SECURE_VERSION_LOCKIN_POLICY>(o_secure_version_lockin_policy_value);

    AttributeTraits<ATTR_TPM_REQUIRED>::Type o_tpm_required_value;
    i_pTarget->tryGetAttr<ATTR_TPM_REQUIRED>(o_tpm_required_value);

    AttributeTraits<ATTR_TPM_UNUSABLE>::Type o_tpm_unusable_value;
    i_pTarget->tryGetAttr<ATTR_TPM_UNUSABLE>(o_tpm_unusable_value);

}
#endif // !__HOSTBOOT_RUNTIME &&__HOSTBOOT_MODULE
} // namespace TARGETING

