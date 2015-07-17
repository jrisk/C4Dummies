/* Euler 1: Calculate the Sum of all numbers
under 1000 that are multiples of either 3 or 5 */

function multiples(numbah) {
	var totalsvar = 0;
	
	for (i = 0; i < numbah; i++) {
		if (i % 5 == 0 || i % 3 == 0 ) {
			totalsvar += i;
		}
	}
	window.alert("The sum of all numbers" +
	"under 1000 that are" +
	"multiples of either 3 or 5 is: ");
	window.alert(totalsvar);
}

multiples(1000);