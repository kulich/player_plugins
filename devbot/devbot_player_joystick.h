/*
 *  Copyright (C) 2011, Robert Tang <opensource@robotang.co.nz>
 *
 *  This is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public Licence
 *  along with this library; if not, see <http://www.gnu.org/licenses/>.
 */
  
#ifndef DEVBOT_PLAYER_JOYSTICK_H
#define DEVBOT_PLAYER_JOYSTICK_H

#include <libplayercore/playercore.h>
extern "C"
{
#include "devbot_protocol.h"
}

void devbot_player_joystick_init(Driver *devbot_obj_pointer, player_devaddr_t *addr);
void devbot_player_joystick_message_handler(message_t m);

#endif

