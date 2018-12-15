#ifndef __VIEW_MODEL_H_DEFINED__
#define __VIEW_MODEL_H_DEFINED__

#include <map>
#include <qimage.h>

#include "map.h"


class ViewModel
{
public:
	ViewModel();

	void load_images_into_map();

	// getter and setter for m_cursor_tile_type
	void set_cursor_tile_type(TileType p_new_tile_type);
	TileType get_cursor_tile_type() const;

private:
	// stores the map, which is currently being edited
	std::shared_ptr<Map> m_current_map;

	// stores the tile_type on cursor
	TileType m_cursor_tile_type;

	// stores all needed images in a map
	std::shared_ptr<std::map<char, QImage>> m_image_map;
};

#endif