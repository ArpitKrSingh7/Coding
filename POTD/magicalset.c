// A set, denoted as S = {x, y}, is deemed "magical" when it meets the following criteria: Begin by taking the first digit (unit digit) of each number and moving it to the end(making it the most significant digit). Calculate the absolute difference between the two resulting numbers, N1 and N2, where N1 is the outcome of the transformation for x and N2 for y. Repeat this process until you obtain the original numbers. The set is considered magical if, during this iterative transformation, the maximum value of |N1 - N2|, which we'll call 'z,' falls within the range defined by z< x and z< y.

// Return 'true' if the set is magical; otherwise, return 'false.'

// Input Format

// Each testcase takes 2 spaced integers x and y

// Constraints

// .
// Output Format

// For each testcase print in new line 'true' if it is Magical number else print 'false'.

// Sample Input 0

// 1214 9123
// Sample Output 0

// true
// Explanation 0

// During the first transformation, 1214-->4121 and 9123-->3912, |N1-N2|=209. During the second transformation, 4121-->1412 and 3912-->2391, |N1-N2|=979.

// During the third transformation, 1412-->2141 and 2391-->1239, |N1-N2|=902.

// The maximum difference is 979= z < x< y. Output: true.

// Sample Input 1

// 1000 121
// Sample Output 1

// false
// Explanation 1

// During the first transformation, 1000-->0100(100) and 121-->112, |N1-N2|=12.

// During the second transformation, 100--> 0010(10) and 112-->211, |N1-N2|=201.

// Here the difference(201) exceeds one of the numbers (10).

// Output: false

#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,a=0,b=0,x1,y1,Z=0;
    scanf("%d %d",&x,&y);
    for(int i=x;i>0;)
    {
       i = i/10;
       a++;
    }
    for(int j=y;j>0;)
    {
       j = j/10;
       b++;
    }
    int N1=0,N2=0,z=0;
    x1=x;
    y1=y;

    if (a>=b)
    {
        for(int k=1;k<b;k++)
        {
        N1= x1%10;
        x1=x1/10;
        N1= N1*pow(10,(a-1)) + x1;

        N2= y1%10;
        y1=y1/10;
        N2= N2*pow(10,(b-1)) + y1;

        x1=N1;
        y1=N2;

        if(N1>=N2)
        {
           z=N1-N2;
        }
        else if(N2>N1)
        {
           z=N2-N1;
        }
       if (z>x || z>y)
        {
            Z++;
        }
        }

        if(Z>0)
        {
            printf("false");
        }
        else
        printf("true");
        
    }

    else
    {
      for(int k=1;k<a;k++)
        {
        N1= x1%10;
        x1=x1/10;
        N1= N1*pow(10,(a-1)) + x1;

        N2= y1%10;
        y1=y1/10;
        N2= N2*pow(10,(b-1)) + y1;

        x1=N1;
        y1=N2;

        if(N1>N2)
        {
           z=N1-N2;
        }
        else if(N2>N1)
        {
           z=N2-N1;
        }
        if (z>x || z>y)
        {
            Z++;
           
        }
        }

        if(Z>0)
        {
            printf("false");
        }
        else
        printf("true");
          
    }

}