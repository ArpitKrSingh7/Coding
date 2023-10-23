#include <stdio.h>
int main ()
{
    int a,n,k=1;
    printf("n : ");
    scanf("%d",&n);
    a=2*n -1 ;

    for(int i=1;i<=a;i++)
    {
        for (int j=1;j<=a;j++)
        {
            
            
            // if(i==1||j==1||i==a||j==a)
            // {
            //     printf("%d ",n);
            // }
            for(;k<=n;k++)
            {
                if(i==k||j==k||i==a-k+1||j==a-k+1)
                {
                    printf("%d ", n-k+1);
                }
                else
                {
                    printf("  ");
                    
                }
                
            }
            // else if (i==2||j==2||i==a-1||j==a-1)
            // {
            // printf("%d ",n-1);
            // }
            // else if(i==3||j==3||i==a-2||j==a-2)
            // {
            //     printf("%d ",n-2);
            // }
            // else if(i==4||j==4||i==a-3||j==a-3)
            // {
            //     printf("%d ",n-3);
            // }
            // else if(i==5||j==5||i==a-4||j==a-4)
            // {
            //     printf("%d ",n-4);
            // }
            // else
            // {
            //     printf("  ");
            // }
        }
        printf("\n");
    }
}
