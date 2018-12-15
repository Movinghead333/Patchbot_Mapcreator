#include "viewmodel.h"

ViewModel::ViewModel()
{
	load_images_into_map();
}

void ViewModel::load_images_into_map()
{
}

void ViewModel::set_cursor_tile_type(TileType p_new_tile_type)
{
	m_cursor_tile_type = p_new_tile_type;
}

TileType ViewModel::get_cursor_tile_type() const
{
	return m_cursor_tile_type;
}
