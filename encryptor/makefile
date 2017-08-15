encryptor: encrypt.o encryptor.o
	gcc encryptor.o encrypt.o -o encryptor

encrypt.o: encrypt.c encrypt.h
	gcc -c encrypt.c

encryptor.o: encrypt.o encryptor.c
	gcc -c encryptor.c
