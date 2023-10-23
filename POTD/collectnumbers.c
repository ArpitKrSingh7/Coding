// You are given an integer array of size n containing every integer in the range 1-n exactly once. Your task is to collect the integers from 1 to n in increasing order. On each round, you go through the array from left to right and collect as many numbers as possible. Return the minimum number of rounds in which you will be able to collect all the numbers.

// Input Format

// First line is an integer denoting the size of the array Second line consists of N space seperated integers

// Constraints

// 100

// Output Format

// An integer

// Sample Input 0

// 5
// 4 2 5 1 3
// Sample Output 0

// 3
// Explanation 0

// Take 1 in the first round Take 2,3 in the second round Take 4,5 in the third round

// Sample Input 1

// 3
// 3 2 1
// Sample Output 1

// 3
// Explanation 1

// 1 in 1st round 2 in 2nd round 3 in 3rd round




#include <stdio.h>
int main()
{
    int N,I=1,j=0,k=0;
    scanf("%d",&N);
    int a[N],b[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        b[i]=0;
    }
    while(1)
    {
        for(int i=0;i<N;i++)
        {
            if(a[i]==I)
            {
                a[i]=0;
                b[j]=I;
                j++;
                I++;
            }
        }
        k++;
        int c = 0;
        for(int i=0;i<N;i++)
        {
            if(b[i]==i+1)
            {
                c++;
            }
        }
        if(c==N)
        {
            break;
        }
    }
    printf("%d",k);
    return 0;

}