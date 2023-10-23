// Alisha loved to play word games. She had a hobby of creating new puzzles and experimenting with different letters. One day, she came up with a game where players had to guess if two words were anagrams of each other. However, when she tried to play the game with her friends, they found it too difficult. Now, Alice wants to know how to write a code to check if two strings are anagrams of each other in the simplest way possible.
// An anagram is a word or phrase formed by rearranging the letters of another word or phrase.
// For example, the word “listen” can be rearranged to form the word “silent”, which is an anagram of “listen”. HINT: Maintain an array for alphabets.
// Input Format

// The first line consists of a single integer T denoting the number of test cases.
// Each test case contains two lines of input
// The first line is the input for string 1
// The second line is the input for string 2 NOTE: The input strings do not have space between the characters and uppercase and lowercase letters are not the same.
// Constraints

// .
// Output Format

// For each test case print true on a new line if the two strings are anagrams of each other else print false. The output is case sensitive.

// Sample Input 0

// 3
// listen
// silent
// hello
// world
// Listen
// Silent
// Sample Output 0

// true
// false
// false




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T;
    scanf("%d",&T);
    for(;T>0;T--)
    {
        
        int c=0,d=0,e,f,i,j,k=0,l=0;
        
        char a[50],b[50];
        scanf("%s",a);
        scanf("%s",b);
        
        e=strlen(a);
        f=strlen(b);

        if(a==b)
        {
            printf("true\n");
        }
        
        else
        {
          if(e==f)
         {
                for(i=0;i<e;i++)
            {
                for(j=0;j<f;j++)
                {
                    if(a[i]==b[j])
                    {
                        c++;
                    }
                    if(c>1)
                    {
                        c=1;
                    }
                        
                }
                    if(c==0)
                    {
                        break;
                    }
                
                d=d + c; 
                
               }
              
                  for(i=0;i<e;i++)
            {
                for(j=0;j<f;j++)
                {
                    if(a[j]==b[i])
                    {
                        l++;
                    }
                    if(l>1)
                    {
                        l=1;
                    }
                    
                     
                }
                
                k=k + l; 
                      if(l==0)
                      {
                          break;
                      }
                
               }
              
              
              
              if(l==0 && c==0)
              {
                  printf("false\n");
              }
              
              else if(d==k)
              {
                  printf("true\n");
              }
                  
              
              else
                  printf("false\n");
 
           }
            
            else
                printf("false\n");
            
        }
        
        
        
        
    }
    
    return 0;
}
