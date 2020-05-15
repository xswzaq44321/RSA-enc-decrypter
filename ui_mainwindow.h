/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_generate;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTextBrowser *textBrowser_public;
    QVBoxLayout *verticalLayout;
    QLabel *label_private;
    QTextBrowser *textBrowser_private;
    QFrame *line;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *plainTextEdit_to_enc;
    QPlainTextEdit *plainTextEdit_enc_key;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QRadioButton *radioButton_enc_pub;
    QRadioButton *radioButton_enc_pri;
    QPushButton *pushButton_enc;
    QTextBrowser *textBrowser_enc_res;
    QVBoxLayout *verticalLayout_5;
    QPlainTextEdit *plainTextEdit_to_dec;
    QPlainTextEdit *plainTextEdit_dec_key;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QRadioButton *radioButton_dec_pub;
    QRadioButton *radioButton_dec_pri;
    QPushButton *pushButton_dec;
    QTextBrowser *textBrowser_dec_res;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(891, 728);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton_generate = new QPushButton(centralWidget);
        pushButton_generate->setObjectName(QString::fromUtf8("pushButton_generate"));
        pushButton_generate->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_generate->sizePolicy().hasHeightForWidth());
        pushButton_generate->setSizePolicy(sizePolicy);
        pushButton_generate->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Impact"));
        font.setPointSize(18);
        pushButton_generate->setFont(font);

        verticalLayout_3->addWidget(pushButton_generate);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);

        textBrowser_public = new QTextBrowser(centralWidget);
        textBrowser_public->setObjectName(QString::fromUtf8("textBrowser_public"));

        verticalLayout_2->addWidget(textBrowser_public);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_private = new QLabel(centralWidget);
        label_private->setObjectName(QString::fromUtf8("label_private"));
        label_private->setFont(font1);

        verticalLayout->addWidget(label_private);

        textBrowser_private = new QTextBrowser(centralWidget);
        textBrowser_private->setObjectName(QString::fromUtf8("textBrowser_private"));

        verticalLayout->addWidget(textBrowser_private);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout_3);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Impact"));
        font2.setPointSize(12);
        label_4->setFont(font2);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        plainTextEdit_to_enc = new QPlainTextEdit(centralWidget);
        plainTextEdit_to_enc->setObjectName(QString::fromUtf8("plainTextEdit_to_enc"));

        verticalLayout_4->addWidget(plainTextEdit_to_enc);

        plainTextEdit_enc_key = new QPlainTextEdit(centralWidget);
        plainTextEdit_enc_key->setObjectName(QString::fromUtf8("plainTextEdit_enc_key"));

        verticalLayout_4->addWidget(plainTextEdit_enc_key);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);

        horizontalLayout_2->addWidget(label);

        radioButton_enc_pub = new QRadioButton(centralWidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioButton_enc_pub);
        radioButton_enc_pub->setObjectName(QString::fromUtf8("radioButton_enc_pub"));
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        radioButton_enc_pub->setFont(font4);
        radioButton_enc_pub->setChecked(true);

        horizontalLayout_2->addWidget(radioButton_enc_pub);

        radioButton_enc_pri = new QRadioButton(centralWidget);
        buttonGroup->addButton(radioButton_enc_pri);
        radioButton_enc_pri->setObjectName(QString::fromUtf8("radioButton_enc_pri"));
        radioButton_enc_pri->setFont(font3);
        radioButton_enc_pri->setChecked(false);

        horizontalLayout_2->addWidget(radioButton_enc_pri);


        verticalLayout_4->addLayout(horizontalLayout_2);

        pushButton_enc = new QPushButton(centralWidget);
        pushButton_enc->setObjectName(QString::fromUtf8("pushButton_enc"));
        pushButton_enc->setFont(font2);

        verticalLayout_4->addWidget(pushButton_enc);

        textBrowser_enc_res = new QTextBrowser(centralWidget);
        textBrowser_enc_res->setObjectName(QString::fromUtf8("textBrowser_enc_res"));

        verticalLayout_4->addWidget(textBrowser_enc_res);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        plainTextEdit_to_dec = new QPlainTextEdit(centralWidget);
        plainTextEdit_to_dec->setObjectName(QString::fromUtf8("plainTextEdit_to_dec"));

        verticalLayout_5->addWidget(plainTextEdit_to_dec);

        plainTextEdit_dec_key = new QPlainTextEdit(centralWidget);
        plainTextEdit_dec_key->setObjectName(QString::fromUtf8("plainTextEdit_dec_key"));

        verticalLayout_5->addWidget(plainTextEdit_dec_key);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font3);

        horizontalLayout_3->addWidget(label_3);

        radioButton_dec_pub = new QRadioButton(centralWidget);
        buttonGroup_2 = new QButtonGroup(MainWindow);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(radioButton_dec_pub);
        radioButton_dec_pub->setObjectName(QString::fromUtf8("radioButton_dec_pub"));
        radioButton_dec_pub->setChecked(false);

        horizontalLayout_3->addWidget(radioButton_dec_pub);

        radioButton_dec_pri = new QRadioButton(centralWidget);
        buttonGroup_2->addButton(radioButton_dec_pri);
        radioButton_dec_pri->setObjectName(QString::fromUtf8("radioButton_dec_pri"));
        radioButton_dec_pri->setChecked(true);

        horizontalLayout_3->addWidget(radioButton_dec_pri);


        verticalLayout_5->addLayout(horizontalLayout_3);

        pushButton_dec = new QPushButton(centralWidget);
        pushButton_dec->setObjectName(QString::fromUtf8("pushButton_dec"));
        pushButton_dec->setFont(font2);

        verticalLayout_5->addWidget(pushButton_dec);

        textBrowser_dec_res = new QTextBrowser(centralWidget);
        textBrowser_dec_res->setObjectName(QString::fromUtf8("textBrowser_dec_res"));

        verticalLayout_5->addWidget(textBrowser_dec_res);


        horizontalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_4);

        verticalLayout_6->setStretch(0, 3);
        verticalLayout_6->setStretch(3, 5);

        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_generate->setText(QCoreApplication::translate("MainWindow", "Generate RSA Key Pair", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Public Key", nullptr));
        label_private->setText(QCoreApplication::translate("MainWindow", "Private Key", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Encryption and Decryption", nullptr));
        plainTextEdit_to_enc->setPlaceholderText(QCoreApplication::translate("MainWindow", "Text to Encrypt", nullptr));
        plainTextEdit_enc_key->setPlaceholderText(QCoreApplication::translate("MainWindow", "Public/Private Key", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "RSA Key Type", nullptr));
        radioButton_enc_pub->setText(QCoreApplication::translate("MainWindow", "Public Key", nullptr));
        radioButton_enc_pri->setText(QCoreApplication::translate("MainWindow", "Private Key", nullptr));
        pushButton_enc->setText(QCoreApplication::translate("MainWindow", "Encrypt", nullptr));
        textBrowser_enc_res->setPlaceholderText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        plainTextEdit_to_dec->setPlaceholderText(QCoreApplication::translate("MainWindow", "Text to Decrypt", nullptr));
        plainTextEdit_dec_key->setPlaceholderText(QCoreApplication::translate("MainWindow", "Public/Private Key", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "RSA Key Type", nullptr));
        radioButton_dec_pub->setText(QCoreApplication::translate("MainWindow", "Public Key", nullptr));
        radioButton_dec_pri->setText(QCoreApplication::translate("MainWindow", "Private Key", nullptr));
        pushButton_dec->setText(QCoreApplication::translate("MainWindow", "Decrypt", nullptr));
        textBrowser_dec_res->setPlaceholderText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
