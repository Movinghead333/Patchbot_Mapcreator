#pragma once

#include <QtWidgets/QMainWindow>

#include "ui_mapeditorgui.h"
#include "viewmodel.h"

class MapEditorGUI : public QMainWindow
{
	Q_OBJECT

private slots:
	// environment button slots
	void on_resetButton_clicked();
	void on_steelplanksButton_clicked();
	void on_abyssButton_clicked();
	void on_waterButton_clicked();
	void on_rootServerButton_clicked();
	void on_alienGrassButton_clicked();
	void on_gravelButton_clicked();
	void on_secretEntranceButton_clicked();
	void on_manualDoorButton_clicked();
	void on_autoDoorButton_clicked();
	void on_indestructibleWallButton_clicked();
	void on_destructibleWallButton_clicked();

	// robot button slots
	void on_patchbotButton_clicked();
	void on_buggerButton_clicked();
	void on_pusherButton_clicked();
	void on_diggerButton_clicked();
	void on_swimmerButton_clicked();
	void on_followerButton_clicked();
	void on_hunterButton_clicked();
	void on_snifferButton_clicked();

	// menu slots
	void on_newMapAction_triggered();
	void on_openMapAction_triggered();
	void on_saveMapAction_triggered();
	void on_reportBugAction_triggered();
	void on_aboutAction_triggered();

	// scrollbar slots
	void scroll_x(int p_new_value);
	void scroll_y(int p_new_value);


public:
	MapEditorGUI(QWidget *parent = Q_NULLPTR);

	

protected:
	void resizeEvent(QResizeEvent *event);

private:
	Ui::MapEditorGUIClass ui;

	std::shared_ptr<ViewModel> m_view_model;

	void handle_resize_event();

	void set_window_title(const std::string p_file_path = "");

	void display_info_message_dialog(const std::string& p_title,
		const std::string& p_message);

	void display_error_message_dialog(const std::string& p_title,
		const std::string& p_message);
};
