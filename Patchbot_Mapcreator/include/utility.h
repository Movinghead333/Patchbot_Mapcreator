#ifndef __UTILITY_H_DEFINED__
#define __UTILITY_H_DEFINED__

#include <string>
#include <sstream>

#include "exceptions.h"
#include "tiletype.h"

// class containing utility methods which do not have a specific context
class Utility
{
public:
	// checks wether a string can be converted to a number
	static bool is_number(const std::string& s);

	static TileType get_tile_type_from_char(char p_char);

	static char get_char_from_tile_type(TileType p_tile_type);
};

#endif