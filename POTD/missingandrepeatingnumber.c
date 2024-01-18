// You are given an array of integers of size n. It is guaranteed that the elements in your array are in the range [1,n] but one of the number appears twice while another number does not appear in the array. Return the missing number and repeating number in order.

// Follow up: Were you able to solve the problem in linear run time complexity,i.e without using nested for loops? Python users try solving without using dictionary.

// Hint: Form two equations consisting of the missing and repeating numbers and solve them

// Input Format

// Size of the array n
// Elements of the array
// Constraints

// 2<=N<=100

// Output Format

// Missing number a space then the repeating number

// Sample Input 0

// 3
// 1 3 3
// Sample Output 0

// 2 3
// Explanation 0

// 2 - missing number 3 - repeating number


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,s=0,p=1,f=1,m,x,y;
    scanf("%d", &n);
    int N[n];
    for(int i=0;i<n;i++) 
        {
         scanf("%d", &N[i]);
        


         s=s+N[i];
         p=p*N[i];
        
        }
    for(int i=1;i<=n;i++) 
        {
            f=f*i;
        }
    m=(n*(n+1))/2;
    
     y = (s-m)/(1-(float)f/p);
     x =(f*y)/p;
    printf("%d %d",x,y);
    return 0;
}
