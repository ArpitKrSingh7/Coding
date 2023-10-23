// An array of size N is given to you. You have to check if there exists an index i such that, S(0,i-1)=S(i+1,N-1), where S(x,y) is the sum of array elements from index x to index y. Note:i>0 and i should be less than N-1.If no partition can be found return -1

// Can you complete this challenge without using nested loops?i.e by using two seperate single loops? Hint:(How can you effectively use S(0,N-1) i.e sum of all array elements to your advantage?

// Input Format

// First line is an integer N indicating the size of the array Second line consists of N space seperated integers representing the array elements

// Constraints

// 100
// 1000
// Output Format

// For each testcase, print on new line the index of element if found, else print -1.

// Sample Input 0

// 6
// 1 3 -6 4 0 -2
// Sample Output 0

// 3
// Explanation 0

// Take i=3, array[0]+array[1]+array[2]=1+3-6=-2. array[4]+array[5]= 0-2 =-2

// Sample Input 1

// 3
// 2 2 2
// Sample Output 1

// 1
// Explanation 1

// Take i=1, 2=2


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,i,sum=0,sum1=0,sum2=0,b,c;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        sum=sum + a[i];
    }
    
    for(i=0;i<N;i++)
    {
        sum1 = sum1 + a[i];
        if(sum1 == (float)(sum-a[i+1])/2)
        {
            b=i+1;
            break;
        }
    }
    
    for(i=N-1;i>0;i--)
    {
        sum2 = sum2 + a[i];
        if(sum2 == (float)(sum-a[i-1])/2)
        {
            c=i-1;
            break;
        }
    }

    if(c==b)
    {
        printf("%d\n",c);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
