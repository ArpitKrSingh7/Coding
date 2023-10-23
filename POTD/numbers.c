// You are given two integers X and Y. Check if the number Y is present in X. If present return ‘true’ else return ‘false’. (You are not allowed to use any inbuilt function and you should not convert the number into a string)

// Input Format

// Input contains 2 spaced integers X and Y

// Constraints

// .
// Output Format

// For each testcase print on new line 'true' if Y is present in X, else print 'false'

// Sample Input 0

// 1234 34
// Sample Output 0

// true
// Explanation 0

// 1234 contains the number 34. Output : true

// Sample Input 1

// 124 1240
// Sample Output 1

// false
// Explanation 1

// X < Y so not possible. Output : false


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int x,y,d=0,e=0;
    scanf("%d %d",&x ,&y);
    if(x<y)
    {
        printf("false");
    }

    else if (x==y)
    {
        printf("true");
    }
    else
        
    {
        int a=x,c=0,N1=0;
        
        while (a!=0)
        {
            a=a/10;
            c++;
        }
        a=x;
        for (int i=1;i<c;i++)
        {
            int u = pow(10,i);
            a = a % u;
            
            if(a==y)
            {
                d++;
            }
            a=x;
        }
        if(d>0)
        {
            printf("true");
        }
        else
        {
        a=x;
        for(int k=1;k<c;k++)
        {
            N1= a%10;
            a=a/10;
            N1= N1*pow(10,c-1) + a;
            a=N1;
            
            
            for (int j=1;j<c;j++)
        {
                int v= pow(10,j);
            a=a % v;
            if(a==y)
            {
                e++;
            }
            a=N1;
        }

            
        }
        if(e>0)
        {
            printf("true");
        }
        else
        printf("false");
        }
    }
    return 0;
}
