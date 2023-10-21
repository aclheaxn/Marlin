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

<<<<<<<< HEAD:Marlin/src/lcd/language/language_el_CY.h
/**
 * Greek (Cyprus)
 *
 * LCD Menu Messages
 * See also https://marlinfw.org/docs/development/lcd_language.html
 */

#include "language_el.h"

namespace Language_el_CY {
  using namespace Language_el; // Inherit undefined strings from Greek (or English)

  constexpr uint8_t CHARSIZE              = 2;
  LSTR LANGUAGE                           = _UxGT("Greek (Cyprus)");
}
========
#include "../DGUSScreenHandlerBase.h"

typedef DGUSScreenHandler DGUSScreenHandlerClass;

#if ENABLED(POWER_LOSS_RECOVERY)
  #define PLR_SCREEN_RECOVER DGUSLCD_SCREEN_SDPRINTMANIPULATION
  #define PLR_SCREEN_CANCEL DGUSLCD_SCREEN_STATUS
#endif
>>>>>>>> upstream/bugfix-2.0.x:Marlin/src/lcd/extui/dgus/hiprecy/DGUSScreenHandler.h
