#include <stdio.h>

int main() {
	int y = 100;
	
	int  x = (y <= 7);
	// >   >=    <=  ==    != : chi tra ve 1:TRUE hoac 0:FALSE
	
	// C khong co kieu boolean.
	// - TRUE: khac 0
	// - FALSE : bang 0
	printf("%d \n", x);
	if (!x) {
		printf("TRUE");
		
	} else {
		printf("FALSE");
	}
	
}

