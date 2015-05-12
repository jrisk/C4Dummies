/* upside down prototyping so you dont have to call jerk twice*/

#include <stdio.h>

void jerk(void)
{
	printf("BILL IS A JERK\n");
}

int main()
{
	
	
	printf("Jerk jerk jerk");
	jerk();
	printf("Yes indeed");
	jerk();
	printf("The jerk store called");
	jerk();
	printf("And there out of that jerk");
	jerk();
	
	return(0);
}

