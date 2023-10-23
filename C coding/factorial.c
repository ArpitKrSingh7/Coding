#include <stdio.h>
int main (void)
{
int a;
printf("Enter a number : ");
scanf("%d" , &a);
int product = 1;
for(int i=1 ; i<=a ; i++)
{  
    product = product * i;
    // printf("%d is the factorial\n",product);
}
printf("%d is the factorial. \n" , product);
}