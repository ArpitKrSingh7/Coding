#include <stdio.h>
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }

    return n*fact(n-1);

} 
int main ()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int x = fact(n);

    printf("%d is the factorial of %d",x,n);

}