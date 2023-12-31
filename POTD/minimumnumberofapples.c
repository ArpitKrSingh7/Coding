// Young Sheldon decides to simulate a science experiment. He has N piles of apples each having certain amount of apples. He wants to complete eating all the apple piles within T hours(less than or equal to T hours). He wants to fix an integer k, where k is the number of apples he can eat per hour. If the pile has less than k apples, he completes eating the pile of apples and doesnt eat for the remaining hour,i.e he can complete eating only one pile of apple per hour.

// Return the minimum value of k for which Young Sheldon can complete eating all the piles of apples.

// Follow up: If you solved the above problem, do some research on Binary Search and try to come up with a more optimized solution.

// Input Format

// An integer N denoting the number of piles of apples

// N space seperated integers denoting the number of apples in each pile

// The integer T

// Constraints

// 1<=N<=10000 N<=T<10000

// Output Format

// The integer k

// Sample Input 0

// 4
// 3 6 7 11
// 8
// Sample Output 0

// 4
// Explanation 0

// Let k=4, he can complete the first pile in 1 hour, second pile in 2hrs, 3rd pile in 2hrs, and 4th pile in 3hrs. Total time=8hrs

// No k less than 4 allows him to complete eating all of the 4 piles of apples

// Sample Input 1

// 5
// 30 11 23 4 20
// 5
// Sample Output 1

// 30
// Explanation 1

// If k=30, he can complete each pile in exactly 1 hour, i.e total time=5 hours. Any k less than 5 does not let him complete all the 5 piles of apples




#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main() {

int n,i;

    scanf("%d", &n);

    

    int N[n];

    

    for(i=0;i<n;i++) 

        {

            scanf("%d", &N[i]);

        }

    

   int k,x=0,j;

    i=1;

    scanf("%d", &k);

    if(k<n) 

        {

            return 0;

        }

   

    for(i=1;;i++) 

        {

            x=0;

            for(j=0;j<n;j++)

                {

                

                if(N[j]==0) 

                    {

                        continue;

                    }

                

                   else if(N[j]%i==0) 

                       {

                            x = x + (N[j]/i);

                       }

                       

                       else

                        x = x + (N[j]/i) + 1;

                }

        

        if(x<=k) 

            {

                break;

            }

     

        }

    

    printf("%d",i);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    return 0;

}