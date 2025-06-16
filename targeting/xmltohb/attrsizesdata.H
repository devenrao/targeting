
#ifndef TARG_ATTR_SIZES
#define TARG_ATTR_SIZES

#include <stdint.h>
#include <vector>
#include <array>

/**
 * @file attrsizesdata.H
 *
 * @brief The file contains the data structure that holds the sizes and types
 *         of different attributes. Attributes represented as arrays also have
 *         dimensions associated with the array.
 */

namespace TARGETING
{

enum ATTR_DATA_TYPE
{
    UINT8_T_TYPE,
    INT8_T_TYPE,
    UINT16_T_TYPE,
    INT16_T_TYPE,
    UINT32_T_TYPE,
    INT32_T_TYPE,
    UINT64_T_TYPE,
    INT64_T_TYPE
};

enum ATTR_DATA_SIZE
{
    UINT8_T_SIZE = sizeof(uint8_t),
    INT8_T_SIZE = sizeof(int8_t),
    UINT16_T_SIZE = sizeof(uint16_t),
    INT16_T_SIZE = sizeof(int16_t),
    UINT32_T_SIZE = sizeof(uint32_t),
    INT32_T_SIZE = sizeof(int32_t),
    UINT64_T_SIZE = sizeof(uint64_t),
    INT64_T_SIZE = sizeof(int64_t)
};

typedef struct
{
    uint32_t attrHash;
    ATTR_DATA_TYPE dataType;
    ATTR_DATA_SIZE dataSize;
    bool isArray;
    std::vector<uint32_t>dimensions;

} attrSizeData_t;

constexpr bool ARRAY = true;
constexpr bool NOT_ARRAY = false;

// Array format:
// {attr hash, attr data type, attr data size, array or not, array dimensions}
extern const std::array<attrSizeData_t, 2080>g_attrSizesArr;

} // namespace TARGETING
#endif // #ifndef TARG_ATTR_SIZES
