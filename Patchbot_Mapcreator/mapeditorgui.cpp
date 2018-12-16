#include "mapeditorgui.h"

#include <qmessagebox.h>
#include <qfiledialog.h>


MapEditorGUI::MapEditorGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.saveMapAction->setEnabled(false);

	m_view_model = std::make_shared<ViewModel>(ViewModel());

	ui.mapRenderWidget->set_view_model(m_view_model);
	ui.cursorWidget->set_view_model(m_view_model);
	this->setWindowTitle(QString::fromStdString(m_view_model->STR_APP_NAME));

	// connect scrollbars
	connect(ui.editorXScrollbar, SIGNAL(valueChanged(int)),
		this, SLOT(scroll_x(int)));
	connect(ui.editorYScrollbar, SIGNAL(valueChanged(int)),
		this, SLOT(scroll_y(int)));
}


void MapEditorGUI::resizeEvent(QResizeEvent * event)
{
	handle_resize_event();
}

// handles calculations in case of resizeEvent
// also gets called when a map is loaded or a new one created
void MapEditorGUI::handle_resize_event()
{
	if (m_view_model->map_available())
	{
		const Map& current_map = m_view_model->get_current_map();

		// calculate map dimensions in pixels
		int map_width_in_pixels =
			current_map.get_map_width() * m_view_model->TILE_SIZE;
		int map_height_in_pixels =
			current_map.get_map_height() * m_view_model->TILE_SIZE;

		// get current render window dimensions
		int render_width = ui.mapRenderWidget->width();
		int render_height = ui.mapRenderWidget->height();

		// max values for x and y scrollbars 
		int scroll_x_max;
		int scroll_y_max;

		// calculate scroll_x_max
		if (render_width >= map_width_in_pixels)
		{
			scroll_x_max = 0;
		}
		else
		{
			scroll_x_max = map_width_in_pixels - render_width;
		}

		// calculate scroll_y_max
		if (render_height >= map_height_in_pixels)
		{
			scroll_y_max = 0;
		}
		else
		{
			scroll_y_max = map_height_in_pixels - render_height;
		}

		ui.editorXScrollbar->setMaximum(scroll_x_max);
		ui.editorYScrollbar->setMaximum(scroll_y_max);
		m_view_model->set_m_render_width(ui.mapRenderWidget->width());
		m_view_model->set_m_render_height(ui.mapRenderWidget->height());
	}
}

void MapEditorGUI::set_window_title()
{
	this->setWindowTitle(
		QString::fromStdString(m_view_model->STR_MAP_LOADED) + 
		QString::fromStdString(m_view_model->get_m_current_map_file_path()) );
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
	NewMapDialog new_map_dialog(m_view_model);
	new_map_dialog.setModal(true);
	new_map_dialog.exec();
	handle_resize_event();
	set_window_title();
	ui.saveMapAction->setEnabled(true);
}

void MapEditorGUI::on_openMapAction_triggered()
{
	QString filter = "Textfile (*.txt)";

	std::string file_path = QFileDialog::getOpenFileName(
		this, "Open new Colony", "C://", filter
	).toStdString();

	try
	{
		m_view_model->load_map_from_file_path(file_path);
	}
	// catch all specified exceptions
	catch (const Simple_Message_Exception& e)
	{
		std::cerr << e.m_error_message << std::endl;
		display_error_message_dialog(m_view_model->STR_MAP_LOADING_ERROR_TITLE,
									e.m_error_message);
	}
	// catch any non aticipated exceptions
	catch (...)
	{
		std::cout << "Unchecked exception thrown" << std::endl;
	}

	handle_resize_event();
	m_view_model->set_m_current_map_file_path(file_path);
	this->set_window_title();
	ui.saveMapAction->setEnabled(true);
}

void MapEditorGUI::on_saveMapAction_triggered()
{
	try
	{
		m_view_model->save_current_map_to_file();
	}
	// catch all specified exceptions
	catch (const Simple_Message_Exception& e)
	{
		std::cerr << e.m_error_message << std::endl;
		display_error_message_dialog(m_view_model->STR_MAP_SAVE_ERROR_TITLE,
									 e.m_error_message);
	}
	// catch any non aticipated exceptions
	catch (...)
	{
		std::cout << "Unchecked exception thrown" << std::endl;
	}
}

void MapEditorGUI::on_reportBugAction_triggered()
{
	display_info_message_dialog(m_view_model->STR_REPORT_BUG_TITLE,
								m_view_model->STR_REPORT_BUG_MSG);
}

void MapEditorGUI::on_aboutAction_triggered()
{
	display_info_message_dialog(m_view_model->STR_ABOUT_TITLE,
								m_view_model->STR_ABOUT_MSG);
}

// scrollbar slots
void MapEditorGUI::scroll_x(int p_new_value)
{
	m_view_model->set_m_x_scrollbar_pos(p_new_value);
	ui.mapRenderWidget->update();
}

void MapEditorGUI::scroll_y(int p_new_value)
{
	m_view_model->set_m_y_scrollbar_pos(p_new_value);
	ui.mapRenderWidget->update();
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

void MapEditorGUI::display_error_message_dialog(const std::string & p_title, const std::string & p_message)
{
	QMessageBox::warning(
		this,
		p_title.c_str(),
		tr(p_message.c_str()));
}



