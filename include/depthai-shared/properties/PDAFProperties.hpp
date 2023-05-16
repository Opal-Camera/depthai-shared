#pragma once

#include "depthai-shared/properties/Properties.hpp"

namespace dai {

/**
 * Properties for UVC node
 */
struct PDAFProperties : PropertiesSerializable<Properties, PDAFProperties> {
    int dummy;
};

DEPTHAI_SERIALIZE_EXT(PDAFProperties, dummy);

}  // namespace dai
