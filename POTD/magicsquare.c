#include <stdio.h>
int main ()
{
    int T;
    scanf("%d",&T);
    for(;T>0;T--)
    {
        int a,i,j,c=0;
        scanf("%d",&a);
        int A[a][a],sum[2*a+2];
        for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
        for(i=0;i<2*a+2;i++)
        {
            sum[i]=0;
        }

        for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
            {
                sum[i] = sum[i] + A[i][j];
            }
        }

        for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
            {
                sum[i+a] = sum[i+a] + A[j][i];
            }
        }

        for(i=0;i<a;i++)
        {
            sum[2*a] = sum [2*a]   + A[i][i];
        }

         for(i=0;i<a;i++)
        {
            sum[2*a+1] = sum [2*a+1]   + A[i][a-1-i];
        }

        for(i=0;i<2*a+1;i++)
        {
            if(sum[i]!=sum[i+1])
            {
                c++;
            }
        }

        if(c>0)
        {
            printf("false");
        }
        else
        printf("true");

    }
}