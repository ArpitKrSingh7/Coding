// You have a sorted array of N numbers, and your goal is to determine whether a given element K is present in the array. Write a program to efficiently identify the existence of K in the sorted array.
// Try to find an optimized solution.
// Input Format

// The first line of input contains a single integer T, denoting the number of test cases.
// The first line of each test case contains an integer N denoting the number of elements in the array.
// The second line of each test case contains N space-separated integers denoting the elements of the array.Note that they are in sorted order.
// The third line of each test case contains an integer K.
// Constraints

// .
// .
// Output Format

// For each test case , output on a new line 1 if the element K is present in the array else ouput 0.
// Sample Input 0

// 1
// 5
// 1 2 3 4 5
// 3
// Sample Output 0

// 1
// Explanation 0

// Since the element 3 is present in the given array of integers , output is 1.
// Submissions: 28
// Max Score: 10
// Difficulty: Medium
// Rate This Challenge:

    
// More
 



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    int T;
    scanf("%d", &T);
    while(T--)
        {
            int n;
        scanf("%d", &n);
        int N[n];
        for(int i=0;i<n;i++) 
            {
                scanf("%d", &N[i]);
            }
        int k;
        scanf("%d", &k);
       int m=n-1,l=0,h=0;
       int mid;
          
        while(l<=m) 
            {
            mid = l + (m-l)/2 ;
            if(N[mid]==k)
                {
                h++;
                break;
                }
                if(N[mid]>k)
                    {
                        m=mid-1;
                    }
                else if(N[mid]<k) 
                    {
                        l=mid+1;
                    }
            
            }
       if(h==0) 
        printf("0\n");
        else
           printf("1\n");
        
        }
    return 0;
}


