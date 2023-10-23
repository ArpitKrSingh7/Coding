// 


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,i,d=0,e=0,g=0,h=0;
    scanf("%d",&a);
    int A[a],B[a],C[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<a;i++)
    {
        if(A[i]<A[i+1])
        {
          d++;
        }
        else
        {
            C[e]=i;
            e=i;
           B[e]=A[i];
            e=i+1;
            B[e]=A[i+1];
        }
    }
    
    if(d==(a-1))
    {
        printf("true");
    }
    
    else
    {
        for(i=C[0];i<=e;i++)
        {
            if(B[i]==0)
            {
                g++;
            }
        }
        
        if(g==0)
        {
            for(i=C[0];i<e;i++)
        {
            if(B[i]>=B[i+1])
            {
                h++;
            }
                
        }
            if(h==(e-C[0]) )
            {
                printf("true");
            }
            
            else
                printf("false");
        }
        
        else
        {
            printf("false");
        }
    }
    
    return 0;
}



