#include "viewmodel.h"

ViewModel::ViewModel()
{
	load_images();
}

void ViewModel::load_images()
{
	m_image_map = std::make_shared<std::map<TileType, QImage>>(
		std::map<TileType, QImage>());
	std::string base_path = "images\\";

	std::string image_paths[] = {
		"steelplanks.tga",
		"abyss.tga",
		"water.tga",
		"root_server.tga",
		"alien_grass.tga",
		"gravel.tga",
		"secret_entrance.tga",
		"manual_door.tga",
		"auto_door.tga",
		"indestructible_wall.tga", 
		"destructible_wall.tga",
		"patchbot.tga",
		"typ1_bugger.tga",
		"typ2_pusher.tga",
		"typ3_digger.tga",
		"typ4_swimmer.tga",
		"typ5_follower.tga",
		"typ6_hunter.tga",
		"typ7_sniffer.tga",
		"reset.tga"
	};

	for (int i = 0; i < sizeof(image_paths) / sizeof(image_paths[0]); i++)
	{
		// load image into texture object
		const Texture texture =
			Texture::load_texture(base_path + image_paths[i]);

		// get image data
		const std::vector<ubyte>& image_data = texture.get_image_data();

		// convert image data to QImage
		const QImage image(
			&image_data[0],
			texture.get_width(),
			texture.get_height(),
			QImage::Format_ARGB32);

		// mirror and the copy the image with the matching enum key into map
		m_image_map->insert(std::pair<TileType, QImage>(
			static_cast<TileType>(i), image.mirrored(false, true).copy() ));
	}
}

void ViewModel::load_map_from_file_path(const std::string & p_file_path)
{
	m_current_map = std::make_shared<Map>( Map::load_map(p_file_path) );
}

const QImage & ViewModel::find_qimage_by_tile_type(TileType p_tile_type) const
{
	return m_image_map->find(p_tile_type)->second;
}

const QImage & ViewModel::get_image_for_cursor_render() const
{
	return find_qimage_by_tile_type(m_cursor_tile_type);
}

bool ViewModel::map_available() const
{
	return m_current_map != nullptr;
}

Map& ViewModel::get_current_map()
{
	return *m_current_map.get();
}

void ViewModel::set_m_x_scrollbar_pos(int p_new_pos)
{
	m_x_scrollbar_pos = p_new_pos;
}

void ViewModel::set_m_y_scrollbar_pos(int p_new_pos)
{
	m_y_scrollbar_pos = p_new_pos;
}

int ViewModel::get_m_x_scrollbar_pos() const
{
	return m_x_scrollbar_pos;
}

int ViewModel::get_m_y_scrollbar_pos() const
{
	return m_y_scrollbar_pos;
}

void ViewModel::set_m_render_width(int p_new_width)
{
	m_render_width = p_new_width;
}

void ViewModel::set_m_render_height(int p_new_height)
{
	m_render_height = p_new_height;
}

int ViewModel::get_m_render_width() const
{
	return m_render_width;
}

int ViewModel::get_m_render_height() const
{
	return m_render_height;
}

void ViewModel::set_cursor_tile_type(TileType p_new_tile_type)
{
	m_cursor_tile_type = p_new_tile_type;
}

TileType ViewModel::get_cursor_tile_type() const
{
	return m_cursor_tile_type;
}

