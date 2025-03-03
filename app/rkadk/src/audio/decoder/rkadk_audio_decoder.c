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

#include "rkadk_audio_decoder.h"
#include "rkadk_audio_decoder_mp3.h"
#include "rkadk_param.h"
#include <unistd.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif
#ifndef OS_RTT
#include "audio_server.h"
#else
#include "../../common_algorithm/misc/include/audio_server.h"
#endif
#ifdef __cplusplus
}
#endif

RKADK_S32 RKADK_AUDIO_DECODER_Register(RKADK_CODEC_TYPE_E eCodecType) {
  int ret = 0;
  if (eCodecType == RKADK_CODEC_TYPE_MP3) {
    ret = RegisterAdecMp3();
    if (ret) {
      RKADK_LOGE("Register Mp3 decoder failed(%d)", ret);
      return RKADK_FAILURE;
    }
  } else {
    RKADK_LOGE("Unsupported audio decoder type[%d]", eCodecType);
    return RKADK_FAILURE;
  }

  return RKADK_SUCCESS;
}

RKADK_S32 RKADK_AUDIO_DECODER_UnRegister(RKADK_CODEC_TYPE_E eCodecType) {
  int ret = 0;
  if (eCodecType == RKADK_CODEC_TYPE_MP3) {
    ret = UnRegisterAdecMp3();
    if (ret) {
      RKADK_LOGE("UnRegister Mp3 decoder failed(%d)", ret);
      return RKADK_FAILURE;
    }
  } else {
    RKADK_LOGE("Unsupported audio decoder type[%d]", eCodecType);
    return RKADK_FAILURE;
  }

  return RKADK_SUCCESS;
}
