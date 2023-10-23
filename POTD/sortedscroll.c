// Amelia had an ancient scroll, which was a sorted list of mystical numbers. One day, boy named Erik arrived with an integer, K, seeking its place in the scroll. Amelia, helped Erik discover the index at which K should be inserted to preserve the sorted order.
// But there was a twist—K had to be inserted within the boundaries of the scroll, between indices 0 to N-1, or else, the index of K should be set to -1.
// (Assume that the indexing starts from 0).

// Input Format

// The first line consists of a single integer T denoting the number of test cases.
// Each test case contains multiple lines of input
// The first line consists of a single integer N denoting the number of elements in the scroll.
// The second line contains N space separated integers denoting the elements of the scroll.
// The third line consists of a single integer K which should be inserted the scroll.
// Constraints

// .
// .
// .
// Output Format

// For each test case on a new line, print the index at which K should be inserted such that the sorted order is maintained.
// Sample Input 0

// 2
// 5
// 1 3 5 7 9
// 4
// 3
// 10 20 30
// 40
// Sample Output 0

// 2
// -1


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    int T, i;
    scanf("%d",&T);
    for(;T>0;T--) 
        {
           int n;
           scanf("%d", &n);
           int N[n];
        int K;
        
          
          for(i=0;i<n;i++) 
              {
                 scanf("%d", &N[i]);
              }
        scanf("%d", &K);
           for(i=0;i<n;i++) 
               {
                 if(N[i]>=K) 
                     {
                        break;
                     }
            
               }
        if(i<n) 
        printf("%d\n", i) ;
        
        else 
            printf("-1\n") ;
        
       
              
        }
    
    return 0;
}
