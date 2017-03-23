namespace Kiasueq128v1_raw {

/*
 * Kiasu=-128 Reference C Implementation
 * 
 * Copyright 2014:
 *     Jeremy Jean <JJean@ntu.edu.sg>
 *     Ivica Nikolic <INikolic@ntu.edu.sg>
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 * 
 */

#include <stdint.h>

void aesTweakEncrypt(const uint8_t pt[16], 
                     const uint8_t key[16], 
                     const uint8_t tweak[8], 
                     uint8_t ct[16]);

void aesTweakDecrypt(const uint8_t ct[16],
                     const uint8_t key[16],
                     const uint8_t tweak[8],
                     uint8_t pt[16]);

} // namespace Kiasueq128v1_raw
