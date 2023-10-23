#include <stdio.h>
int main ()
{
    int a;
    printf("Enter a number : ");
    scanf("%d" ,&a);

    for(int i=2 ; i<a ;i++)
    {
        if(a%i == 0)
        {
            printf("%d is not a prime number." ,a);
        }
        break; 
    }
    printf("Hello");
}