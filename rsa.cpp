#include "rsa.h"

Rsa::Rsa()
{
	rsa = RSA_generate_key(kBits, kExp, 0, 0);

	/* To get the C-string PEM form: */
	BIO *bio_pri = BIO_new(BIO_s_mem());
	BIO *bio_pub = BIO_new(BIO_s_mem());
	PEM_write_bio_RSAPrivateKey(bio_pri, rsa, NULL, NULL, 0, NULL, NULL);
	PEM_write_bio_RSAPublicKey(bio_pub, rsa);

	keylen_pri = BIO_pending(bio_pri);
	keylen_pub = BIO_pending(bio_pub);
	pri_pem_key = (char*)calloc(keylen_pri+1, 1); /* Null-terminate */
	pub_pem_key = (char*)calloc(keylen_pub+1, 1); /* Null-terminate */
	BIO_read(bio_pri, pri_pem_key, keylen_pri);
	BIO_read(bio_pub, pub_pem_key, keylen_pub);

//	qDebug() << pri_pem_key;
//	qDebug() << pub_pem_key;

	BIO_free_all(bio_pri);
	BIO_free_all(bio_pub);
}

Rsa::~Rsa()
{
	RSA_free(rsa);
	free(pri_pem_key);
	free(pub_pem_key);
}

const char *Rsa::getPrivateKey() const
{
	return pri_pem_key;
}

const char *Rsa::getPublicKey() const
{
	return pub_pem_key;
}

int Rsa::privateKeyLen()
{
	return keylen_pri;
}

int Rsa::publicKeyLen()
{
	return keylen_pub;
}
