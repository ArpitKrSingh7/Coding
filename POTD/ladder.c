// Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader.

// Input Format

// First Line of input contains the integer which is value of n
// Second Line of input contains the element of array A[]
// Constraints

// 1 <= n <= 10^7
// 0 <= Ai <= 10^7
// Output Format

// The Single Line of output will contain all the ladder elements in space separated manner
// Sample Input 0

// 6
// 16 17 4 3 5 2
// Sample Output 0

// 17 5 2
// Explanation 0

// The first leader is 17 as it is greater than all the elements to its right.  Similarly, the next leader is 5. The right most element is always a leader so it is also included.
// Sample Input 1

// 5
// 1 2 3 4 0
// Sample Output 1

// 4 0
// Explanation 1

// 0 is the rightmost element and 4 is the only element which is greater than all the elements to its right.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,i, j,b=0;
    scanf("%d", &a);
    int A[a];
    for(i=0;i<a;i++) 
        {
            scanf("%d", &A[i]);
        }
    
    for(i=0;i<a;i++) 
        {
            for(j=i;j<a;j++) 
                {
                    if(A[i] < A[j]) 
                        {
                            b++;
                        }
                }
        
        if(b ==0) 
            {
              printf("%d ", A[i]);
            }
        b=0; 
                
        }
    return 0;
}
