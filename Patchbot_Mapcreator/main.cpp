#include "mapeditorgui.h"

#include <QtWidgets/QApplication>
#include <iostream>
#include "texture.h"

#include "map.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MapEditorGUI w;
	w.show();

	

	//return 0;
	return a.exec();
}

// for debugging purposes
void load_and_save_map()
{
	Map m = Map::load_map("everything.txt");

	//Map::save_map(m);
}

// for debugging purposes
void load_and_save_texture()
{
	Texture texture = Texture::load_texture("images\\patchbot.tga");

	Texture::write_texture_to_file("newtga.tga", texture);
}
