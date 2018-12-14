#include "mapeditorgui.h"

#include <QtWidgets/QApplication>
#include <iostream>

#include "map.h"

int main(int argc, char *argv[])
{
	//QApplication a(argc, argv);
	//MapEditorGUI w;
	//w.show();

	Map::load_map("everything.txt");

	return 0;
	//return a.exec();
}
