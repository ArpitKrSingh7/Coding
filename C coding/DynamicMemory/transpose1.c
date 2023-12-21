#include <stdio.h>
#include <stdlib.h>
void main()
{
    
// -------------- --- --- --- -----------------------------------------------------------------------TRANSPOSE PROGRAM---------------------------------------------------------------------------------
    int p,n,i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&p);
    printf("Enter the number of columns : ");
    scanf("%d",&n);
    
    int *x=malloc(p*n*sizeof(int));
    printf("Enter the Elements [Row x Column] :\n ");
    for(i=0;i<p;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",x+(i*n+j));
        }
    }
    if(1)
    
{ 
    printf("YOUR MATRIX IS :- \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",*(x+(i*n+j)));
        }
        printf("\n");
    }
    printf ("\n");
    
    
    printf("TRANSPOSE MATRIX IS :- \n "); 
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d ",*(x+(j*n+i)));
        }
        printf("\n");
    }
}
}