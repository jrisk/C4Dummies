/* floats hold large numbers */

#include <stdio.h>

int main()
{
	float lightyear = 5.878E12;
	float jupiter = 483400000;
	float distance;
	
	distance = jupiter/lightyear;
	printf("Jupiter is %f light years from the sun", distance);
	return(0);
}