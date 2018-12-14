#ifndef __MAP_H_DEFINED__
#define __MAP_H_DEFINED__

#include <vector>
#include <string>

#include "tiletype.h"
#include "exceptions.h"
#include "utility.h"

class Map
{
public:
	Map(int p_map_width, int p_map_height, std::vector<TileType> p_map_data);

	int get_map_width() const;
	int get_map_height() const;

	static Map load_map(const std::string& p_file_name);

	static void save_map();

private:
	// height and width of map
	int m_map_width;
	int m_map_height;

	// map_data
	std::vector<TileType> m_map_data;
};
#endif
