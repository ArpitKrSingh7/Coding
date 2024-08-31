// You have n coins with positive integer values. What is the smallest sum you cannot create using a subset of the coins?

// Input Format

// The first input line has an integer n: the number of coins.
// The second line has n integers x1,x2...,xn: the value of each coin.
// Constraints

// 1 <= n <= 2*10^5
// 1 <= xi <= 10^9
// Output Format

// Print one integer: the smallest coin sum.

// Sample Input 0

// 5
// 2 9 1 2 7
// Sample Output 0

// 6
// Explanation 0

// With coin 1: You can form the sum 1.
// With coin 2: You can form sums 1 (already covered) and 2.
// With the second coin 2: You can now form sums 1, 2, and 3 (by combining the two 2 coins and the 1 coin).
// With coin 7: You can form sums 1, 2, 3, and 7 (adding 7 to previously possible sums).
// With coin 9: You can now form sums 1, 2, 3, 7, 9, and combinations like 10 (by adding 9 to the previously possible sums).
// All sums from 1 to 5 can be created.
// The smallest sum that cannot be formed with any combination of the given coins is 6.
// Sample Input 1

// 1
// 1
// Sample Output 1

// 2
// Explanation 1

// There is only one coin with the value 1.
// The only possible sum that can be created is 1.
// Therefore, the smallest positive integer that cannot be created is 2.


#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    int n;

    scanf("%d",&n);

    int N[n];

    for(int i = 0;i<n;i++)

        {

            scanf("%d",&N[i]);

        }

    int sum = 0;

    int P[1000];

    int k = 0;

    int totalSubsets = pow(2, n);

    

    for (int i = 0; i < totalSubsets; i++) {

        

        // Print the elements of the current subset

        for (int j = 0; j < n; j++) {

       

            if (i & (1 << j)) {

                sum = sum + N[j];

                P[k++]=sum;

               

            }

        }

      sum = 0;

    }

    int i = 1;

    int flag;

while(1)

    {

        for(int p = 0 ; p<k;p++)

            {

                if(P[p] == i)

                    {

                        flag = 1;

                        break;

                    }

            }

    if(flag == 0)

        {

            printf("%d",i);

        return 0;

        }

    flag = 0;

    i++;

    }

    

    

        

            

   

    return 0;

}