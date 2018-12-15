#include "mapeditorgui.h"

#include <qmessagebox.h>


MapEditorGUI::MapEditorGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	m_view_model = std::make_shared<ViewModel>(ViewModel());

	ui.mapRenderWidget->set_view_model(m_view_model);

	ui.cursorWidget->set_view_model(m_view_model);
}

// environment buttons slots

void MapEditorGUI::on_resetButton_clicked()
{
	display_info_message_dialog("on_resetButton_clicked");
}

void MapEditorGUI::on_steelplanksButton_clicked()
{
	display_info_message_dialog("on_steelplanksButton_clicked");
}

void MapEditorGUI::on_abyssButton_clicked()
{
	display_info_message_dialog("on_abyssButton_clicked");
}

void MapEditorGUI::on_waterButton_clicked()
{
	display_info_message_dialog("on_waterButton_clicked");
}

void MapEditorGUI::on_rootServerButton_clicked()
{
	display_info_message_dialog("on_rootServerButton_clicked");
}

void MapEditorGUI::on_alienGrassButton_clicked()
{
	display_info_message_dialog("on_alienGrassButton_clicked");
}

void MapEditorGUI::on_gravelButton_clicked()
{
	display_info_message_dialog("on_gravelButton_clicked");
}

void MapEditorGUI::on_secretEntranceButton_clicked()
{
	display_info_message_dialog("on_secretEntranceButton_clicked");
}

void MapEditorGUI::on_manualDoorButton_clicked()
{
	display_info_message_dialog("on_manualDoorButton_clicked");
}

void MapEditorGUI::on_autoDoorButton_clicked()
{
	display_info_message_dialog("on_autoDoorButton_clicked");
}

void MapEditorGUI::on_indestructibleWallButton_clicked()
{
	display_info_message_dialog("on_indestructibleWallButton_clicked");
}

void MapEditorGUI::on_destructibleWallButton_clicked()
{
	display_info_message_dialog("on_destructibleWall_clicked");
}


// robot button slots
void MapEditorGUI::on_patchbotButton_clicked()
{
	display_info_message_dialog("on_patchbotButton_clicked");
}

void MapEditorGUI::on_buggerButton_clicked()
{
	display_info_message_dialog("on_buggerButton_clicked");
}

void MapEditorGUI::on_pusherButton_clicked()
{
	display_info_message_dialog("on_pusherButton_clicked");
}

void MapEditorGUI::on_diggerButton_clicked()
{
	display_info_message_dialog("on_diggerButton_clicked");
}

void MapEditorGUI::on_swimmerButton_clicked()
{
	display_info_message_dialog("on_swimmerButton_clicked");
}

void MapEditorGUI::on_followerButton_clicked()
{
	display_info_message_dialog("on_followerButton_clicked");
}

void MapEditorGUI::on_hunterButton_clicked()
{
	display_info_message_dialog("on_hunterButton_clicked");
}

void MapEditorGUI::on_snifferButton_clicked()
{
	display_info_message_dialog("on_snifferButton_clicked");
}


// menu slots

void MapEditorGUI::on_newMapAction_triggered()
{
	display_info_message_dialog("on_newMapAction_triggered");
}

void MapEditorGUI::on_openMapAction_triggered()
{
	display_info_message_dialog("on_openMapAction_triggered");
}

void MapEditorGUI::on_saveMapAction_triggered()
{
	display_info_message_dialog("on_saveMapAction_triggered");
}

// shows short information dialog displaying that a button has been clicked
// and message which button has been pressed (p_message)
void MapEditorGUI::display_info_message_dialog(const std::string& p_message)
{
	QMessageBox::information(
		this,
		"Button clicked",
		p_message.c_str());
}

