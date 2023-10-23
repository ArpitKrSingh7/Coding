// Jack and Julie found out a strange behaviour between some numbers. Each of them chose one number and disclosed that number to others. They found that the sum of proper divisor's of one's own number is equal to other's number. So they started picking random numbers. Write a code that can help them check whether the numbers satisfy above strange behaviour.

// Input Format

// 1st line consists of number of testcases - 1st line in each testcase consists the 2 spaced numbers Jack and Julie chose.

// Constraints

// .
// Output Format

// For each testcase, print on new line 'true' if they satisfy conditions else, print 'false'.

// Sample Input 0

// 1
// 220 284
// Sample Output 0

// true
// Explanation 0

// Sum of proper divisors of 220 is 284 and sum of proper divisors of 284 is 220. So conditions are satisfied, Output : true






#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int T;
    scanf("%d",&T);
    for(;T>0;T--)
    {
        int a,b,sum1=0,sum2=0;
        scanf("%d %d",&a,&b);
        
        for(int i=1;i<a;i++)
        {
            if(a%i==0)
            {
                sum1=sum1+i;
            }
        }
        
        for(int j=1;j<b;j++)
        {
            if(b%j==0)
            {
                sum2=sum2+j;
            }
        }
        printf("%d\n",sum2);
        printf("%d",sum1);
        if(sum1==b && sum2==a)
        {
            printf("true");
        }     
        
        else
            printf("false");
        
    }
    return 0;
}
