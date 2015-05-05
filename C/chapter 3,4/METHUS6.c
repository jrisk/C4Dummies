/* METHUS 6 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int methus=969;
	char prompt[] = "So what are you doing?";
	char lel[10];
	
	printf(prompt);
	gets(lel);
	printf("So you are doing %s? Neat. Know what else is neat? \
	Methusulas is %d years old", lel, methus);
	
	return(0);
}
	