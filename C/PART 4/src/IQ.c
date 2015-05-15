#include <stdio.h>
#include <stdlib.h>

int getval(void);

int main()
{
	int age, weight, area;
	float iq;
	
	printf("This is a program to calculate your IQ\n");
	printf("enter your age, weight, and zip code\n");
	printf("Enter your age");
	age=getval();
	printf("Enter your weight");
	weight=getval();
	printf("Enter your Zip Code");
	area=getval();
	
	iq=(age*weight)/area;
	printf("this program has estimated your IQ to be %f", iq);
	return(0);
}

int getval(void)
{
	char input[20];
	int x;
	
	gets(input);
	x=atoi(input);
	return(x);
}