#ifndef __VIEW_MODEL_H_DEFINED__
#define __VIEW_MODEL_H_DEFINED__

#include <map>
#include <qimage.h>

#include "map.h"
#include "tiletype.h"
#include "texture.h"


class ViewModel
{
public:
	// strings for about dialog
	const std::string ABOUT_MSG =
		"This is small tool designed to open, edit and save maps for the "
		"game Patchbot.";
	const std::string ABOUT_TITLE = "About";

	// strings for report a bug dialog
	const std::string REPORT_BUG_TITLE = "Report a bug";
	const std::string REPORT_BUG_MSG = "If you have found a bug, then please "
		"report it to "
		"\nhttps://github.com/Movinghead333/Patchbot_Mapcreator/issues";

	// invokes load_images()
	ViewModel();

	// loads images into memory
	void load_images();

	// find a certain qimage by key in map and return a reference for rendering
	const QImage& find_qimage_by_tile_type(TileType p_tile_type) const;

	// get image for cursor
	const QImage& get_image_for_cursor_render() const;


	// GETTERS & SETTERS


	// getter and setter for m_cursor_tile_type
	void set_cursor_tile_type(TileType p_new_tile_type);
	TileType get_cursor_tile_type() const;

private:
	// stores the map, which is currently being edited
	std::shared_ptr<Map> m_current_map;

	// stores the tile_type on cursor
	TileType m_cursor_tile_type = STEELPLANKS;

	// stores all needed images in a map
	std::shared_ptr<std::map<TileType, QImage>> m_image_map;
};

#endif