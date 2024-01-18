// You are given an array of Integers where every element is appeared twice except one element. Write a code that returns the Integer.

// HINT : Check whether it can be done in one iteration without significant extra memory.

// Input Format

// First Line consists of an Integer(N) representing the number of values in the array.
// Second Line has N space seperated integers in the array
// Constraints

// 1 <= N <= 1000 N is always an odd number.

// Output Format

// For each testcase, print the integer that appeared only once on a new line.

// Sample Input 0

// 5
// 1 3 2 2 1
// Sample Output 0

// 3
// Explanation 0

// 1 and 2 appeared twice, 3 appeared only once.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,x=0;
    scanf("%d", &n);
    int N[n];
    for(int i=0;i<n;i++) 
        {
            scanf("%d", &N[i]);
        }
    
    for(int i=1;;i++) 
        {
            for(int j=0;j<n;j++) 
                {
                    if(N[j]==i)
                        x++;
                }
        if(x==1) 
            
            {
              x=i;
                break;
            }
        x=0;
            
        }
    printf("%d",x);
    return 0;
}
