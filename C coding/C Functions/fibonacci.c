#include <stdio.h>
int fib(int n)
{
    if(n==2)
    {
        return 1;
    }

    if(n==1)
    {
        return 0;
    }

    return fib(n-1)+fib(n-2);
}
int main ()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int x = fib(n);

    printf("%d",x);
}