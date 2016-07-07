#include <stdio.h>

void main() {
	// 3 dk: dung for trong hoan canh biet chac chan so lan chay, lam viec voi so
	// 1. khoi tao gia tri truoc khi vao vong for
	// 2. khi nao thi vong for van tiep tuc chayj
	// 3. sau moi mot lan lap thi thay doi gi
	int i, k;
	for (i=0; i <= 99 ; i++) {
		for (k = 0; k <= 99; k++) {
			printf("%d x %d = %d \n", i, k, i * k);
		}
		printf("---\n");
	}
}
