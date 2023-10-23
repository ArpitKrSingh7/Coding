// There is a Treasure hunt event going on in our college. You and your friend form a team and start hunting for the treasure. To get the key to the final Treasure, you have to crack a given code.

// You will be given an integer X in decimal representation(base 10). You have to take the digits of the number and raise it to powers of 8 and get the new number N.

// For example if number is 123, new number is, 3*8^0+2*8^1+1*8^2= 3+16+64=83.

// You have to return a character(a-z) from the number obtained above by following the steps given:

// a)if number obtained from the previous step is 0 return 'a', if it is 1 return 'b'... if it is 25 return 'z'.

// b)If number is greater than 26, find Y=N%26, and do step a) for Y

// Input Format

// N=123

// Constraints

// 0 <= N <= 15000

// Output Format

// output = f

// Sample Input 0

// 100
// Sample Output 0

// m

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int X,b,N=0,i=0;
    scanf("%d",&X);
    while(X!=0)
    {
        b= X%10;
        N= N + b*pow(8,i);
        X=X/10;
        i++;
    }
for(char j='a'; j<=122;j++)
{
    if((j-N)== 97)
    {
        printf("%c",j);
        break;
    }
    else
    {      
        N=N%26;
    }
    if(N==0)
    {
        j=j-1;
    }
}
    
    return 0;
}
