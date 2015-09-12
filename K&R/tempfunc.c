#include <stdio.h>

/* rewrite temperature program to use functions */

int convert(int temp);

int main() {
	
	float fahr = 0;
	int max = 200;
	int step = 20;
	float celc;

	printf("F\tC\n");
	while (fahr <= max) {
	celc = convert(fahr);
	printf("%3.2f\t %3.2f\n", fahr, celc);
	fahr += step;

	}


}
int convert(int fah) {

	int celcius;
	
	celcius = (5.0/9.0) * (fah-32);

	return celcius;
}