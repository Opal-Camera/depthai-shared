#pragma once

#include "depthai-shared/properties/Properties.hpp"

namespace dai {

/**
 * Properties for UVC node
 */
struct PDAFProperties : PropertiesSerializable<Properties, PDAFProperties> {
    uint32_t numFramesToSkip;
};

DEPTHAI_SERIALIZE_EXT(PDAFProperties, numFramesToSkip);

}  // namespace dai
