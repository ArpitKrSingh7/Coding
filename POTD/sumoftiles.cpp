// Mario is given a 2D array of tiles, in which each tile has a specific value. He should modify the given matrix by assigning each tile a new value obtained by calculating the average of current tile and all the surrounding tiles and return sum of all the modified values.(If average value of tiles is a decimal value, consider floor of the decimal value)

// Input Format

// First line of each input consists of 2 integers m and n representing number of rows and columns in the matrix.
// Next m lines consists of n integers each.
// Constraints

// 1 <= m,n <= 100
// 0 <= arrayValue <= 1000
// Output Format

// For each testcase, print the sum of all values in the modified matrix on a new line.
// Sample Input 0

// 2 3
// 5 7 8
// 2 3 4
// Sample Output 0

// 26
// Explanation 0

// For the first tile at index [0][0], modified value will be average of 5,7,2,3 = (5+7+2+3)/4 = floor(4.25) = 4. For tile at index [0][1], modified value = (5+7+8+2+3+4)/6 = 4. Similarly after modifying all the tiles, new matrix will be 4 4 5 4 4 5 Sum of matrix is 4+4+5+4+4+5 = 26.

// Sample Input 1

// 3 3
// 78 34 22
// 68 12 65
// 40 53 72
// Sample Output 1

// 410
// Explanation 1

// Modified matrix : 48 46 33 47 49 43 43 51 50



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int r,c,i,j;
    cin>>r>>c;
    int M[r][c],sum[r][c],avg[r][c],b=0,Sum=0;
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>M[i][j];
        }
    }
    
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=0;
        }
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            for(int k=-1;(k<=1) && (k+i<r);k++)
            {
                for(int p=-1;(p<=1) && (p+j<c);p++)
                 {
                    
                    {
                        if((k+i>=0) && (p+j>=0))
                        {
                              
                         sum[i][j]= sum[i][j] + M[i+k][j+p];
                         b++;
                         avg[i][j]=b;
                            
                        }   
                        
                    }
                    
                 }
            }
            b=0;
            sum[i][j] = sum[i][j] / avg[i][j];
            Sum = Sum + sum[i][j];
                 
        }
    }
    
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          
            
        }
    }
    
    
    
    
    // for(i=0;i<r;i++)
    // {
    //     for(j=0;j<c;j++)
    //     {
    //         cout<<" "<<sum[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    //  for(i=0;i<r;i++)
    // {
    //     for(j=0;j<c;j++)
    //     {
    //         cout<<" "<<avg[i][j];
    //     }
    //     cout<<endl;
    // }
    
    cout<<Sum;
    
    
    return 0;
}
