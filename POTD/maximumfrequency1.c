// Given a string s return the length of the longest substring of s which has atmost 2 unique characters and whose size is strictly greater than ceil(1/4 of the size of the string s). If no such string exists return 0.

// Follow up: Instead of generating all substrings of the string s, do research on the concept "sliding window" and try to understand how it works and how it can be applied to this particular problem.

// Input Format

// String s

// Constraints

// 1<=s.length()<=100 s contains lowercase English Alphabets only

// Output Format

// Length of the String satisfying the condition or if no such string exists 0.

// Sample Input 0

// aabbcccd
// Sample Output 0

// 5
// Explanation 0

// We need to find a substring which has a size greater than 2. bbccc is the longest string which satisifes the problem requirement. cccd also satisfy the requirements of the problem but we want a substring of maximum length.

// Sample Input 1

// abtigbhf
// Sample Output 1

// 0
// Explanation 1

// We need to find a substring of length greater than 2. No substring of length>2 satisifes the problem requirement

// Sample Input 2

// xxyzyaa
// Sample Output 2

// 3
// Explanation 2

// Substring.length>7/4>1.75>2 We need to find a string of length atleast 3. xxy,yzy,yaa are few of the possible answers



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int strlent(char c[]) 
    {
    int i=0;
        while(c[i]!='\0')
            {
               i++;
            }
    return i;
    }

int noc(char input[]) 
    {
       int i, j, count=0;
    int n = strlen(input);
     for(i=0; i<n; i++){
        int flag=0;
        for(j=0; j<i; j++){
            if(input[i]==input[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        } 
    }
    return count;
    }
    

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    char c[100],d[100],max=0,k, m=0;
    scanf("%s", c);
    int x = strlen(c);
    
    
    for(int i=0;i<x;i++) 
        {
            for(int j=i+1;j<x;j++) 
                {
                    for(k=0;k<=j-i;k++) 
                        {
                           
                               d[k]=c[k+i];
                              
                        }
                    d[k]='\0';
                    int p = noc(d);
                        
                m=strlen(d);
                
                
                if(p==2) 
                    {
                    
             
                    if(max<m) 
                        {
                            max=m;
                     
                
                        }
                    
                    }
                else if(p>2) 
                    {
                    
                    break;
                    }
                m=0;
                
                }
        }
    
    if(max<=(x/4)) 
        {
            printf("0");
        }
    else
       printf("%d", max);
    
    return 0;
}


