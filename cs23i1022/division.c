#include <stdio.h>
#include "rational.h"


void division(rational *q , rational *s)
{
	int p = q -> numerator * s -> denominator;
	int t = s -> numerator * q -> denominator;
	
	printf("%d / %d \n" , p/hcf(p,t),t/hcf(p,t));
}
