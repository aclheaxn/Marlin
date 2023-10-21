/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#include "../DGUSScreenHandlerBase.h"

typedef DGUSScreenHandler DGUSScreenHandlerClass;

#if ENABLED(POWER_LOSS_RECOVERY)
  #define PLR_SCREEN_RECOVER DGUSLCD_SCREEN_SDPRINTMANIPULATION
  #define PLR_SCREEN_CANCEL DGUSLCD_SCREEN_STATUS
#endif
<<<<<<<< HEAD:Marlin/src/HAL/ESP32/watchdog.h

  esp_err_t esp_task_wdt_reset();

#ifdef __cplusplus
  }
#endif

// Initialize watchdog with a 4 second interrupt time
void watchdog_init();

// Reset watchdog.
inline void HAL_watchdog_refresh() { esp_task_wdt_reset(); }
========
>>>>>>>> upstream/bugfix-2.0.x:Marlin/src/lcd/extui/dgus/fysetc/DGUSScreenHandler.h
