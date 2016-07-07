#include <stdio.h>

void main(){
	/// 
	int i,k;
	for (i = 1; i <= 10; i++ ) {
		for (k = 0; k < i; k++) {
			printf("O");
		}	
		printf("\n");	
	}
	
	
	for (i = 20; i >= 0; i=i-2) {
		for (k = 0; k < i; k++) {
			printf("O");
		}	
		printf("\n");	
	}
	
	
	for (i = 1; i <= 10; i++ ) {
		for (k = 0; k <=10; k++) {
			if (k < i) {
				printf(" ");
			} else {
				printf("#");
			}			
		}	
		printf("\n");	
	}
}
