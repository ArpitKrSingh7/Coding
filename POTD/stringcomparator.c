// You are given two strings X and Y. Your task is to check if Y is present in X or not. Return true if Y is present in X, else return false.

// Input Format

// First line is string X Second line is string Y

// Constraints

// 1<=Y.length()<=X.length()<=100 Characters in string X and Y can be either uppercase or lowercase.

// Output Format

// true/false (case sensitive)

// Sample Input 0

// haystack
// stack
// Sample Output 0

// true
// Explanation 0

// stack is present in haystack

// Sample Input 1

// morning
// morm
// Sample Output 1

// false
// Explanation 1

// morm is not present in morning


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    char a[100],b[100];
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    
    int x,y,i,j,c=0,d=0;
    x=strlen(a);
    y=strlen(b);
    
    for(i=0;i<y;i++)
    {
        for(j=d;j<x;j++)
        {
            if(b[i]==a[j])
            {
                c++;
                d=j+1;
                break;
            }
        }
    }
    
    if(c>=y)
    {
        printf("true");
    }
    
    else
    {
        printf("false");
    }
    

    
    return 0;
}