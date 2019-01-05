#include "cursordisplaywidget.h"
#include "qpainter.h"

CursorDisplayWidget::CursorDisplayWidget(QWidget *parent)
	: QWidget(parent)
{
}

CursorDisplayWidget::~CursorDisplayWidget()
{
}

void CursorDisplayWidget::set_view_model(std::shared_ptr<ViewModel> p_view_model)
{
	m_view_model = p_view_model;
}

void CursorDisplayWidget::paintEvent(QPaintEvent * event)
{
	if (m_view_model != nullptr)
	{
		render();
	}
}

void CursorDisplayWidget::render()
{
	QPainter painter(this);

	const QImage& image = m_view_model->get_image_for_cursor_render();

	painter.drawImage(QPoint(0, 0), image);
}


