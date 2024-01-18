// Given an integer N, return the number of trailing zeroes in N!.
// Follow up: If you face any integer overflow issues/ wrong output rethink your solution.
// Input Format

// Integer N

// Constraints

// 0<=N<=10^5

// Output Format

// An integer denoting the number of trailing zeroes in N!

// Sample Input 0

// 5
// Sample Output 0

// 1
// Explanation 0

// 5!= 120 120 has one trailing zero

// Sample Input 1

// 0
// Sample Output 1

// 0
// Explanation 1

// 0!=1 1 has no trailing zero

// Sample Input 2

// 3
// Sample Output 2

// 0
// Explanation 2

// 3!=6 6 has no trailing zero

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main () 
{
    int n;

   scanf("%d",&n);
if(n==0)
    {
        printf("0");
    return 0;
    }
int p=0;
   while(n/5!=0) 
       {
         
       n=n/5;
       p=p+n;
       }
printf("%d",p);
    
    return 0;
}
