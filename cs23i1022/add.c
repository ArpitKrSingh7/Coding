#include <stdio.h>
#include "rational.h"


void add(rational *q , rational *s)
{
	int p = q -> numerator * s -> denominator + s -> numerator * q -> denominator;
	int t = s -> denominator * q -> denominator;
	
	printf("%d / %d \n" , p/hcf(p,t),t/hcf(p,t));
}
