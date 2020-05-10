#ifndef RSA_H
#define RSA_H

#include <QDebug>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <openssl/bn.h>
#include <QString>

class Rsa
{
public:
	Rsa();
	~Rsa();

	void generateRsa();
	const char* getPrivateKey() const;
	const char* getPublicKey() const;
	int privateKeyLen();
	int publicKeyLen();
private:
	const int kBits = 2048;
	const int kExp = 3;
	RSA *rsa = nullptr;
	int keylen_pri, keylen_pub;
	char *pri_pem_key, *pub_pem_key;
};

#endif // RSA_H
