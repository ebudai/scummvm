/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef ADL_CONSOLE_H
#define ADL_CONSOLE_H

#include "gui/debugger.h"

#include "common/hashmap.h"

namespace Common {
class String;
}

namespace Adl {

class AdlEngine;

class Console : public GUI::Debugger {
public:
	Console(AdlEngine *engine);

private:
	bool Cmd_Help(int argc, const char **argv);
	bool Cmd_Nouns(int argc, const char **argv);
	bool Cmd_Verbs(int argc, const char **argv);

	void printWordMap(const Common::HashMap<Common::String, uint> &wordMap);

	AdlEngine *_engine;
};

} // End of namespace Adl

#endif