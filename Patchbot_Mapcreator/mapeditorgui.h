#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mapeditorgui.h"

class MapEditorGUI : public QMainWindow
{
	Q_OBJECT

public:
	MapEditorGUI(QWidget *parent = Q_NULLPTR);

private:
	Ui::MapEditorGUIClass ui;
};
