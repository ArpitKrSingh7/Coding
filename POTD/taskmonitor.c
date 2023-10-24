// Sheldon Cooper writes a programme to finish his pending tasks. Each task has got some weightage(a positive integer greater than zero). He creates a machine which can atmost complete W amount of work at each sitting. If the machine cannot complete the work it takes the task and puts it at the last, and starts doing the next work.

// Given an integer array nums and the integer W, return the number of rounds required to complete the entire work assigned by Sheldon Cooper.

// You should not use any inbuilt-function to remove/insert an element Follow up:Can you come up with a solution just by traversing the array nums once?

// Input Format

// First line is an integer N Second line consists of N space seperated integers which are elements of the integer array nums Third line is the integer W

// Constraints

// 1<=N<=100 1<=array.value(),W<=10^6

// Output Format

// An integer N

// Sample Input 0

// 6
// 1200 1000 1500 100 150 1000
// 500
// Sample Output 0

// 3
// Explanation 0

// 1st round: a) 1000 1500 100 150 1000 700 b) 1500 100 150 1000 700 500 c) 100 150 1000 700 500 1000 d) 150 1000 700 500 1000 e) 1000 700 500 1000 f) 700 500 1000 500

// 2nd round: a) 500 1000 500 200 b) 1000 500 200 c) 500 200 500 d) 200 500

// 3rd round: All tasks complete

// Sample Input 1

// 3
// 100 200 300
// 1000
// Sample Output 1

// 1
// Explanation 1

// All tasks are completed in the first round



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,j,W,t=0,m=0;
    scanf("%d",&n);
    int N[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&N[i]);
    }
    
    scanf("%d",&W);
    
    
    
while(t!=n)

{    
    for(i=0;i<n;i++)
    {
        
        if(N[i]>W)
        {
            N[i] = N[i] - W;
        }
        
        else 
        {
            N[i]=0;
        }
        
    }
    
    for(j=0;j<n;j++)
      {
          if(N[j]==0)
          {
              t++;
          }
      }
        
        m++;
        if(t==n)
        {
            break;
        }
        
        
        
        t=0;
    
}    
    
    printf("%d",m);
    
    
    
    return 0;
}
