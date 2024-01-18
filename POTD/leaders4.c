// Given an array A of integers. Your task is to find the leaders in the array. An element of array is a leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader.
// Input Format

// The first line of input contains a single integer T, denoting the number of test cases.
// The first line of each test case contains an integer N denoting the number of elements in a array.
// The second line of each test case contains N distinct space-separated integers denoting the elements of the array. Note that they are not necessarily given in sorted order.
// Constraints

// .
// .
// Output Format

// For each test case, output on a new line the leaders of the array
// Sample Input 0

// 1
// 6
// 16 17 4 3 5 2
// Sample Output 0

// 17 5 2
// Explanation 0

// The first leader is 17 as it is greater than all the elements to its right. Similarly, the next leader is 5. The right most element is always a leader so it is also included.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T;
    scanf("%d", &T);
    
   while(T--) 
       {
          int n,t=0;
           scanf("%d", &n);
       int N[n];
       for(int i=0;i<n;i++) 
           {
               scanf("%d", &N[i]);
           }
       
       for(int i=0;i<n;i++)
           {
           if(i==n-1) 
               {
                   printf("%d ", N[i]);
               }
           else
          {
               for(int j=i+1;j<n;j++) 
                   {
                       if(N[i]<N[j])
                           {
                               break;
                           }
                       else
                           t++;
                   }
               if(t==n-i-1) 
                   {
                       printf("%d ", N[i]);
                   }
               
               t=0;
           }
         }
       printf("\n");
       }
    return 0;
}
