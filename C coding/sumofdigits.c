#include <stdio.h>
int main ()
{
    int a ,sum=0;
    printf("Enter a number : ");
    scanf("%d", &a);

    while(a!=0)
    {
       sum = sum + a%10;
       a=a/10;
    }
    printf("Sum of the digits is %d",sum);
}