
//Question is on C++ File(Same Name)!!


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,m;
    scanf("%d%d",&n,&m);
    int loop,i,j,k=0,a[n][m],r,l,sum,avg[m*n],res=0;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {  
        for(j=0;j<m;j++)
        {
            loop=sum=0,r=l=1;
            sum+=a[i][j];
            if(i+1<n)
              { l++; sum+=a[i+1][j];}
            if(i-1>=0)
               {l++; sum+=a[i-1][j];}
            if(j+1<m)
              {r++; sum+=a[i][j+1];}
            if(j-1>=0)
              { r++; sum+=a[i][j-1];}
            if(i+1<n&&j+1<m)
                sum+=a[i+1][j+1];
            if(i+1<n&j-1>=0)
                sum+=a[i+1][j-1];
            if(i-1>=0&&j+1<m)
                sum+=a[i-1][j+1];
            if(i-1>=0&&j-1>=0)
                sum+=a[i-1][j-1];
            
             loop=l*r;
            avg[k++]=sum/loop;
            // for(k=0;k<loop;k++)
            // {
            //     sum+=a[]
            // }
        }
    }
    for(i=0;i<m*n;i++)
        res+=avg[i];
    printf("%d",res);
    return 0;
}