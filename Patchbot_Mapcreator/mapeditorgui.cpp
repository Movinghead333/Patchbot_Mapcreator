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
	m_view_model->set_cursor_tile_type(RESET);
	repaint();
}

void MapEditorGUI::on_steelplanksButton_clicked()
{
	m_view_model->set_cursor_tile_type(STEELPLANKS);
	repaint();
}

void MapEditorGUI::on_abyssButton_clicked()
{
	m_view_model->set_cursor_tile_type(ABYSS);
	repaint();
}

void MapEditorGUI::on_waterButton_clicked()
{
	m_view_model->set_cursor_tile_type(WATER);
	repaint();
}

void MapEditorGUI::on_rootServerButton_clicked()
{
	m_view_model->set_cursor_tile_type(ROOT_SERVER);
	repaint();
}

void MapEditorGUI::on_alienGrassButton_clicked()
{
	m_view_model->set_cursor_tile_type(ALIEN_GRASS);
	repaint();
}

void MapEditorGUI::on_gravelButton_clicked()
{
	m_view_model->set_cursor_tile_type(GRAVEL);
	repaint();
}

void MapEditorGUI::on_secretEntranceButton_clicked()
{
	m_view_model->set_cursor_tile_type(SECRET_ENTRANCE);
	repaint();
}

void MapEditorGUI::on_manualDoorButton_clicked()
{
	m_view_model->set_cursor_tile_type(MANUAL_DOOR);
	repaint();
}

void MapEditorGUI::on_autoDoorButton_clicked()
{
	m_view_model->set_cursor_tile_type(AUTO_DOOR);
	repaint();
}

void MapEditorGUI::on_indestructibleWallButton_clicked()
{
	m_view_model->set_cursor_tile_type(INDESTRUCTABLE_WALL);
	repaint();
}

void MapEditorGUI::on_destructibleWallButton_clicked()
{
	m_view_model->set_cursor_tile_type(DESTRUCTABLE_WALL);
	repaint();
}


// robot button slots
void MapEditorGUI::on_patchbotButton_clicked()
{
	m_view_model->set_cursor_tile_type(PATCHBOT);
	repaint();
}

void MapEditorGUI::on_buggerButton_clicked()
{
	m_view_model->set_cursor_tile_type(BUGGER);
	repaint();
}

void MapEditorGUI::on_pusherButton_clicked()
{
	m_view_model->set_cursor_tile_type(PUSHER);
	repaint();
}

void MapEditorGUI::on_diggerButton_clicked()
{
	m_view_model->set_cursor_tile_type(DIGGER);
	repaint();
}

void MapEditorGUI::on_swimmerButton_clicked()
{
	m_view_model->set_cursor_tile_type(SWIMMER);
	repaint();
}

void MapEditorGUI::on_followerButton_clicked()
{
	m_view_model->set_cursor_tile_type(FOLLOWER);
	repaint();
}

void MapEditorGUI::on_hunterButton_clicked()
{
	m_view_model->set_cursor_tile_type(HUNTER);
	repaint();
}

void MapEditorGUI::on_snifferButton_clicked()
{
	m_view_model->set_cursor_tile_type(SNIFFER);
	repaint();
}


// menu slots

void MapEditorGUI::on_newMapAction_triggered()
{
	//display_info_message_dialog("on_newMapAction_triggered");
}

void MapEditorGUI::on_openMapAction_triggered()
{
	//display_info_message_dialog("on_openMapAction_triggered");
}

void MapEditorGUI::on_saveMapAction_triggered()
{
	//display_info_message_dialog("on_saveMapAction_triggered");
}

void MapEditorGUI::on_reportBugAction_triggered()
{
	display_info_message_dialog(m_view_model->REPORT_BUG_TITLE,
								m_view_model->REPORT_BUG_MSG);
}

void MapEditorGUI::on_aboutAction_triggered()
{
	display_info_message_dialog(m_view_model->ABOUT_TITLE,
								m_view_model->ABOUT_MSG);
}





// shows short information dialog displaying that a button has been clicked
// and message which button has been pressed (p_message)
void MapEditorGUI::display_info_message_dialog(const std::string& p_title, 
											   const std::string& p_message)
{
	QMessageBox::information(
		this,
		p_title.c_str(),
		tr(p_message.c_str()));
}

