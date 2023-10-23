// Natasha is trying to count the maximum number of times a given character comes in a given array.That is, if an array is given, they should return the character C that repeats consecutively for maximum number of times. Help her to find it by writing a code.(Characters from 'a' to 'z' should only be comsidered).

// Input Format

// 1st line of input consists of an integer N denoting number of values in character array. 2nd contains N spaced characters that are in the array.

// Constraints

// .
// Output Format

// Print the character the returned character. NOTE : If the frequency of all characters is same,print -1

// Sample Input 0

// 8
// a a a a a a a b
// Sample Output 0

// a
// Explanation 0

// Character 'a' is most repeated in the given input sequence.

// Sample Input 1

// 8
// a b b a a a b a
// Sample Output 1

// a
// Explanation 1

// Character 'a' repeated most in the given sequence.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,i,x=1,j=0,d=0;
    char c='\0';
    scanf("%d",&a);
    char C[a];
    int A[a];
    int max = 0;
    for(i=0;i<a;i++)
    {
        scanf(" %c",&C[i]);
    }
    for(i=0;i<a;i++)
    {
        if(C[i]==C[i+1])
        {
            x++;
        }
        else
        {
            A[j]=x;
            j++;
            x=1;
        }
        if(max<x)
        {
            max=x;
            c=C[i];
        }
    }
for(i=0;i<j;i++)
{
    if(max == A[i])
    {
        d++;
    }
    if(d>1)
    {
        printf("-1");
        break;
    }
}
if(d==1)
{
    printf("%c",c);
}
 

    
    
    return 0;
}
