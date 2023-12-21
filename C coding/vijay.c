#include <stdio.h>
int main ()
{
    int n,i,j,sum=0,a,b;
    printf("Enter number of lines : ");
    scanf("%d", &n);
    
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            a=i;
            if(a>n)
            {
                a=2*n-i;
            }
            b=j;
            if(b>n)
            {
                b=2*n-j;
            }

            if(b>a)
            sum=a;
            else
            sum=b;

            printf("%d ",n+1-sum);

        }
        printf("\n");
    }
}