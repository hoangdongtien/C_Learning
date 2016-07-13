#include <stdio.h>

int main(){
	char ten[15];
	float diem;
	
	printf("Hay nhap ten: ");
	// scanf("%s", ten);
	gets(ten);
	
	printf("Hay nhap diem: ");
	scanf("%f", &diem);
	
	
	printf("Hoc Sinh: %s, diem TB la: %f, ", ten, diem);	
	if (diem < 5) {
		printf("Xep loai KEM");
		
	} else if (diem >= 5 && diem < 6.5) {
		printf("Xep loai TRUNG BINH");
		
 	} else if (diem >= 6.5 && diem < 8) {
		printf("Xep loai KHA");
		
	} else if (diem >= 8 && diem <= 10) {
		printf("Xep loai GIOI");
		
	} else if (diem < 0 || diem > 10) {
		printf("Khong XEP LOAI");
	}
}
