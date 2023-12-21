// Given an array of n integers , write a program that prints True if there is a triplet (a , b, c) from the array (where a,b,c might be on different indices in the array) that satisfies a2 + b2 = c2 , Otherwise print False.
// Input Format

// The first line consists of a single integer T denoting the number of test cases.
// Each test case contains multiple lines of input
// The first line consists of a single integer N denoting the number of elements in the array.
// The next line consists of N space separated integers.
// Constraints

// .
// .
// Output Format

// For each test case on a new line Print True if there exists a triplet else print False.
// Output is Case sensitive.
// Sample Input 0

// 2
// 5
// 1 2 3 4 5
// 6
// 13 10 5 3 12 1
// Sample Output 0

// True
// True
// Explanation 0

// (3,4,5) is a pythagorean triplet satisfying a2+b2=c2
// (5,12,13) is a pythagorean triplet satisfying a2+b2=c2




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T, i, j;
    scanf("%d", &T);
    
    while(T--) 
        {
            int n, m=0;
        scanf ("%d", &n);
        
        int N[n];
        for(i=0;i<n;i++) 
            {
                scanf("%d", &N[i]);
            }
        
        for(i=0;i<n;i++) 
            {
               for(j=0;j<n;j++) 
                   {
                       for(int k=0;k<n;k++) 
                           {
                               if(pow(N[i],2) == pow(N[j], 2) + pow(N[k], 2)) 
                                   {
                                       

                                   m++;
                        
                                   }
                           
                                   
                           }
                   }
            }
        if (m==0) 
            {
                printf("False\n");
            }
        
        else 
            printf("True\n") ;
        
          
        }
    return 0;
}
