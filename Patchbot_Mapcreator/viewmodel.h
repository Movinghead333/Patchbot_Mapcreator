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
	// CONSTANTS:
	 
	// strings for about dialog
	const std::string STR_ABOUT_MSG =
		"This is a small tool designed to open, edit and save maps for the "
		"game Patchbot.\n"
		"Version: 1.0";
	const std::string STR_ABOUT_TITLE = "About";

	// strings for report a bug dialog
	const std::string STR_REPORT_BUG_TITLE = "Report a bug";
	const std::string STR_REPORT_BUG_MSG = "If you have found a bug, then please "
		"report it to "
		"\nhttps://github.com/Movinghead333/Patchbot_Mapcreator/issues";

	// string for window upon map loading errors
	const std::string STR_MAP_LOADING_ERROR_TITLE = "Error loading map!";

	// string for map saving errors
	const std::string STR_MAP_SAVE_ERROR_TITLE = "Error saving map!";

	// for display in window title
	const std::string STR_APP_NAME = "Patchbot MapEditor";
	const std::string STR_MAP_LOADED = STR_APP_NAME + " - Editing: ";

	const int TILE_SIZE = 32;

	// PUBLIC METHODS:

	// invokes load_images()
	ViewModel();

	// save current map to file
	void save_current_map_to_file() const;

	// set the TileType at a given position to the TileType on cursor
	void set_map_tile_at_pos_to_cursor(int p_x, int p_y);

	// loads images into memory
	void load_images();

	// load map from filepath into ViewModel
	void load_map_from_file_path(const std::string& p_file_path);

	// find a certain qimage by key in map and return a reference for rendering
	const QImage& find_qimage_by_tile_type(TileType p_tile_type) const;

	// get image for cursor
	const QImage& get_image_for_cursor_render() const;

	// check if there currently is a map instance stored in the ViewModel
	bool map_available() const;

	// create map with given dimensions and fill it with RESET
	void create_empty_map_by_dimensions(int p_width, int p_height);

	// GETTERS & SETTERS
		
	// get map ref
	Map& get_current_map();

	// getters and setters for scrollbar positions
	void set_m_x_scrollbar_pos(int p_new_pos);
	void set_m_y_scrollbar_pos(int p_new_pos);

	int get_m_x_scrollbar_pos() const;
	int get_m_y_scrollbar_pos() const;

	// getters and setters for the render width and height
	void set_m_render_width(int p_new_width);
	void set_m_render_height(int p_new_height);

	int get_m_render_width() const;
	int get_m_render_height() const;

	// getter and setter for m_cursor_tile_type
	void set_cursor_tile_type(TileType p_new_tile_type);
	TileType get_cursor_tile_type() const;

	// getters and setters for current_map_file_path
	void set_m_current_map_file_path(const std::string& p_file_path);
	const std::string& get_m_current_map_file_path() const
		;
private:
	// x and y scrollbar positions
	int m_x_scrollbar_pos = 0;
	int m_y_scrollbar_pos = 0;

	// editor render width and height
	int m_render_width;
	int m_render_height;

	// filepath for current map
	std::string m_current_map_file_path = "";

	// stores the map, which is currently being edited
	std::shared_ptr<Map> m_current_map;

	// stores the tile_type on cursor
	TileType m_cursor_tile_type = STEELPLANKS;

	// stores all needed images in a map
	std::shared_ptr<std::map<TileType, QImage>> m_image_map;
};

#endif