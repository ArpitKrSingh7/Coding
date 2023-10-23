#include <stdio.h>
#include <math.h>
void main ()
{
    int a,b,c=0,power=0;
    printf("Enter a number : ");
    scanf("%d" , &a);
    b=a;
    
    while(a!=0)
    {
        c=c+1;
        a=a/10;
    }
   a=b;
    while (a!=0)
    {
    power = power + pow (a%10,c); 
        a=a/10;
    }
    if(b==power)
    {
        printf("%d is an armstrong number!" , b);
    }
    else
    printf("%d is not an armstrong number!", b);
}