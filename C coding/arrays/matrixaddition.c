#include <stdio.h>
int main ()
{
    int a,b,i,j;

    printf("Enter the size of the Matrix [ROWS x COLUMNS] : \n");
    scanf("%d %d",&a,&b);

    int A[a][b],B[a][b],C[a][b];
    printf("Enter the values of first matrix  : \n");

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

        printf("YOUR ENTERED MATRIX IS : \n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

        
    
    printf("Enter the values of second matrix : \n");

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    printf("YOUR ENTERED MATRIX IS : \n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

          printf("The Addition matrix is : \n");

       for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

}