#include <stdio.h>

/* fahrenheit to celcius converted for various given degrees */

main()
{
	int fahr, celc;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	
	while (fahr <= upper) {
		celc = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celc);
		fahr = fahr + step;
		}
	}