// You are given a string containing alphanumeric characters. Your task is to write a program to count the number of numerical digits present in the string.
// Input Format

// The first line of input contains a single integer T, denoting the number of test cases.
// The first line of each test case contains an integer L denoting the length of the string.
// The second line of each test case contains a string with L characters.
// Constraints

// .
// .
// Output Format

// For each test case, output on a new line the number of numeric digits in the string.
// Sample Input 0

// 1
// 14
// Hello123World3
// Sample Output 0

// 4
// Explanation 0

// The number of numeric digits in the given string is 4.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    int T;
    scanf("%d", &T);
    while(T--) 
        {
            int n,k=0;
        scanf("%d", &n);
        char c[n];
        scanf("%s",c);
        
        for(int i=0;i<n;i++) 
            {
                if(c[i]>=47 && c[i]<=57)
                    {
                        k++;
                    }
            }
        printf("%d\n",k);
        }
    return 0;
}
