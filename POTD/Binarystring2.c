// Given two strings s1 & s2 the binary representation of two positive integers, retuen their sum as a binary string. The first line consists of the augend string. Output should be printed in a new line.

// Input Format

// Each testcase consists 2 lines of input - First line denotes the first string - Second line denotes the second string

// Constraints

// 1 <= string length <= 100

// Output Format

// For each testcase, print the resultant string on a new line.

// Sample Input 0

// 100
// 010
// Sample Output 0

// 110
// Sample Input 1

// 101
// 11
// Sample Output 1

// 1000




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
int i=0;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    char s1[100] , s2[100];
    int b=0,c=0,k=0,m=0,h=0; 
    scanf("%s", s1);
    scanf("%s", s2);
    while(s1[i] != '\0') 
        {
            b++;
        ++i;
        }
    i=0;
    while(s2[i] != '\0') 
        {
            c++;
        ++i;
        }
    char s3[100];
  for(i=0;i<b;i++) 
      {
          if(s1[i]=='1') 
              {
                  k = k+pow(2,b-1-i);
              }
          
      }
    
    for(i=0;i<c;i++) 
      {
          if(s2[i]=='1') 
              {
                  m = m+pow(2,c-1-i) ; 
              }
          
      }
    
    h=k+m;
    i=0;
    while (h!=0) 
        {
            if(h%2==0) 
                {
                    s3[i]='0';
                }
            else
                {
                    s3[i]='1';
                }
        
        h=h/2;
        i++;
        }
    s3[i]='\0' ;
    i=0;
    int u;
  while(s3[i]!='\0') 
        {
            u++;
                i++;
            }
        
        for(i=u-1; i>=0;i--) 
        {
            printf("%c", s3[i]);
            }
        
        
   
    
    
    return 0;
}
