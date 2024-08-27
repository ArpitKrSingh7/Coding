#include <stdio.h>
#include "rational.h"


void multiply(rational *q , rational *s)
{
	int p = q -> numerator * s -> numerator;
	int t = s -> denominator * q -> denominator;
	
	printf("%d / %d \n" , p/hcf(p,t),t/hcf(p,t));
}
