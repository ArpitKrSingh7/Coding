// You will be given an array arr of integers of length N. You can construct an integer from two integers by treating the integers as strings, and then concatenating them. For example, 19 and 4 can be used to construct 194 and 419.

// The task is to find whether it’s possible to construct an integer using all the digits of these numbers such that it would be divisible by 3. If it is possible then print 1 and if not print 0.

// Input Format

// First line of input will be the integer N
// Second line of input will contain N space separated integer which is the elements of array of size N
// Constraints

// 1 <= N
// arr[i] <= 10^5
// Output Format

// You need to print 1 if we can form a number by the digits of the given number, that would be divisible by 3, otherwise print 0
// Sample Input 0

// 3
// 40 50 90
// Sample Output 0

// 1
// Explanation 0

// One such number is 405090.
// Sample Input 1

// 2
// 1 4
// Sample Output 1

// 0




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,sum=0,i;
    scanf("%d", &n);
    int N[n];
    
    for (i=0;i<n;i++) 
        {
           scanf("%d", &N[i]);
        sum =  sum+N[i];
        }
    
    
    if(sum%3==0) 
        printf("1") ;
    else
        printf("0") ;
    return 0;
}
