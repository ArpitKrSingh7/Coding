// You are given a sorted array of integers and a target sum, implement a program to find a pair of elements in the array whose sum equals the given target.Return the indices of the pair. If no such elements are found, print -1 in place of both indices. Hint : Can you try for an efficient algorithm that runs in linear time.(i.e, without any nested loops). NOTE: Indices must be different, an element at an index should only be considered once. It is guaranteed that an unique solution exists.

// Input Format

// 1st line denotes the size of array - N
// 2nd line consists of N space seperated integers in the sorted array.
// 3rd line denotes the target
// Constraints

// 1 <= N <= 100 -1000 <= arrayValue <= 1000

// Output Format

// For each testcase, print the elements seperated by a space.

// Sample Input 0

// 5
// 1 3 4 8 9
// 11
// Sample Output 0

// 1 3
// Explanation 0

// Elements at indices 1 and 3 give target(11) when added.

// Sample Input 1

// 7
// 1 2 4 5 7 11 17
// 20
// Sample Output 1

// -1 -1
// Explanation 1

// No elements exist whose sum equals target.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, sum=0;
    scanf("%d", &n);
    int N[n],i;
    for(i=0;i<n;i++) 
        {
            scanf("%d", &N[i]);
        }
    
    int t,j=1;
    i=0;
    scanf("%d", &t);
    
    while(i!=n) 
        {
            if(sum<t)
                {
                   sum = sum + N[i] + N[j]; 
                       
                                        
                   j++;
                }
                
            if   (sum>t)
               {
                       sum = 0; 
                      i++;
                   j=i+1;
              }
               
              if(sum==t) 
              {
              printf("%d %d", i,j-1); 
                return 0;
              }
        sum=0;
        }
                                        
   printf("-1 -1") ;
                                        
    return 0;
}
