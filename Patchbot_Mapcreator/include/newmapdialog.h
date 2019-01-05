#pragma once

#include <QDialog>
#include "ui_newmapdialog.h"
#include "viewmodel.h"

class NewMapDialog : public QDialog
{
	Q_OBJECT

public:
	NewMapDialog(std::shared_ptr<ViewModel> p_view_model,
				 QWidget *parent = Q_NULLPTR);
	~NewMapDialog();

private slots:
	void on_createButton_clicked();
	void on_cancelButton_clicked();

private:
	Ui::NewMapDialog ui;

	std::shared_ptr<ViewModel> m_view_model;

	QIntValidator* m_numeric_validator;

};
