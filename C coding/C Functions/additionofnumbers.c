#include <stdio.h>
int ADD(int);

int main()
{
    int n,sum;
    printf("Enter How many numbers you have? : ");
    scanf("%d",&n);
    sum=ADD(n);

    printf("%d",sum);
}

int ADD(int n)
{
    int N[n],a=0;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&N[i]);
        a=a+N[i];
    }

    return a;
}
