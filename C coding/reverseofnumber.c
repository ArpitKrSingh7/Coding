+#include <stdio.h>
int main ()
{
    int a;
    printf("Enter a number : ");
    scanf("%d" ,&a);
    int reverse=0;
    while(a!=0)
    {
       reverse = 10*reverse + a%10;
       a=a/10;
    }
    printf ("%d is the reverse of the number!" ,reverse);
}