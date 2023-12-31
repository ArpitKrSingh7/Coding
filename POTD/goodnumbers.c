// A number is said to be Good if it has exactly k 1's in its binary representation. Given an integer k and two integers l and r, return the number of good numbers in the range (l,r).

// Input Format

// Integer k Integers l and r seperated by a space

// Constraints

// 1<=k<=10000 1<=l,r<=1000

// Output Format

// Number of good numbers between l and r(l and r are exclusive)

// Sample Input 0

// 2
// 5 10
// Sample Output 0

// 2
// Explanation 0

// 6-110 7-111 8-1000 9-1001

// 6 and 9 have two 1's in their binary representation


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int binary(int n) 
    {
    int k=0;
        while (n!=0)
            {
                if(n%2==1) 
                    {
                        k++;
                    }
                n = n/2;
            }
    return k;
    }

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int k; 
    int i,r, m=0;
     
    scanf("%d %d %d",&k,&i,&r);
    
    for(int j=i+1;j<r;j++) 
        {
            int x = binary(j);
            if(x==k)
              {
                  m++;
              }
        }
    
    printf("%d",m);
    return 0;
}
