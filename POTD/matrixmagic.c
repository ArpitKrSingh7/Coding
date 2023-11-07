// Given a NxN matrix,return YES if every ith row is same to the corresponding ith column. Else return NO.

// Input Format

// The first line consists of the value of N Second line consists of N^2 matrix elements

// Constraints

// 1<=N<=10 -10000<=matrix.element()<=10000

// Output Format

// For each test case print YES if the given matrix is a magic square else print NO.
// NOTE : Output is case sensitive
// Sample Input 0

// 3
// 1 2 3
// 2 -5 6
// 3 6 9
// Sample Output 0

// YES
// Explanation 0

// Row 1=column 1 Row2=column2 Row3=column 3


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, I, j,x=0,y=0,m=0;
    scanf("%d", &a) ;
    int A[a][a];
    for(I=0;I<a;I++) 
    {    
        for(j=0;j<a;j++) 
            {
                scanf("%d",&A[I][j]);
            
            }
   }     
    
    for(I=0;I<a;I++) 
        {
            for (j=0;j<a;j++,x++,y++) 
                {
                    if(A[I][x]==A[y][I])
                    {
                        m++;
                    }
                
                
                }
               
      
             y=0;
             x=0;
                
        
        
        }
    if(m==a*a) 
      printf("YES") ;
    else
       printf ("NO") ;

            
    return 0;
}

