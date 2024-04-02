#include <stdio.h>
#include <math.h>

int getmax(int N[] , int n)
{
    int max = N[0];
    for(int i = 0;i<n;i++)
    {
        if(max < N[0])
        {
            max = N[i];
        }
    }

    return max;
}

int digits(int n)
{
    int digit = 0;
    while(n!=0)
    {
        digit++;
        n = n/10;
    }
}

void countsort(int N[],int n,int pass)
{
    int M[10];
    int output [n];
    int p = pow(10,pass - 1);
    

    for (int i = 0; i < 10; i++)
    {
        M[i] = 0;
    }

    for(int i = 0 ;i<n;i++)
    {
        M[(N[i] / p) % 10]++;
    }
    // printf ("%d",getmax(N,n));
    for(int i = 1;i<10;i++)
    {
        M[i] = M[i-1] + M[i];
    }

    for(int i = n-1 ;i>=0;i--)
    {
        output [--(M[(N[i] / p) % 10])] = N[i];
    }

    
}

void main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    int N[n];
    for(int i = 0;i<n;i++)
    {
        printf("Enter the element : ");
        scanf("%d" , &N[i]);
    }

    int x = digits(getmax(N,n));

    for(int i = 1 ;i<=x;i++)
    {
        countsort(N,n,i);
    }


}
