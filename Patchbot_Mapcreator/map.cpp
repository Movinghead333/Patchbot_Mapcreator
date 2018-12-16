#include "map.h"

#include <fstream>
#include <iostream>


Map::Map(int p_map_width, int p_map_height, std::vector<TileType> p_map_data) :
	m_map_width(p_map_width),
	m_map_height(p_map_height),
	m_map_data(p_map_data)
{
}

Map::Map(int p_map_width, int p_map_height) :
	m_map_width(p_map_width), m_map_height(p_map_height)
{
	m_map_data = std::vector<TileType>();
	m_map_data.reserve(p_map_width * p_map_height);

	for (int y = 0; y < p_map_height; y++)
	{
		for (int x = 0; x < p_map_width; x++)
		{
			m_map_data.push_back(RESET);
		}
	}
	std::cout << "map created" << std::endl;
}

int Map::get_map_width() const
{
	return m_map_width;
}

int Map::get_map_height() const
{
	return m_map_height;
}

Map Map::load_map(const std::string & p_file_name)
{
	std::cout << "Loading Colony from file: " << p_file_name << std::endl;
	std::ifstream input_file(p_file_name);

	if (!input_file.is_open())
	{
		throw Simple_Message_Exception("File could not be opened!");
	}

	std::string current_line;
	int width, height;

	// read colony-width
	if (std::getline(input_file, current_line))
	{
		if (Utility::is_number(current_line))
		{
			width = std::stoi(current_line);
		}
		else
		{
			throw Simple_Message_Exception(
				"Invalid Argument for parameter: <width>");
		}
	}

	// read colony-height
	if (std::getline(input_file, current_line))
	{
		if (Utility::is_number(current_line))
		{
			height = std::stoi(current_line);
		}
		else
		{
			throw Simple_Message_Exception(
				"Invalid Argument for parameter: <height>");
		}
	}

	// setting up temporary vector for all map-tiles
	std::vector<TileType> temp_map_data;
	temp_map_data.reserve(width*height);

	bool hasStart = false;
	bool hasEnd = false;


	// iterate through the remaining lines of the textfile
	// containing the level-data
	int y = 0;
	while (std::getline(input_file, current_line))
	{
		// check if there is a next line to read;
		// if there is, check if the amount of chars matches the width
		if (y < height)
		{
			// check if current line matches the specified width
			if (current_line.size() == width)
			{
				std::cout << current_line << std::endl; // debug
				// iterate trough the characters of the current line
				for (int x = 0; x < width; x++)
				{
					char current_char = current_line[x];

					temp_map_data.push_back(
						Utility::get_tile_type_from_char(current_char));
					
					// check if the current character is the player's
					// starting location,
					// if that is the case initialize the player object;
					// set the hasStart and hasEnd flags
					if (current_char == 'p')
					{
						if (!hasStart)
						{
							hasStart = true;
						}
						else
						{
							throw Simple_Message_Exception(
								"Colony can only have one starting point");
						}
					}
					else if (current_char == 'P')
					{
						hasEnd = true;
					}
				}
			}
			// throw exception if the current line is either too short or
			// too long
			else if (current_line.size() < width)
			{
				std::stringstream temp_string_stream;
				temp_string_stream << "Line " << (y + 1);
				temp_string_stream << " is shorter than the specified length!";
				throw Simple_Message_Exception(temp_string_stream.str());
			}
			else if (current_line.size() > width)
			{
				std::stringstream temp_string_stream;
				temp_string_stream << "Line " << (y + 1) <<
					" is longer than the specified length!";
				throw Simple_Message_Exception(temp_string_stream.str());
			}
		}
		// invoked if the textfile is not containg the specified amount of lines
		// in order to initialize the colony object
		else
		{
			throw Simple_Message_Exception("File contains too many lines!");
		}
		y++;
	}

	// check if the file had enough lines
	if (!(y == height))
	{
		throw Simple_Message_Exception(
			"File contains less than the specified number of lines!");
	}

	// check the hasStart and hasEnd flags, if one of them or both are false
	// throw an exception
	if (hasStart == false)
	{
		throw Simple_Message_Exception("No starting point found!");
	}
	if (hasEnd == false)
	{
		throw Simple_Message_Exception("No end point found!");
	}

	std::cout << "Loading Map from file: " << p_file_name;
	std::cout << " was successful!" << std::endl;

	return Map(width, height, temp_map_data);
}

void Map::save_map(const Map& p_map, const std::string& p_file_path)
{
	std::cout << "Saving current map..." << std::endl;
	std::cout << p_file_path << std::endl;
	std::ofstream output_file;
	output_file.open(p_file_path, std::ios::out | std::ios::trunc);


	int width = p_map.get_map_width();
	int height = p_map.get_map_height();

	output_file << width << std::endl;
	output_file << height << std::endl;

	std::cout << p_map.get_map_height() << std::endl;

	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			output_file << Utility::get_char_from_tile_type(
				p_map.get_tile_type_at_pos(x, y));
		}
		output_file << std::endl;
	}

	output_file.close();
	std::cout << "Current Map has been saved succesfully!" << std::endl;
}

TileType Map::get_tile_type_at_pos(int p_x, int p_y) const
{
	return m_map_data[ (p_y * m_map_width) + p_x];
}

void Map::set_tile_type_at_pos(int p_x, int p_y, TileType p_tile_type)
{
	m_map_data[(p_y * m_map_width) + p_x] = p_tile_type;
}

