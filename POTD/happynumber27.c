// Mayank is given a number N asked to check if it a Happy Number or not.Here are the rules for a happy number: 1. Replace the number by the sum of the squares of its digits. 2. Repeat the process until the number becomes 1 or the process enters a cycle. If the cycle repeats, return false. If the number reaches 1 return true.

// Input Format

// Input consists of a single integer representing N.

// Constraints

// 1 <= N <= 100000

// Output Format

// Print "true" or "false". - Note : Output is case sensitive.

// Sample Input 0

// 19
// Sample Output 0

// true
// Explanation 0

// 1^2 + 9^2 = 1+81 = 82
// 8^2 + 2^2 = 64+4 = 68
// 6^2 + 8^2 = 36+64 = 100
// 1^2 + 0^2 + 0^2 = 1
// No cycle formed & finally resulted 1.
// Sample Input 1

// 2
// Sample Output 1

// false
// Explanation 1

// 22 = 4
// 42 = 16
// 12 + 62 = 37
// 32 + 72 = 58
// 52 + 82 = 89
// 82 + 92 = 145
// 12 +42 + 52 = 42
// 42 + 22 = 20
// 22 = 4
// Cycle is repeating, not a happy number.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int happy(int n) 
    {
    int x=0;
        while(n!=0)
            {
                x = x+pow(n%10,2);
                n=n/10;
            }
    
    return x;
    }

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    
    int i;
    int N[100];
    for(i=0;;i++) 
        {
            N[i]= happy(n);
            n=N[i];
        if(N[i]==1) 
            {
                 printf("true");
                return 0;
            }
        
        if(((N[i]==N[0])&&i>=1)||((N[i]==N[1])&&i>=2)||((N[i]==N[2])&&i>=3)||((N[i]==N[3])&&i>=4)||((N[i]==N[4])&&i>=5)||((N[i]==N[5])&&i>=6)) 
            {
                printf("false");
                return 0;
            }
          
        }
    
    return 0;
}

