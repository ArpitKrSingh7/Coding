#include <stdio.h>
int main ()
{
    int a,b,c,d,i,j,e=0;
    printf("Enter the Rows and Columns of the first Matrix\n");
    scanf("%d %d",&a,&b);
    printf("Enter the Rows and Columns of the second Matrix\n");
    scanf("%d %d",&c,&d);

    if(a==d && b==c)
    {

        int A[a][b],B[c][d],C[a][d];
        printf("Enter the values of the first Matrix : \n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                scanf("%d",&A[i][j]);
            }
        }

        printf("YOUR ENTERED MATRIX : \n");

        for(i=0;i<a;i++)
        {
            for(j=0;j<d;j++)
            {
                printf("%d ",A[i][j]);
            }
            printf("\n");
        }
        
        printf("Enter the values of second Matrix : \n");

        for(i=0;i<c;i++)
        {
            for(j=0;j<d;j++)
            {
                scanf("%d",&B[i][j]);
            }
        }

        printf("YOUR ENTERED MATRIX : \n");

        for(i=0;i<a;i++)
        {
            for(j=0;j<d;j++)
            {
                printf("%d ",B[i][j]);
            }
            printf("\n");
        }

        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                for(int k=0;k<b;k++)
                {
                    e = e + A[i][k] * B[k][j] ;

                    if(k==b-1)
                    {
                        C[i][j]=e;
                        e=0;
                    }
                    
                }
 
            }
            
        }

        printf("MATRIX MULTIPLICATION RESULT : \n");
        
        for(i=0;i<a;i++)
        {
            for(j=0;j<d;j++)
            {
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }

    }

    else
    printf("INVALID INPUT");

}