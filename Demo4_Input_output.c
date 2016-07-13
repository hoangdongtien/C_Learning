#include <stdio.h>

void main(){
	int a,b, tong;
	printf("Hay nhap vao so a: ");
	scanf("%d", &a);
	
	printf("Hay nhap vao so b: ");
	scanf("%d", &b);
	//tong = tinh_tong(a, b);
	
	printf("Tong hai so la: %d",tinh_tong(a, b));



}

int tinh_tong(int x, int y) {
	return x + y;
}
