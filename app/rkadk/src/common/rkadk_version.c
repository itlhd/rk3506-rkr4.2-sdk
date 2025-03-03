/*
 * Copyright (c) 2022 Rockchip, Inc. All Rights Reserved.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include "rkadk_version.h"
#include "rkadk_log.h"

void RKADK_VERSION_Dump() {
    RKADK_LOGP("---------------------------------------------------------");
    RKADK_LOGP("rkadk version: %s", stVersionInfo);
    RKADK_LOGP("rkadk building: %s", stVersionBuild);
    RKADK_LOGP("---------------------------------------------------------");
}
