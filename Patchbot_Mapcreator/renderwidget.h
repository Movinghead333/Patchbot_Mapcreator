#pragma once

#include <QWidget>

#include "viewmodel.h"

class RenderWidget : public QWidget
{
	Q_OBJECT

public:
	RenderWidget(QWidget *parent = 0);
	~RenderWidget();

	void set_view_model(
		std::shared_ptr<ViewModel> p_view_model);

protected:
	void paintEvent(QPaintEvent *event) override;

private:
	std::shared_ptr<ViewModel> m_view_model;

	void render();
};
