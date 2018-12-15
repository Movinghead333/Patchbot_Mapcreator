#ifndef __VIEW_MODEL_H_DEFINED__
#define __VIEW_MODEL_H_DEFINED__

#include "map.h"

class ViewModel
{
public:

	void set_cursor_tile_type(TileType p_new_tile_type);
	TileType get_cursor_tile_type() const;

private:
	std::shared_ptr<Map> m_current_map;

	TileType m_cursor_tile_type;
};

#endif