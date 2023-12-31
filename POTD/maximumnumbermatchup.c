// A group of friends were playing a game. The game was simple: each person would write down a number on a piece of paper, and the person with the highest number would win.
// After everyone had written down their numbers, they realized that several people had written down the same number. They needed to determine how many people had written down the highest number.
// Input Format

// The first line of input contains a single integer T, denoting the number of test cases.
// The first line of each test case contains an integer N denoting the number of friends playing the game.
// The second line of each test case contains N distinct space-separated integers denoting the number written by each player. Note that they are not necessarily given in sorted order.
// Constraints

// .
// Output Format

// For each test case, output on a new line the number of people who had written the highest number.
// Sample Input 0

// 1
// 4
// 3 2 1 3
// Sample Output 0

// 2
// Explanation 0

// The maximum number written is 3 and 2 people have written 3.So the output would be 2.


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
            int n;
        scanf("%d", &n);
        
        int N[n];
        int i, max=-100, t=0;
        for(i=0;i<n;i++) 
            {
                scanf("%d", &N[i]);
            if(max<N[i]) 
                {
                    max=N[i];
                t=0;
                }
            if(max==N[i]) 
                 t++;
                
            }
        
       
        
        printf("%d\n", t);
              
        }
    
           
    return 0;
}
