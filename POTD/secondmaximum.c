// Given an integer array containing both positive and negative values, return the second distinct maximum number. If such a number does not exist, print not found

// Note: Do not use any inbuilt function. You should find the second distinct maximum,approach the problem carefully.

// Input Format

// Size of the array
// Array elements
// Constraints

// 1<=N<=100 -10000<=arr[i]<=10000

// Output Format

// Second distinct maximum if present else print not found

// Sample Input 0

// 6
// -6 -5 10 12 12 12
// Sample Output 0

// 10
// Explanation 0

// 10 is the second distinct maximum

// Sample Input 1

// 2
// -1 -1
// Sample Output 1

// not found
// Explanation 1

// Second distinct maximum is not found


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    int N[n];
    for(int i=0;i<n;i++) 
        {
      scanf("%d", &N[i]);
        
    }
    
    for(int i=0;i<n;i++) 
        {
            for(int j=i;j<n;j++) 
                {
                    if(N[i]>N[j]) 
                        {
                        int temp;
                        temp=N[i];
                        N[i]=N[j];
                        N[j]=temp;
                            
                        }
                }
        }
    for(int i=0;i<n;i++) 
        {
            if(N[i]==N[n-1]) 
            {
                if(i==0) 
                    {
                    printf("not found");
                    break;
                    }
                else
                    {
                    printf("%d",N[i-1]);
                    break;
                    }
            }
        }
    
    
      
    
    return 0;
}





