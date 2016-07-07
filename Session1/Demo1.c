#include <stdio.h> // Library: standard in-out 

int main() {
	
	
	int hehe = 100; // khai bao va khoi tao bien hehe = 100
	
	/*
	day la khai bao bien kaka
	xuong dong
	*/
	int kaka = 200;	
	
	
	// print format
	printf("Hello %d %d world~~~~", 4567, 55);	
	
	
	// START 
	int a, b, c;
	printf("\n nhap vao so A: ");
	scanf("%d", &a);
	
	printf(" nhap vao so B: ");
	scanf("%d", &b);
	
	c = a + b;
	
	if (c > 100) {
		printf("so C lon hon 100");
		
		if (c < 200) {
			printf("so C nho hon 200");	
		}
	
	} else if ( c < 100 && c > 50) {
		printf("so C lon hon 50");
		
	} else {
		printf("so C nho hon 50");
	}
	
	printf("Result: %d", c);
 }
 
 
 
 
