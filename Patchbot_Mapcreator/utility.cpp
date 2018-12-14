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

char Utility::get_char_from_tile_type(TileType p_tile_Type)
{
	switch (p_tile_Type)
	{
	case ROOT_SERVER:		  return 'P'; break;
	case STEELPLANKS:		  return ' '; break;
	case INDESTRUCTABLE_WALL: return '#'; break;
	case DESTRUCTABLE_WALL:   return 'M'; break;
	case MANUAL_DOOR_CLOSED:  return 'd'; break;
	case AUTO_DOOR_CLOSED:    return 'D'; break;
	case ALIEN_GRASS:		  return 'g'; break;
	case GRAVEL:			  return '.'; break;
	case SECRET_ENTRANCE:	  return 'x'; break;
	case ABYSS:				  return 'O'; break;
	case WATER:				  return '~'; break;
	case PATCHBOT:			  return 'p'; break;
	case BUGGER:			  return '1'; break;
	case PUSHER:			  return '2'; break;
	case DIGGER:			  return '3'; break;
	case SWIMMER:			  return '4'; break;
	case FOLLOWER:			  return '5'; break;
	case HUNTER:			  return '6'; break;
	case SNIFFER:			  return '7'; break;
	}
}




