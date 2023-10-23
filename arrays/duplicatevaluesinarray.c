#include <stdio.h>
void main()
{
    int a,i,d=0,x=0;
    printf("Enter number of values : ");
    scanf("%d",&a);
    
    int b[a],c[a];
    printf("Enter the values : \n");
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    c[0]=b[0];
    for(i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(b[i]==b[j])
            {
                for(int k=0;k<d;k++)
                {
                    if(b[i] == c[k])
                    {
                        x++;
                    }
                    
                }
                
                if(x<1)
                {
                    c[d]=b[i];
                    d++;
                }
                else
                x=0;
            
    
            }
        }
    }
    printf("THE FILTERED VALUES ARE : \n");
    for(int K=0;K<d;K++)
    {
        printf("%d\n",c[K]);
    }
}