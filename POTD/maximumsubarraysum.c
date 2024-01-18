// Given an array of integers return the maximum subarray sum

// Do research on Kadane's Algorithm

// Input Format

// Array size Array elements

// Constraints

// -20000<=array.values<=20000

// Output Format

// An integer denoting the maximum subarray sum

// Sample Input 0

// 5
// -2 6 -9 4 5
// Sample Output 0

// 9
// Explanation 0

// [4,5] is the subarray with the maximum sum,i.e 9

// Submissions: 29
// Max Score: 10
// Difficulty: Medium
// Rate This Challenge:

    
// More
 

 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,max=-1000;
    scanf("%d", &n);
    int N[n];
    
    for(int i=0;i<n;i++) 
        {
             scanf("%d", &N[i]);
        }
    
    for(int i=0;i<n;i++) 
        {
        int sum=0;
            for(int j=i;j<n;j++) 
                {
                    sum =  sum+N[j];
                if(max<sum) 
                    {
                       max=sum;
                    }
                }
        }
    printf("%d", max);
    return 0;
}

