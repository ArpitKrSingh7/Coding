// You are given an array of integers, and your task is to perform pairwise swapping of elements in the array. Specifically, swap each element with its adjacent element.
// NOTE:
// If there are odd number of elements ignore the last element. No need to swap it with any element.
// Input Format

// The first line of input contains a single integer T, denoting the number of test cases.
// The first line of each test case contains an integer N denoting the number of elements in a array.
// The second line of each test case contains N distinct space-separated integers denoting the elements of the array. Note that they are not necessarily given in sorted order.
// Constraints

// .
// .
// Output Format

// For each test case, output on a new line the modified array after swapping.Output the elements of the array space separated.
// Sample Input 0

// 2
// 7
// 5 2 7 8 6 3 1
// 4
// 3 4 9 0
// Sample Output 0

// 2 5 8 7 3 6 1
// 4 3 0 9
// Explanation 0

// Explanation 1
// Swap the adjacent pair of elements (5,2),(7,8),(6,3),(1)
// Explanation 2
// Swap the adjacent elents (3,4),(9,0)

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T;
    scanf("%d",&T);
    while(T--)
        {
            int n,i;
            scanf("%d", &n);
            int N[n];
            for(i=0;i<n;i++) 
                {
                    scanf("%d", &N[i]);
                }
           for(i=0;i<n-1;i+=2) 
               {
                   N[i]=N[i]+N[i+1];
                   N[i+1]=N[i]-N[i+1];
                   N[i]=N[i]-N[i+1];
               
               }
        for(i=0;i<n;i++) 
        printf("%d ", N[i]);
        
        
        printf("\n");
        }
    return 0;
}
