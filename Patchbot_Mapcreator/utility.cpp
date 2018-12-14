#include "utility.h"

bool Utility::is_number(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

TileType Utility::get_tile_type_from_char(char p_char)
{
	switch (p_char)
	{
	case 'P': return ROOT_SERVER;		  break;
	case ' ': return STEELPLANKS;		  break;
	case '#': return INDESTRUCTABLE_WALL; break;
	case 'M': return DESTRUCTABLE_WALL;	  break;
	case 'd': return MANUAL_DOOR_CLOSED;  break;
	case 'D': return AUTO_DOOR_CLOSED;    break;
	case 'g': return ALIEN_GRASS;		  break;
	case '.': return GRAVEL;			  break;
	case 'x': return SECRET_ENTRANCE;	  break;
	case 'O': return ABYSS;				  break;
	case '~': return WATER;				  break;
	case 'p': return PATCHBOT;            break;
	case '1': return BUGGER;			  break;
	case '2': return PUSHER;			  break;
	case '3': return DIGGER;			  break;
	case '4': return SWIMMER;			  break;
	case '5': return FOLLOWER;			  break;
	case '6': return HUNTER;			  break;
	case '7': return SNIFFER;			  break;
	}
}




