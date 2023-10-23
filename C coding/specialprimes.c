//Rachel found a box containing integers in the range [1, 1000].
//She was intrigued and began analyzing every number in the box.
//She observed that certain numbers had a 

//uniqueproperty:

//They were primes, but not ordinary primes.
//The sum of the digits of these numbers was also a prime number.
//Calculate the count of such special primes within a given range [low, high].
//(0 <= low <= 1000 and 0 <= high <= 1000)


#include <stdio.h>

int main(void) 

{	// your code goes here
	
    int T;
    scanf("%d",&T);
    for (;T>0;T--)
    {
        int a,b,f=0;
        scanf("%d",&a);
        scanf("%d",&b);
        for (int i=a;i>=a && i<=b;i++)
        {
            int c=0;
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            
            if(c==2)
            {
                int d=i,sum=0;
                while (d!=0)
                {
                    sum=sum + d%10;
                    d=d/10;
                }
                int e=0;
                for(int k=1;k<=sum;k++)
                {
                    if(sum%k==0)
                    {
                        e++;
                    }
                }
                if(e==2)
                {
                    f++;
                }
                
            }
            
        }
        printf("%d\n",f);

    }
	return 0;
}

