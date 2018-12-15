#include "renderwidget.h"

#include <qpainter.h>
#include <QMouseEvent>

RenderWidget::RenderWidget(QWidget *parent)
	: QWidget(parent)
{
}

RenderWidget::~RenderWidget()
{
}

void RenderWidget::set_view_model(std::shared_ptr<ViewModel> p_view_model)
{
	m_view_model = p_view_model;
}

void RenderWidget::paintEvent(QPaintEvent * event)
{
	if (m_view_model->map_available())
	{
		render();
	}
}

void RenderWidget::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton)
	{
		handle_mouse_click(event->pos());
	}
}

void RenderWidget::mouseMoveEvent(QMouseEvent * event)
{
}

void RenderWidget::mouseReleaseEvent(QMouseEvent * event)
{
}

void RenderWidget::handle_mouse_click(QPoint p_mouse_pos)
{
	int tile_size = m_view_model->TILE_SIZE;

	int x_scrollbar_pos = m_view_model->get_m_x_scrollbar_pos();
	int y_scrollbar_pos = m_view_model->get_m_y_scrollbar_pos();

	int mouse_x_total = p_mouse_pos.x() + x_scrollbar_pos;
	int mouse_y_total = p_mouse_pos.y() + y_scrollbar_pos;

	int tile_x = (mouse_x_total - (mouse_x_total % tile_size)) / tile_size;
	int tile_y = (mouse_y_total - (mouse_y_total % tile_size)) / tile_size;

	m_view_model->set_map_tile_at_pos_to_cursor(tile_x, tile_y);
	update();
}

void RenderWidget::render()
{
	QPainter painter(this);

	Map& current_map = m_view_model->get_current_map();

	int tile_size = m_view_model->TILE_SIZE;

	// create "local" variables for the x and y scrollbar position and the
	// render width and height in pixels
	int x_scrollbar_pos		    = m_view_model->get_m_x_scrollbar_pos();
	int y_scrollbar_pos		    = m_view_model->get_m_y_scrollbar_pos();

	int render_width_in_pixels  = m_view_model->get_m_render_width();
	int render_height_in_pixels = m_view_model->get_m_render_height();

	// calculate x and y tile where the rendering should start
	int x_start_tile = (x_scrollbar_pos -
		(x_scrollbar_pos % tile_size)) / tile_size;
	int y_start_tile = (y_scrollbar_pos -
		(y_scrollbar_pos % tile_size)) / tile_size;

	// the number of tiles which get rendered in x-direction
	int x_tiles_to_rendered;
	// initialize x_tiles_to_rendered
	if (render_width_in_pixels % tile_size == 0)
	{
		// if the render_height_in_pixels divides by tile_size then just devide
		// it by tile_size for the amount of tiles to be rendered
		x_tiles_to_rendered = render_width_in_pixels / tile_size;
	}
	else
	{
		// if does not fit exactly then divide it by tile_size round down
		// and add +1 because the minus modulo cuts one of and +1 for filling
		// the screen so it is basicly the above + 1
		x_tiles_to_rendered =
			((render_width_in_pixels - (render_width_in_pixels % tile_size))
				/ tile_size) + 2;
	}

	// the number of tiles which get rendered in y-direction
	int y_tiles_to_rendered;
	// initialize y_tiles_to_rendered
	if (render_height_in_pixels % tile_size == 0)
	{
		// if the render_height_in_pixels divides by tile_size then just devide
		// it by tile_size for the amount of tiles to be rendered
		y_tiles_to_rendered = render_height_in_pixels / tile_size;
	}
	else
	{
		// if does not fit exactly then divide it by tile_size round down
		// and add +1 because the minus modulo cuts one of and +1 for filling
		// the screen so it is basicly the above + 1
		y_tiles_to_rendered =
			((render_height_in_pixels - (render_height_in_pixels % tile_size))
				/ tile_size) + 2;
	}

	// calculate the amount of offset needed to enable smooth pixel scrolling
	int x_pixel_offset = (x_scrollbar_pos % tile_size) * -1;
	int y_pixel_offset = (y_scrollbar_pos % tile_size) * -1;


	// render ground tiles
	for (int x = 0; x < x_tiles_to_rendered; x++)
	{
		for (int y = 0; y < y_tiles_to_rendered; y++)
		{
			// if coordinates are beyond the environment skip them
			// this happends for right and bottom boundaries
			if (x + x_start_tile >= current_map.get_map_width() ||
				y + y_start_tile >= current_map.get_map_height())
			{
				continue;
			}
			// get a ref to the tile which gets rendered next
			TileType current_tile_type =
				current_map.get_tile_type_at_pos(x + x_start_tile,
												 y + y_start_tile);

			// load matching QImage for current tile from controller
			const QImage& current_tile_image = m_view_model->
				find_qimage_by_tile_type(current_tile_type);

			// calculate the x and y where the current tile should be rendered
			int x_render_offset = tile_size * x + x_pixel_offset;
			int y_render_offset = tile_size * y + y_pixel_offset;

			// draw the QImage at the earlier calculated coordinates
			painter.drawImage(
				QPoint(x_render_offset, y_render_offset), current_tile_image);
		}
	}
}
