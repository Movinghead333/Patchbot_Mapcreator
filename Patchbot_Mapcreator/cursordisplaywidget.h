#pragma once

#include <QWidget>

#include "viewmodel.h"

class CursorDisplayWidget : public QWidget
{
	Q_OBJECT

public:
	CursorDisplayWidget(QWidget *parent = 0);
	~CursorDisplayWidget();

	void set_view_model(std::shared_ptr<ViewModel> p_view_model);

private:
	std::shared_ptr<ViewModel> m_view_model;
};
