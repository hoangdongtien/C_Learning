#include <stdio.h>
void main(){
	// test printf
	printf("\n");
	printf("In ra mot so nguyen: %d\n", -120);
	printf("In ra mot so nguyen: %u\n", -120);
	
	printf("In ra mot so thap phan: %09.2f\n", 120.5623);
	printf("In ra mot so thap phan: %lf\n", 120.5623);
	
	printf("Hoc Sinh: %s, co so diem TB la: %2.1f \n", "Hoang Minh Quan" ,9.8);
	
	
	float i;
	printf("Nhap I:" );	
	scanf("%f", &i);
	printf("gia tri i da nhap: %lf", i );
}

