#include <stdio.h>

// integer
int tinh_tong(int so_thu_1, int so_thu_2) {
	return so_thu_1 - so_thu_2;
}

int parabol(x){
	return 3*x*x + 2*x + 1;
}

void main() {	
	int so1 = 1589;
	int so2 = 9567;
	
	int ketqua = tinh_tong(so1, so2);

	// string: %d ~ decimal
	printf("tinh tong 2 so: %d", ketqua );		
	
	int y = parabol(4);
}


