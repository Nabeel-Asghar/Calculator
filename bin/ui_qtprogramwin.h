/********************************************************************************
** Form generated from reading UI file 'qtprogramwin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTPROGRAMWIN_H
#define UI_QTPROGRAMWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtProgramWin
{
public:
    QWidget *centralWidget;
    QPushButton *twoButton;
    QPushButton *sevenButton;
    QPushButton *decimalButton;
    QPushButton *additionButton;
    QPushButton *subtractSign;
    QPushButton *sixButton;
    QPushButton *fiveButton;
    QPushButton *signButton;
    QPushButton *fourButton;
    QPushButton *multiplyButton;
    QPushButton *zeroButton;
    QPushButton *equalButton;
    QPushButton *threeButton;
    QLineEdit *resultButton;
    QPushButton *clearButton;
    QPushButton *divisionButton;
    QPushButton *oneButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtProgramWin)
    {
        if (QtProgramWin->objectName().isEmpty())
            QtProgramWin->setObjectName(QStringLiteral("QtProgramWin"));
        QtProgramWin->resize(304, 460);
        centralWidget = new QWidget(QtProgramWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        twoButton = new QPushButton(centralWidget);
        twoButton->setObjectName(QStringLiteral("twoButton"));
        twoButton->setGeometry(QRect(80, 240, 71, 71));
        sevenButton = new QPushButton(centralWidget);
        sevenButton->setObjectName(QStringLiteral("sevenButton"));
        sevenButton->setGeometry(QRect(10, 100, 71, 71));
        decimalButton = new QPushButton(centralWidget);
        decimalButton->setObjectName(QStringLiteral("decimalButton"));
        decimalButton->setGeometry(QRect(150, 310, 71, 71));
        additionButton = new QPushButton(centralWidget);
        additionButton->setObjectName(QStringLiteral("additionButton"));
        additionButton->setGeometry(QRect(80, 100, 71, 71));
        subtractSign = new QPushButton(centralWidget);
        subtractSign->setObjectName(QStringLiteral("subtractSign"));
        subtractSign->setGeometry(QRect(150, 100, 71, 71));
        sixButton = new QPushButton(centralWidget);
        sixButton->setObjectName(QStringLiteral("sixButton"));
        sixButton->setGeometry(QRect(150, 170, 71, 71));
        fiveButton = new QPushButton(centralWidget);
        fiveButton->setObjectName(QStringLiteral("fiveButton"));
        fiveButton->setGeometry(QRect(80, 170, 71, 71));
        signButton = new QPushButton(centralWidget);
        signButton->setObjectName(QStringLiteral("signButton"));
        signButton->setGeometry(QRect(10, 310, 71, 71));
        fourButton = new QPushButton(centralWidget);
        fourButton->setObjectName(QStringLiteral("fourButton"));
        fourButton->setGeometry(QRect(10, 170, 71, 71));
        multiplyButton = new QPushButton(centralWidget);
        multiplyButton->setObjectName(QStringLiteral("multiplyButton"));
        multiplyButton->setGeometry(QRect(220, 240, 71, 71));
        zeroButton = new QPushButton(centralWidget);
        zeroButton->setObjectName(QStringLiteral("zeroButton"));
        zeroButton->setGeometry(QRect(80, 310, 71, 71));
        equalButton = new QPushButton(centralWidget);
        equalButton->setObjectName(QStringLiteral("equalButton"));
        equalButton->setGeometry(QRect(220, 310, 71, 71));
        threeButton = new QPushButton(centralWidget);
        threeButton->setObjectName(QStringLiteral("threeButton"));
        threeButton->setGeometry(QRect(150, 240, 71, 71));
        resultButton = new QLineEdit(centralWidget);
        resultButton->setObjectName(QStringLiteral("resultButton"));
        resultButton->setGeometry(QRect(10, 50, 281, 51));
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(220, 100, 71, 71));
        divisionButton = new QPushButton(centralWidget);
        divisionButton->setObjectName(QStringLiteral("divisionButton"));
        divisionButton->setGeometry(QRect(220, 170, 71, 71));
        oneButton = new QPushButton(centralWidget);
        oneButton->setObjectName(QStringLiteral("oneButton"));
        oneButton->setGeometry(QRect(10, 240, 71, 71));
        QtProgramWin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtProgramWin);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 304, 31));
        QtProgramWin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtProgramWin);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtProgramWin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtProgramWin);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtProgramWin->setStatusBar(statusBar);

        retranslateUi(QtProgramWin);

        QMetaObject::connectSlotsByName(QtProgramWin);
    } // setupUi

    void retranslateUi(QMainWindow *QtProgramWin)
    {
        QtProgramWin->setWindowTitle(QApplication::translate("QtProgramWin", "QtProgramWin", Q_NULLPTR));
        twoButton->setText(QApplication::translate("QtProgramWin", "2", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        twoButton->setShortcut(QApplication::translate("QtProgramWin", "2", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        sevenButton->setText(QApplication::translate("QtProgramWin", "7", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        sevenButton->setShortcut(QApplication::translate("QtProgramWin", "7", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        decimalButton->setText(QApplication::translate("QtProgramWin", ".", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        decimalButton->setShortcut(QApplication::translate("QtProgramWin", ".", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        additionButton->setText(QApplication::translate("QtProgramWin", "+", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        additionButton->setShortcut(QApplication::translate("QtProgramWin", "+", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        subtractSign->setText(QApplication::translate("QtProgramWin", "-", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        subtractSign->setShortcut(QApplication::translate("QtProgramWin", "-", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        sixButton->setText(QApplication::translate("QtProgramWin", "6", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        sixButton->setShortcut(QApplication::translate("QtProgramWin", "6", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        fiveButton->setText(QApplication::translate("QtProgramWin", "5", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        fiveButton->setShortcut(QApplication::translate("QtProgramWin", "5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        signButton->setText(QApplication::translate("QtProgramWin", "\302\261", Q_NULLPTR));
        fourButton->setText(QApplication::translate("QtProgramWin", "4", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        fourButton->setShortcut(QApplication::translate("QtProgramWin", "4", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        multiplyButton->setText(QApplication::translate("QtProgramWin", "*", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        multiplyButton->setShortcut(QApplication::translate("QtProgramWin", "*", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        zeroButton->setText(QApplication::translate("QtProgramWin", "0", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        zeroButton->setShortcut(QApplication::translate("QtProgramWin", "0", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        equalButton->setText(QApplication::translate("QtProgramWin", "=", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        equalButton->setShortcut(QApplication::translate("QtProgramWin", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        threeButton->setText(QApplication::translate("QtProgramWin", "3", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        threeButton->setShortcut(QApplication::translate("QtProgramWin", "3", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        clearButton->setText(QApplication::translate("QtProgramWin", "Clear", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        clearButton->setShortcut(QApplication::translate("QtProgramWin", "Backspace", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        divisionButton->setText(QApplication::translate("QtProgramWin", "\303\267", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        divisionButton->setShortcut(QApplication::translate("QtProgramWin", "/", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        oneButton->setText(QApplication::translate("QtProgramWin", "1", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        oneButton->setShortcut(QApplication::translate("QtProgramWin", "1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class QtProgramWin: public Ui_QtProgramWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTPROGRAMWIN_H
