// Amelia embarked on the "PrimePuzzle Quest" determined to solve the mystery of an ancient numerical riddle. Her task was to find the prime factors of the given number.
// Help Amelia by writing a program to find the prime factors of the given number N
// Try to find a optimized solution.
// Input Format

// The first line of input contains a single integer T, denoting the number of test cases.
// The first line of each test case contains an integer N .
// Constraints

// .
// .
// Output Format

// For each test case , output on a new line all the prime factors of the number separated by a space.
// The output should be in increasing order .
// Sample Input 0

// 1
// 12
// Sample Output 0

// 2 3
// Explanation 0

// The prime factors of 12 are 2 and 3.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int checkprime(int i)
    {
        for(int n=2;n<i;n++) 
            {
                if(i%n==0)
                    {
                      return 0;
                    }
            }
    return 1;
    }
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T, x;
    scanf("%d",&T);
    while(T--) 
        {
            int n;
        scanf("%d", &n);
        for(int i=2;i<=n;i++) 
            {
            if(n%i==0) 
                {
                 x = checkprime(i);
                if(x==1) 
                    {
                        printf("%d ",i);
                    }
                }
            }
            printf("\n");
        }
    return 0;
}

