// A managerial company wants to organize and process the data available to it for further use. They take N data files, each having N data programms in it, that its my first file has N programms, my second file has N programms and the Nth file also has N programms.

// They have a seperate file which specifies N-1 Queries, to the data files.At each Query the kth minimum should be taken from each file and removed from the file(k is specified by the Query). This process has to be repeated N-1 time for all the N-1 queries. Your task is to help the managerial company print the remaining one programm in each file along with their original index position. If after all the queries are over and the remaining programm has a duplicate in its original file, print the index of its first occurence. Also assume no query will ask out of bound access.

// How do you store N keys each having N keys of their own?(Hint:Store N integers in an array and N arrays in _ )

// Input Format

// The integer N N data programms containing N data files as N integer arrays The array specifying (N-1) queries

// Constraints

// 1<=N<=25 0<=file.program.value()<=100 1<=k<=N

// Output Format

// The remaining program and its original index in the data files for all N data files in N seperate lines

// Sample Input 0

// 4
// 6 13 2 8
// 9 6 6 10
// 15 100 6 99
// 13 18 17 76

// 3 2 1
// Sample Output 0

// 13 1
// 10 3
// 100 1
// 76 3
// Explanation 0

// First query asks us to remove 3rd minimum 6 13 2 6 6 10 15 100 6 13 17 76

// Second query asks us to remove 2nd minimum 13 2 6 10 100 6 13 76

// Third Query asks us to remove 1st minimum 13 10 100 76

// Now print these values and their original indices

// Sample Input 1

// 3
// 1 2 3
// 3 3 1
// 6 9 10

// 1 2
// Sample Output 1

// 2 1
// 3 0
// 9 1
// Explanation 1

// First the minimium element is removed from each data file 2 3 3 3 9 10

// Then the second minimum(aka maximum) is removed from each data file 2 3 9

// print their corresponding original position values,for 3 its first occurence


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,j,a;
    scanf("%d",&n);
    int N[n][n],P[n][n],A[n-1],C[n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&N[i][j]);
            P[i][j]=N[i][j];
        }
    }
    
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&A[i]);
    }
    
    for(int k=0;k<n;k++)
{    
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(P[k][i]>=P[k][j])
            {
                a = P[k][i];
                P[k][i]=P[k][j];
                P[k][j]=a;
            }
        }
}
    }
    
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            P[j][A[i]-1]=P[j][A[i]];
        }
    }
    // for(i=0;i<n;i++)
    // {
    //     C[i]=-1;
    // }
    
    for(i=0;i<n;i++)
    {
        C[i]=P[i][0];
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(C[i]==N[i][j])
            {
                printf ("%d %d\n",N[i][j] , j);
                break;
            }
        }
    }
    
    
    
     
//             for(i=0;i<n;i++)
// {                
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("%d ",P[i][j]);
            
//         }
//         printf("\n");
//     }
// }    
    return 0;
}
