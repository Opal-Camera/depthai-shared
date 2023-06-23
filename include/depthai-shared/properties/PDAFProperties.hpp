#pragma once

#include "depthai-shared/properties/Properties.hpp"

namespace dai {

/**
 * Properties for UVC node
 */
struct PDAFProperties : PropertiesSerializable<Properties, PDAFProperties> {
    uint32_t numFramesToSkip;
    uint8_t refocus_bounds_min;
    uint8_t refocus_bounds_max;
    uint8_t refocus_reset_value;
    float pdaf_filter_threshold;
    uint8_t defaultFocusValue;
    float kalmanZ;
    float kalmanP;
    float kalmanR;
    float kalmanQ;
};

DEPTHAI_SERIALIZE_EXT(PDAFProperties, numFramesToSkip, refocus_bounds_min,
    refocus_bounds_max, refocus_reset_value, pdaf_filter_threshold, defaultFocusValue, kalmanZ, kalmanP, kalmanR, kalmanQ);

}  // namespace dai
