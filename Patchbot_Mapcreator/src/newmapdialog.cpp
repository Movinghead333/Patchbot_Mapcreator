#include "newmapdialog.h"
#include <iostream>

NewMapDialog::NewMapDialog(std::shared_ptr<ViewModel> p_view_model,
						   QWidget *parent)
	: m_view_model(p_view_model), QDialog(parent)
{
	ui.setupUi(this);

	m_numeric_validator = new QIntValidator(2, 1000, this);
	
	ui.widthLineEdit->setValidator(m_numeric_validator);
	ui.heightLineEdit->setValidator(m_numeric_validator);
}

NewMapDialog::~NewMapDialog()
{
	delete m_numeric_validator;
}

void NewMapDialog::on_createButton_clicked()
{
	std::cout << "create map" << std::endl;

	QString name = ui.nameLineEdit->text();

	QString width = ui.widthLineEdit->text();
	QString height = ui.heightLineEdit->text();
	

	
	int pos = 0;
	QIntValidator v(2, 1000, this);
	if (name != "" && 
		v.validate(width, pos) == QValidator::Acceptable &&
		v.validate(height, pos) == QValidator::Acceptable)
	{
		std::cout << width.toStdString() << std::endl;
		std::cout << height.toStdString() << std::endl;
		m_view_model->create_empty_map_by_dimensions(width.toInt(),
													 height.toInt());
		m_view_model->set_m_current_map_file_path(name.toStdString() + ".txt");
		this->close();
	}
}

void NewMapDialog::on_cancelButton_clicked()
{
	std::cout << "canceled" << std::endl;
	this->close();
}