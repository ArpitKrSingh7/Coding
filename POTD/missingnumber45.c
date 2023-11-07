
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a, i,j,b=0;
    scanf("%d", &a);
    int A[a];
    
    for (i=
        0;i<a;i++) 
       {
          scanf("%d", &A[i]) ;
       }
for(j=1;; j++) 
    
{
    for(i=0;i<a;i++)
    {
    if(j==A[i]) 
        {
        b=b+1;
        break;
        }
    
    }
    if(b==0) 
        {
        break;
        }
    b=0;
}

printf("%d", j) ;
    
    return 0;
}
