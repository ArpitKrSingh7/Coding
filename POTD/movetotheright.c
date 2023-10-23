// Ron was playing a game with pebbles where he takes N pebbles and arranges then consecutively.

// Each pebble has some value(positive or negative).

// He has to shift this arrangement of pebbles to the right but the constraint is Ron shouldnt use any extra space(i.e he should just rearrange the pebbles within their arrangement)

// After doing it some K number of times, he has to count the number of inversion pairs(i.e for ipebble(j).value)

// Given an array of integers representing the pebble values and an integer K representing the number of times the entire arrangement has to be shifted right, return the number of inversion pairs in the final arrangement No extra space(only one integer array to be used) Follow up:If you were able to solve the above problem, did your logic to move all the elements to the right k times involve nested loops? Can you move all the elements of the array to the right k times just by 3 single loops?

// Input Format

// First line is a integer N denoting the size of the array Second line consists of N space seperated integers Third line is the integer K

// Constraints

// 1<=N,k<=1000 -10000<=array.value()<=10000

// Output Format

// An integer

// Sample Input 0

// 5
// 1 2 3 4 5
// 1
// Sample Output 0

// 4
// Explanation 0

// Moving the pebbles one step to the right creates: 5 1 2 3 4 We say the inversion pairs are (5,1),(5,2),(5,3),(5,4). Therefore the output is 4

// Sample Input 1

// 3
// -19 6 12
// 2
// Sample Output 1

// 2
// Explanation 1

// Moving pebbles to the right once produces: 12 -19 6 Moving pebbles to the right the second time produces: 6 12 -19 The inversion pairs are: (6,-19),(12,-19) Therefore the output is: 2



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,i,j,k,x=0,z=0;
    scanf("%d",&a);
    
    int A[a];
    for (i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
    }
    
    scanf("%d",&k);
    int y=k;
    
    
    while(k>0)
    {
        j=A[a-1];
        for(i=0;i<a-1;i++)
        {
            A[a-1-i]=A[a-2-i];
        }
        A[0]=j;
        k--;
    }
    
    for(i=0;i<y;i++)
    {
        for(j=0;j<a-z;j++)
        {
            if(A[i]>A[j+z])
            {
                x++;
            }
        }
        z++;
    }
    
    printf("%d",x);
    
    
    return 0;
}
