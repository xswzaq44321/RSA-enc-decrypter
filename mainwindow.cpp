#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	setWindowTitle("RSA Encrypt/Decrypt Inator");
}

MainWindow::~MainWindow()
{
	delete ui;
}

RSA* MainWindow::createRSA(unsigned char * key,int pub)
{
	RSA *rsa = NULL;
	BIO *keybio = nullptr;
	keybio = BIO_new_mem_buf(key, -1);
	if (keybio==NULL){
		printf( "Failed to create key BIO");
		return nullptr;
	}
	if(pub){
		rsa = PEM_read_bio_RSAPublicKey(keybio, &rsa,NULL, NULL);
	}
	else{
		rsa = PEM_read_bio_RSAPrivateKey(keybio, &rsa,NULL, NULL);
	}
	if(rsa == NULL){
		printf( "Failed to create RSA");
		return nullptr;
	}

	free(keybio);
	return rsa;
}

int MainWindow::public_encrypt(unsigned char * data,int data_len,unsigned char * key, unsigned char *encrypted)
{
	RSA *rsa = createRSA(key,1);
	if(rsa == nullptr)
		return -2;
	int result = RSA_public_encrypt(data_len,data,encrypted,rsa,padding);
	free(rsa);
	return result;
}

int MainWindow::private_decrypt(unsigned char * enc_data,int data_len,unsigned char * key, unsigned char *decrypted)
{
	RSA *rsa = createRSA(key,0);
	if(rsa == nullptr)
		return -2;
	int  result = RSA_private_decrypt(data_len,enc_data,decrypted,rsa,padding);
	free(rsa);
	return result;
}

int MainWindow::private_encrypt(unsigned char * data,int data_len,unsigned char * key, unsigned char *encrypted)
{
	RSA *rsa = createRSA(key,0);
	if(rsa == nullptr)
		return -2;
	int result = RSA_private_encrypt(data_len,data,encrypted,rsa,padding);
	free(rsa);
	return result;
}

int MainWindow::public_decrypt(unsigned char * enc_data,int data_len,unsigned char * key, unsigned char *decrypted)
{
	RSA *rsa = createRSA(key,1);
	if(rsa == nullptr)
		return -2;
	int  result = RSA_public_decrypt(data_len,enc_data,decrypted,rsa,padding);
	free(rsa);
	return result;
}

void MainWindow::on_pushButton_generate_clicked()
{
	delete myRsa;
	myRsa = new Rsa();

	ui->textBrowser_public->setText(myRsa->getPublicKey());
	ui->textBrowser_private->setText(myRsa->getPrivateKey());
}

void MainWindow::on_pushButton_enc_clicked()
{
	if(ui->textEdit_to_enc->toPlainText() != "" &&
			ui->textEdit_enc_key->toPlainText() != ""){
		std::string dataStr = ui->textEdit_to_enc->toPlainText().toStdString();
		std::string keyStr = ui->textEdit_enc_key->toPlainText().toStdString();
		char* data = new char[dataStr.length() + 1];
		strcpy(data, dataStr.c_str());
		int data_len = (int)dataStr.length();
		char* key = new char[keyStr.length() + 1];
		strcpy(key, keyStr.c_str());
		char* encrypted = new char[size];
		int enc_len;
		if(ui->radioButton_enc_pub->isChecked()){
			enc_len = public_encrypt((unsigned char*)data, data_len, (unsigned char*)key, (unsigned char*)encrypted);
		}else if(ui->radioButton_enc_pri->isChecked()){
			enc_len = private_encrypt((unsigned char*)data, data_len, (unsigned char*)key, (unsigned char*)encrypted);
		}else{
			return;
		}
		if(enc_len == -2){
			QMessageBox box;
			box.setText("Invalid Public/Private Key Format!");
			box.setStandardButtons(QMessageBox::Ok);
			box.exec();
			return;
		}else if(enc_len == -1){
			QMessageBox box;
			box.setText("Failed to Encrypt!");
			box.setStandardButtons(QMessageBox::Ok);
			box.exec();
			return;
		}
		QByteArray byteArrEnc(QByteArray::fromRawData(encrypted, enc_len).toBase64());
		ui->textBrowser_enc_res->setPlainText(QString(byteArrEnc));
		delete[] data;
		delete[] key;
		delete[] encrypted;
	}
}

void MainWindow::on_pushButton_dec_clicked()
{
	if(ui->textEdit_to_dec->toPlainText() != "" &&
			ui->textEdit_dec_key->toPlainText() != ""){
		QByteArray dataByteArr = QByteArray::fromBase64(ui->textEdit_to_dec->toPlainText().toLocal8Bit());
		std::string keyStr = ui->textEdit_dec_key->toPlainText().toStdString();
		char* data = new char[dataByteArr.length() + 1];
		data[dataByteArr.length()] = '\0';
		memcpy(data, dataByteArr.data(), dataByteArr.length());
		int data_len = dataByteArr.length();
		char* key = new char[keyStr.length() + 1];
		key = strcpy(key, keyStr.c_str());
		char* decrypted = new char[size];
		int dec_len;
		if(ui->radioButton_dec_pub->isChecked()){
			dec_len = public_decrypt((unsigned char*)data, data_len, (unsigned char*)key, (unsigned char*)decrypted);
		}else if(ui->radioButton_dec_pri->isChecked()){
			dec_len = private_decrypt((unsigned char*)data, data_len, (unsigned char*)key, (unsigned char*)decrypted);
		}else{
			return;
		}
		if(dec_len == -2){
			QMessageBox box;
			box.setText("Invalid Public/Private Key Format!");
			box.setStandardButtons(QMessageBox::Ok);
			box.exec();
			return;
		}else if(dec_len == -1){
			QMessageBox box;
			box.setText("Failed to Decrypt!");
			box.setStandardButtons(QMessageBox::Ok);
			box.exec();
			return;
		}
		ui->textBrowser_dec_res->setText(QString::fromLocal8Bit((char*)decrypted, dec_len));
		delete[] data;
		delete[] key;
		delete[] decrypted;
	}
}
