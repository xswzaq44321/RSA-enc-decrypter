#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <openssl/pem.h>
#include <openssl/ssl.h>
#include <openssl/rsa.h>
#include <openssl/evp.h>
#include <openssl/bio.h>
#include <openssl/err.h>
#include <string>
#include <QDebug>
#include <QRadioButton>
#include <QTextEdit>
#include <QTextBrowser>
#include <QString>
#include <QMessageBox>

#include "rsa.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);
	~MainWindow();

	RSA* createRSA(unsigned char * key,int pub);
	int public_encrypt(unsigned char* data,int data_len,unsigned char* key, unsigned char* encrypted);
	int private_decrypt(unsigned char* enc_data,int data_len,unsigned char* key, unsigned char* decrypted);
	int private_encrypt(unsigned char* data,int data_len,unsigned char* key, unsigned char* encrypted);
	int public_decrypt(unsigned char* enc_data,int data_len,unsigned char* key, unsigned char* decrypted);
private slots:
	void on_pushButton_generate_clicked();
	void on_pushButton_enc_clicked();
	void on_pushButton_dec_clicked();

private:
	Ui::MainWindow *ui;

	Rsa *myRsa = nullptr;
	int padding = RSA_PKCS1_PADDING;
	const int BuffSize = 4098;
};

#endif // MAINWINDOW_H
