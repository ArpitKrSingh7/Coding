// Given an array A of N elements and a integer K the task is to find Kth smallest element in the given array.It is given that all the elements in the array are distinct.
// Input Format

// The first line of input contains a single integer T, denoting the number of test cases.
// The first line of each test case contains an integer N denoting the number of elements in the array.
// The second line of each test case contains N distinct space-separated integers denoting the elements of the array. Note that they are not necessarily given in sorted order.
// The third line of each test case contains an integer K.
// Constraints

// .
// .
// .
// Output Format

// For each test case, output on a new line the Kth smallest element.
// Sample Input 0

// 1
// 5
// 32 1 4 2 51
// 2
// Sample Output 0

// 2
// Explanation 0

// K=2 , So the second smallest element in the given array of integers is 2.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
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
        for(int i=0;i<n;i++) 
            {
                for(int j=i;j<n;j++)
                    {
                        int temp;
                    if(N[i]>N[j]) 
                        {
                        temp = N[i];
                        N[i]=N[j];
                        N[j]=temp;
                        }
                    }
            }
       
        
        printf("%d\n",N[k-1]);
        
     }
     
        
    return 0;
}
