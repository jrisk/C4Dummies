#include <stdio.h>

int main() {
	int adder = 0;
	
	int i;
	
	for (i = 0; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			printf("%d\t", i);
			adder += i;
		}
	}
	printf("\n%d", adder);
}