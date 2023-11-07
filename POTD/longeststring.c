// Rachel is a musician and wants to compose a song for her next concert. She takes a string(an array of characters) and puts each character of her song in the string. She wants to find the length of the longest continguous substring which has only unique characters. Return the length of such a substring in Rachel's song sequence

// Input Format

// First line consists of a string(an array of lowercase alphabets)

// Constraints

// 1<=string.length()<=100

// Output Format

// An integer denoting the length of the longest consecutive substring with only unique characters

// Sample Input 0

// abcadeff
// Sample Output 0

// 6
// Explanation 0

// bcadef is the longest substring with no repeating characters

// Sample Input 1

// aaaa
// Sample Output 1

// 1
// Explanation 1

// a is the longest substring without repeating characters


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   char c[100];
    scanf("%s", c);
    int x=strlen(c),I,j,a=0,A[x],max=0,m=x;

   for(j=0;j<x;j++) 
{
    for(I=j;I<m;I++) 
        {
        for (int k=1;k<m-I;k++) 
            {
              if(c[I]==c[I+k]) 
                  {
                  m=I+k;
                    break;
                  }
                     
             
            }
          if(1) 
         {
        
            if(c[j]!=c[I]) 
                {
                     a++;
                }
            if(c[j]==c[I]&&I!=j) 
                {
         
                break;
                }
              else if(c[j]==c[I] && I==j) 
                  a++;
        }
        else
            {
           a++;
            break;
        }
        }
  A[j]=a;
       a=0;
       m=x;
       
  
}
    
    for(I=0; I<x; I++) 
        {
          if(max<=A[I]) 
              {
                  max=A[I]; 
              }
        }
    
    
    printf("%d", max) ; 
    
    return 0;
}
