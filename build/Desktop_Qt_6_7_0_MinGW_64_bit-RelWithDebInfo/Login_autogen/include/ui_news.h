/********************************************************************************
** Form generated from reading UI file 'news.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWS_H
#define UI_NEWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_News
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_Category;
    QLineEdit *lineEdit_Title;
    QLineEdit *lineEdit_Description;
    QPushButton *pushButton;
    QLabel *label_5;
    QLineEdit *lineEdit_Date;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *News)
    {
        if (News->objectName().isEmpty())
            News->setObjectName("News");
        News->resize(800, 600);
        centralwidget = new QWidget(News);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 761, 551));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 90, 101, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 150, 101, 41));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 200, 101, 41));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 440, 101, 41));
        lineEdit_Category = new QLineEdit(groupBox);
        lineEdit_Category->setObjectName("lineEdit_Category");
        lineEdit_Category->setEnabled(false);
        lineEdit_Category->setGeometry(QRect(110, 100, 171, 28));
        lineEdit_Title = new QLineEdit(groupBox);
        lineEdit_Title->setObjectName("lineEdit_Title");
        lineEdit_Title->setEnabled(false);
        lineEdit_Title->setGeometry(QRect(110, 150, 171, 28));
        lineEdit_Description = new QLineEdit(groupBox);
        lineEdit_Description->setObjectName("lineEdit_Description");
        lineEdit_Description->setEnabled(false);
        lineEdit_Description->setGeometry(QRect(110, 220, 331, 181));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(650, 500, 83, 29));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 30, 101, 41));
        lineEdit_Date = new QLineEdit(groupBox);
        lineEdit_Date->setObjectName("lineEdit_Date");
        lineEdit_Date->setEnabled(false);
        lineEdit_Date->setGeometry(QRect(110, 40, 171, 28));
        News->setCentralWidget(centralwidget);
        menubar = new QMenuBar(News);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        News->setMenuBar(menubar);
        statusbar = new QStatusBar(News);
        statusbar->setObjectName("statusbar");
        News->setStatusBar(statusbar);

        retranslateUi(News);

        QMetaObject::connectSlotsByName(News);
    } // setupUi

    void retranslateUi(QMainWindow *News)
    {
        News->setWindowTitle(QCoreApplication::translate("News", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("News", "New", nullptr));
        label->setText(QCoreApplication::translate("News", "Category", nullptr));
        label_2->setText(QCoreApplication::translate("News", "Title", nullptr));
        label_3->setText(QCoreApplication::translate("News", "Description", nullptr));
        label_4->setText(QCoreApplication::translate("News", "Rate", nullptr));
        pushButton->setText(QCoreApplication::translate("News", "Back", nullptr));
        label_5->setText(QCoreApplication::translate("News", "Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class News: public Ui_News {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWS_H
