// You are given two strings s and l. You have to check if it is possible to convert string s into string t following the below mentioned requirements:
// Everytime you change a character it creates a mapping that is definite, i.e if I change X->Y no other character Z can be changed to Y and all subsequent occurences of X should be changed to Y.
// If such a conversion is possible return the number of such unique mappings needed else return -1.

// Follow up: i) Python users try making use of a dictionary
// ii) C/C++ users, since the constraint says we are going to use only lowercase English Alphabets think of a way to manipulate arrays to your use. Boolean data types may be of use.
// Input Format

// Length of strings s and t(they are of equal length)
// String s
// String t
// Constraints

// 1<=s.length() == t.length() <=100
// s and t consists of lowercase English Alphabets only
// Output Format

// Number of unique mappings if possible, else return -1
// Sample Input 0

// 5
// paper
// title
// Sample Output 0

// 4
// Explanation 0

// Consider this mapping:
// p->t, a->i, e->l, r->e. An unique mapping exists.
// Sample Input 1

// 3
// foo
// bar
// Sample Output 1

// -1
// Explanation 1

// Since o cannot be mapped to both a and r, no unique mapping exists, thus the result is -1


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    int n;
    scanf("%d",&n);
    char c[n],I[n];
    scanf("%s %s", c, I);
    
    for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                {
                    if(c[i]==c[j]) 
                        {
                           if(I[i]!=I[j])
                               {
                                   printf("-1");
                                  return 0;
                               }
                        }
                }
        
        
        }
    
    
    for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                {
                    if(I[i]==I[j]) 
                        {
                           if(c[i]!=c[j])
                               {
                                   printf("-1");
                                  return 0;
                               }
                        }
                }
        
        
        }
   int x=n;
    
    for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                {
                    if(c[i]==c[j])
                        {
                        --x;
                        break;
                    }
                    
                
                }
        
        
        }
    printf("%d", x);
    
    
    return 0;
}
