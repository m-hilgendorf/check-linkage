#include <openssl/conf.h>
#include <openssl/evp.h>
#include <openssl/err.h>

int main(int arc, char *argv[])
{ 
  ERR_load_crypto_strings();
  OpenSSL_add_all_algorithms();
  EVP_cleanup();
  CRYPTO_cleanup_all_ex_data();
  ERR_free_strings();
  return 0;
}