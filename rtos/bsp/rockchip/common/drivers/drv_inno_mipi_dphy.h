/**
  * Copyright (c) 2024 Fuzhou Rockchip Electronics Co., Ltd
  *
  * SPDX-License-Identifier: Apache-2.0
  ******************************************************************************
  * @file    drv_inno_mipi_dphy.h
  * @author  Homgming Zou
  * @date    13-Sep-2024
  * @brief   inno mipi dphy driver
  *
  ******************************************************************************
  */

#ifndef _DRV_INNO_MIPI_DPHY_H_
#define _DRV_INNO_MIPI_DPHY_H_

/*******************************************************************************
 * Included Files
 ******************************************************************************/

#include "drv_display.h"

#ifdef RT_USING_INNO_MIPI_DPHY

#include "hal_base.h"

/*******************************************************************************
 * Pre-processor Definitions
 ******************************************************************************/

/*******************************************************************************
 * Public Types
 ******************************************************************************/

/*******************************************************************************
 * Public Data
 ******************************************************************************/
struct dphy_state
{
    struct udevice *dev;
    const void *data;
    struct MIPI_TX_PHY_REG *reg;
    uint32_t hw_base;
    unsigned int lane_mbps;
    uint8_t lanes;
    uint8_t soc_type;
};
/*******************************************************************************
 * Inline Functions
 ******************************************************************************/

/*******************************************************************************
 * Public Functions
 ******************************************************************************/

#endif
#endif /* _DRV_INNO_MIPI_DPHY_H_ */
