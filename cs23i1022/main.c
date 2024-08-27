#include <stdio.h>
#include "rational.h"

int main()
{
	rational number1;
	rational number2;
	
	printf("Enter the Numerator of first R.N: ");
	scanf("%d" , &number1.numerator);
	
	printf("Enter the Denominator of first R.N : ");
	scanf("%d" , &number1.denominator);
	
	
	printf("Enter the Numerator of second R.N: ");
	scanf("%d" , &number2.numerator);
	
	printf("Enter the Denominator of second R.N : ");
	scanf("%d" , &number2.denominator);
	
	printf("ADDITION -> ");
	add(&number1 , &number2);
	
	
	printf("SUBTRACTION -> ");
	subtract(&number1 , &number2);
	
	
	printf("MULTIPLICATION -> ");
	multiply(&number1 , &number2);
	
	
	printf("DIVISION -> ");
	division(&number1 , &number2);
	
	
	
	return 0;
}
