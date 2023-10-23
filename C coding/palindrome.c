#include <stdio.h>
int main ()
{
    int a;
    
    printf("Enter a number : ");
    scanf("%d" ,&a);
    int b=a;
    int reverse=0;
    while(a!=0)
    {
       reverse = 10*reverse + a%10;
       a=a/10;
    }
    if(reverse == b)
    {
        printf("%d is a palindrome number!" ,b);
    }
    else
    {
    printf("%d is not a palindrome number!",b);
    }
}