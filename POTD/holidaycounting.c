// A particular month has 30 days, numbered from 1 to 30.Day 1 is a Monday, and the usual 7-day week is followed (so day 2 is Tuesday, day 3 is Wednesday, and so on).
// Every Saturday and Sunday is a holiday. There are N festival days, which are also holidays.
// Note that it is possible for a festival day to occur on a Saturday or Sunday. You are given the dates of the festivals. Determine the total number of holidays in this month.
// Input Format

// The first line of input contains a single integer T, denoting the number of test cases.
// The first line of each test case contains an integer N denoting the number of festival days.
// The second line of each test case contains N distinct space-separated integers denoting the festival days. Note that they are not necessarily given in sorted order.
// Constraints

// .
// .
// Output Format

// For each test case, output on a new line containing the total number of holidays.
// Sample Input 0

// 2
// 2
// 5 7
// 3
// 23 1 6
// Sample Output 0

// 9
// 10
// Explanation 0

// Testcase1: The festivals fall on day 5 and day 7, but day 7 is already a Sunday. This gives us 9 holidays in total including saturdays and sundays.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,i;
    scanf("%d", &T);
    
    while(T--) 
        {
            int n;
            scanf("%d", &n);
          int N[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&N[i]);
        }
        
        
        

        int t = 8;
        
        for(i=0;i<n;i++)
            {
                if(N[i] % 7 == 6 || N[i]%7 == 0) 
                    {
                        continue;
                    }
            else
                t++;
            }
        
        printf("%d\n", t);
        
        }
        
      
    

    return 0;
}

