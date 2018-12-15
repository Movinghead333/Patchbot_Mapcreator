#pragma once

#include <QWidget>

#include "viewmodel.h"

class RenderWidget : public QWidget
{
	Q_OBJECT

public:
	RenderWidget(QWidget *parent = 0);
	~RenderWidget();

	// setter for ViewModel
	void set_view_model(
		std::shared_ptr<ViewModel> p_view_model);

protected:
	// override PaintEvent
	void paintEvent(QPaintEvent *event) override;

	// override MouseEvents
	void mousePressEvent(QMouseEvent *event) override;
	void mouseMoveEvent(QMouseEvent *event) override;
	void mouseReleaseEvent(QMouseEvent *event) override;

private:
	std::shared_ptr<ViewModel> m_view_model;

	// renders the currently loaded map
	void render();

	// handles mouse click interactions
	void handle_mouse_click(QPoint p_mouse_pos);
};
