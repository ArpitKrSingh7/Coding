#include <stdio.h>

void main()
{
    int T,N,a;
    scanf("%d",&T);
    for(;T>0;T--)
    {
        int rev=0;
       scanf("%d",&N);
       a=N;
       while(a!=0)
       {
           rev=rev*10+a%10;
           a=a/10;
       }
       if(rev == N)
       {
           printf("-1\n");
       }
       else
       {
           
           for(int i=N;;i++)
           {
            int rev1=0;
               int b=i;
               while(b!=0)
               {
                  rev1=rev1*10+b%10;
                  b=b/10;
               }
               if(rev1!=i)
               {
                   continue;
               }
               else
               {
                printf("%d\n",i-N);
                break;
               }
               
           }  
       }
       
    }
}

