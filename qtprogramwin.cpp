#include "qtprogramwin.h"
#include "ui_qtprogramwin.h"
#include <iostream>
#include "math.h"

//Nabeel Asghar
//Lab 5
//10/18/2018 3:57 AM

using namespace std;
bool secondNumberTyping = false;

int firstNum;

QtProgramWin::QtProgramWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtProgramWin)
{
    ui->setupUi(this);
	//connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(setLineEditText()));
	connect(ui->zeroButton, SIGNAL(clicked()), this, SLOT(buttonPress()));
	connect(ui->oneButton, SIGNAL(clicked()), this, SLOT(buttonPress()));
	connect(ui->twoButton, SIGNAL(clicked()), this, SLOT(buttonPress()));
	connect(ui->threeButton, SIGNAL(clicked()), this, SLOT(buttonPress()));
	connect(ui->fourButton, SIGNAL(clicked()), this, SLOT(buttonPress()));
	connect(ui->fiveButton, SIGNAL(clicked()), this, SLOT(buttonPress()));
	connect(ui->sixButton, SIGNAL(clicked()), this, SLOT(buttonPress()));
	connect(ui->sevenButton, SIGNAL(clicked()), this, SLOT(buttonPress()));

	connect(ui->additionButton, SIGNAL(clicked()), this, SLOT(binaryOperation()));
	connect(ui->subtractSign, SIGNAL(clicked()), this, SLOT(binaryOperation()));
	connect(ui->multiplyButton, SIGNAL(clicked()), this, SLOT(binaryOperation()));
	connect(ui->divisionButton, SIGNAL(clicked()), this, SLOT(binaryOperation()));
	connect(ui->equalButton, SIGNAL(clicked()), this, SLOT(equalOperation()));

	connect(ui->clearButton, SIGNAL(clicked()), this, SLOT(clearFunction()));

	ui->additionButton->setCheckable(true);
	ui->subtractSign->setCheckable(true);
	ui->multiplyButton->setCheckable(true);
	ui->divisionButton->setCheckable(true);
	
}

// Function to convert octal to decimal 
int octalToDecimal(int n)
{
	int num = n;
	int dec_value = 0;

	// Initializing base value to 1, i.e 8^0 
	int base = 1;

	int temp = num;
	while (temp) {

		// Extracting last digit 
		int last_digit = temp % 10;
		temp = temp / 10;

		// Multiplying last digit with appropriate 
		// base value and adding it to dec_value 
		dec_value += last_digit * base;

		base = base * 8;
	}

	return dec_value;
}

//Function to convert decimal to octal
int decimalToOctal(int decimalNumber)
{
	int rem, i = 1, octalNumber = 0;
	while (decimalNumber != 0)
	{
		rem = decimalNumber % 8;
		decimalNumber /= 8;
		octalNumber += rem * i;
		i *= 10;
	}
	return octalNumber;
}

QtProgramWin::~QtProgramWin()
{
    delete ui;
}


//void QtProgramWin::setLineEditText()
//{
//	ui->lineEdit->setText(QString("Hello World!") );
//}
//
//void QtProgramWin::clear(){
//
//	ui->lineEdit->setText(QString("Cleared"));
//}

void QtProgramWin::clearFunction() {

	secondNumberTyping = false;
	ui->additionButton->setChecked(false);
	ui->subtractSign->setChecked(false);
	ui->multiplyButton->setChecked(false);
	ui->divisionButton->setChecked(false);
	ui->resultButton->setText("0");

}

void QtProgramWin::buttonPress() {
		
	QPushButton * button = (QPushButton*)sender();

	int ourNumber;
	QString newNumber;


	if((ui->additionButton->isChecked() || ui->subtractSign->isChecked()
		|| ui->multiplyButton->isChecked() || ui->divisionButton->isChecked()) && (!secondNumberTyping)){

		ourNumber = button->text().toInt();
		secondNumberTyping = true;
	}
	else {
		ourNumber = (ui->resultButton->text() + button->text()).toInt();
	}
	 

	
	newNumber = QString::number(ourNumber);

	ui->resultButton->setText(newNumber);

}

void QtProgramWin::equalOperation() {
	
	int result, secondNum;
	QString newResult;

	secondNum = ui->resultButton->text().toInt();

	if (ui->additionButton->isChecked()) {
		//convert firstNum and secondNum from octal to decimal
		int decFirst = octalToDecimal(firstNum);
		int decSecond = octalToDecimal(secondNum);
		result = decFirst + decSecond;	
		
		//convert result from decimal to octal
		int octResult = decimalToOctal(result);

		newResult = QString::number(octResult, 'g', 16);
		ui->resultButton->setText(newResult);
		ui->additionButton->setChecked(false);

	}
	else if (ui->subtractSign->isChecked()) {
		//convert firstNum and secondNum from octal to decimal
		int decFirst = octalToDecimal(firstNum);
		int decSecond = octalToDecimal(secondNum);
		result = decFirst - decSecond;

		//convert result from decimal to octal
		int octResult = decimalToOctal(result);

		newResult = QString::number(octResult, 'g', 16);
		ui->resultButton->setText(newResult);
		ui->subtractSign->setChecked(false);

	}
	else if (ui->multiplyButton->isChecked()) {
		//convert firstNum and secondNum from octal to decimal
		int decFirst = octalToDecimal(firstNum);
		int decSecond = octalToDecimal(secondNum);
		result = decFirst * decSecond;

		//convert result from decimal to octal
		int octResult = decimalToOctal(result);

		newResult = QString::number(octResult, 'g', 16);
		ui->resultButton->setText(newResult);
		ui->multiplyButton->setChecked(false);

	}
	else if (ui->divisionButton->isChecked()) {
		//convert firstNum and secondNum from octal to decimal
		int decFirst = octalToDecimal(firstNum);
		int decSecond = octalToDecimal(secondNum);
		result = decFirst / decSecond;

		//convert result from decimal to octal
		int octResult = decimalToOctal(result);

		newResult = QString::number(octResult, 'g', 16);
		ui->resultButton->setText(newResult);
		ui->divisionButton->setChecked(false);

	}
			
	secondNumberTyping = false;
}

void QtProgramWin::binaryOperation() {

	/*
	if (button->text() == "+") {
	button->setChecked(true);
	secondNum = ui->resultButton->text().toInt();
	result = (firstNum) + (secondNum);
	ui->additionButton->setChecked(false);
	}

	else if (button->text() == "-") {

	secondNum = ui->resultButton->text().toInt();
	result = firstNum - secondNum;
	}

	else if (button->text() == "*") {

	secondNum = ui->resultButton->text().toInt();
	result = firstNum * secondNum;
	}

	else if (button->text() == "÷") {

	secondNum = ui->resultButton->text().toInt();
	result = firstNum / secondNum;
	}
	*/

	QPushButton *button = (QPushButton*)sender();

	firstNum = ui->resultButton->text().toInt();
	
	button->setChecked(true);
	

}