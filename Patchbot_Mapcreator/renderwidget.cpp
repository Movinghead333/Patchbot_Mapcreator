#include "renderwidget.h"

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
}
