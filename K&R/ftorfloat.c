#include <stdio.h>

/* fahrenheit to celcius converted for various given degrees, with floats for more precision */

main()
{
	float fahr, celc;
	float lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	
	printf("Fahrenheit to Celcius\n");
	printf("F\tC\n");
	while (fahr <= upper) {
		celc =(5.0/9.0) * (fahr-32);
		
		printf("%3.0f\t%6.1f\n", fahr, celc);
		fahr = fahr + step;
		}
	}