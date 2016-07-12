#include <stdio.h>

int main() {
	int x=150, y = 0;	
	printf("x= %d \n", x);
	
	// toan tu tu than 
	y = x++;
	printf("x++= %d, y = %d \n", x, y);
	
	//x--
	//++x;
	y = ++x;
	printf("++x= %d, y = %d  \n", x, y);
	
	//--x;
	
	// toan tu nhi than: + - * / %
	x = 150 % 4;
	printf("x= %d \n", x);
	
	y =  7 + (8 * 2 )- (6/3);
	printf("y=7+8*2 -6/3. %d \n", y);
	
	y =  7 + (8 * ++x )- (6/3);
	printf("y=7 + (8 * ++x )- (6/3). %d \n", y);
	
	x = 150 % 4;
	y =  7 + (8 * x++ ) - (6/3);
	printf("y=7 + (8 * x++ )- (6/3). %d \n", y);
	
}

