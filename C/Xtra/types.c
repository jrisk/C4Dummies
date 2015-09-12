#include <stdio.h>

void main() {

	char characters[25] = "this is 20ish characters";
	
	short shortest = 32767;
	
	int integer = 2145054987;
	
	float floater = 1234.5678;
	
	unsigned int unint = 4000000000;
	
	unsigned short unshort = 65535;
	
	unsigned long unlong = 4000000000;
	
	long longy = 2000000000;
	
	short shorty = 32768;
	
	long long longest = 5000000000;
	
	long double longdub = (3.0 * 100000000000);
	
	printf("%d, %d, %8.1f, %u, %s, %lli, %Lf", shortest, integer, floater, unint,
	characters, longest, longdub);
	
	}