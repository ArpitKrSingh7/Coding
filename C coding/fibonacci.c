#include <stdio.h>
void main()
{
    int a=0,b=1,N,c;
    printf("Enter the value of N! :");
    scanf("%d",&N);
    printf("%d \n", a);
    printf("%d \n", b);
    for (int i=3;i<=N;i++)
    {
        c= a+b;
        
        a=b;
        b=c;

        printf("%d \n", c);
    }
}