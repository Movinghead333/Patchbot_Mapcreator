#include "cursordisplaywidget.h"

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
