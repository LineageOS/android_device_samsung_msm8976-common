/*
 * Copyright (c) 2014 The CyanogenMod Project
 * Copyright (c) 2017 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define LOG_TAG "PowerHAL_H_Ext"
#include <utils/Log.h>

#include "utils.h"

/* touchkeys */
#define TK_POWER "/sys/class/input/input1/enabled"

/* touchscreen */
#define TS_POWER "/sys/class/input/input2/enabled"

void cm_power_set_interactive_ext(int on) {
    ALOGD("%s: %s input devices", __func__, on ? "enabling" : "disabling");
    sysfs_write(TK_POWER, on ? "1" : "0");
    sysfs_write(TS_POWER, on ? "1" : "0");
}
