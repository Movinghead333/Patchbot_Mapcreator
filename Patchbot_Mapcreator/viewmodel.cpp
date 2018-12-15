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

const QImage & ViewModel::find_qimage_by_tile_type(TileType p_tile_type) const
{
	return m_image_map->find(p_tile_type)->second;

}

const QImage & ViewModel::get_image_for_cursor_render() const
{
	return find_qimage_by_tile_type(m_cursor_tile_type);
}

void ViewModel::set_cursor_tile_type(TileType p_new_tile_type)
{
	m_cursor_tile_type = p_new_tile_type;
}

TileType ViewModel::get_cursor_tile_type() const
{
	return m_cursor_tile_type;
}

