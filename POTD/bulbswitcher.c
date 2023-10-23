// Sam decides to play a game with lightbulbs. He takes N light bulbs and arranges them in succession. Initially all the bulbs are turned off. In the first iteration Sam turns on all the bulbs. In the second iteration he turns off every second bulb. In the third iteration he toggles (if the bulb is on, he turns it off and if the bulb is off, he turns it on) every third bulb. For the Nth round Sam toggles the last bulb (i.e., the Nth bulb).

// Return the count of bulbs that are turned ON after Sam’s game. **(Hint:1 represents ON and 0 represents OFF) If you solved the above problem, can you people come up with a one-line solution? (Hint: Use the knowledge of factors in Mathematics) **

// Input Format

// An integer N

// Constraints

// 0<=N<=10000

// Output Format

// An integer

// Sample Input 0

// 3
// Sample Output 0

// 1
// Sample Input 1

// 0
// Sample Output 1

// 0





#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,i,d=0;
    scanf("%d", &a);
    int A[a];
    for(i=0;i<a;i++) 
        {
           A[i]=0;
        }
    
for(i=0;i<a;i++) 
{
        
        for (int j=i;j<a;j=j+i+1) 
     {
            
           if(A[j]==0) 
               {
                  A[j]=1;
               }
            
           else
               {
                  A[j]=0;
               }
     }

}
    
    for(i=0;i<a;i++) 
        {
           if(A[i]==1) 
               {
                  d++;
               }
        
        }
    
    
    printf("%d", d);
    
    
    return 0;
}
