// You are given an array of N integers,right rotate the array (shift one value to right) by one if key is 1 or left rotate array by one if key is 2. Print "invalid" if key is anything else.

// Input Format

// First line is an integer N denoting the size of integer array.
// Second line consists of N space seperated integers of the array.
// Third line is an integer value 'key'
// Constraints

// 1 <= array.size <= 1000

// Output Format

// Print rotated array if key is valid, else print "invalid".
// Sample Input 0

// 5
// 1 2 3 4 5
// 1
// Sample Output 0

// 5 1 2 3 4
// Explanation 0

// Key is 1 so right rotate.

// Sample Input 1

// 7
// 2 7 3 4 5 1 9
// 0
// Sample Output 1

// invalid
// Explanation 1

// Key is neither 1 nor 2, so invalid

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    int n;
    scanf("%d", &n);
    int N[n];
    for(int i=0;i<n;i++) 
        {
            scanf("%d",&N[i]);
        }
    int k;
    scanf("%d",&k);
    
    if(k!=1 && k!=2) 
        {
            printf("invalid");
        return 0;
        }
    
    else if(k==1) 
        {
              int temp;
 
            for(int i=n-1;i>0;i--) 
                {
                    temp = N[i-1];
                    N[i-1]=N[i];
                    N[i]=temp;
                }
        
        }
    
    else
        {
              int temp;
 
            for(int i=0;i<n-1;i++)

               
                {
                    temp = N[i+1];
                    N[i+1]=N[i];
                    N[i]=temp;
                }
        
        }
    for(int i=0;i<n;i++) 
        {
            printf("%d ",N[i]);
        }
    return 0;
}
