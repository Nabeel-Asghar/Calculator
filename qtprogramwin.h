#ifndef QTPROGRAMWIN_H
#define QTPROGRAMWIN_H

#include <QMainWindow>

namespace Ui {
class QtProgramWin;
}

class QtProgramWin : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit QtProgramWin(QWidget *parent = 0);
    ~QtProgramWin();
    
private:
    Ui::QtProgramWin *ui;
	
public slots:
	//void setLineEditText();
	//void clear();
	//void addition();
	void buttonPress();
	void binaryOperation();
	void equalOperation();
	void clearFunction();
	/*void subtract();
	void multiply();
	void divide();
	void equals();*/

	

};

#endif // QTPROGRAMWIN_H
