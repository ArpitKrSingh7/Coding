// Given an array of integers return true if it is possible to find atleast one grouping of size atleast 2 of elements in the array such that the bitwise or of all elements in the group have atleast one trailing zero in its binary representation. If no such grouping is present return false.

// Is it necessary to enumerate all groups of size atleast 2, if so there will be almost 2^n such groups. For n=10 it is 1024 groups. An optimized solution should be able to complete the problem in a single pass without any nested loops. Think how bitwise or works to come up with an optimized solution.

// Input Format

// Array size Array elements

// Constraints

// 2<=Array.size()<=10 1<=Array.value()<=100

// Output Format

// true/false case sensitive

// Sample Input 0

// 5
// 1 2 3 4 5
// Sample Output 0

// true
// Explanation 0

// Choose 2(010) and 4(100) whose bitwise or gives 110(6). There is one trailing zero in the binary representation of 6.

// Sample Input 1

// 5
// 1 3 5 7 9
// Sample Output 1

// false
// Explanation 1

// No grouping can be formed where the bitwise or of all the elements in the group has atleast one trailing zero in its binary representation




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int binary(int n)
    
    {
    int a[100];
        for(int i=0;n>0;i++)    

{    

a[i]=n%2;    

n=n/2;    

}    
    return a[0];
    }

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

 

    
int x,m=0;
    scanf("%d",&x);
    int X[x];
    for(int I=0;I<x;I++) 
        {
            scanf("%d", &X[I]);
        }

for(int i=0;i<x;i++) 
    {
        if(binary(X[i]) == 0) 
            {
              m++;
            }
    }
    
    if(m>=2) 
        {
            printf("true");
        }
    else
       printf("false");


    return 0;
}
