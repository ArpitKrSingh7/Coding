// Rachel is given a Treasure-Box and two keys α, β to open the Treasure-Box. She must do a set of processes to unlock the Treasure-Box.

// She must compare the unit digits of the numbers and remove the smaller of them from that number and carry on the process till any of the number disintegrates. If both the digits are equal remove the digits from both the numbers.

// Return the number that remains. (Return 0 if both the numbers disintegrate)

// For Example: If α=1238 β=9, Compare 8,9 8 is smaller than 9, so remove 8 from 1238(1238 becomes 123) Compare 3 with 9, 3 is smaller than 9, so remove 3 from 123(123 becomes 12) Compare 2 with 9, 2 is smaller than 9, so remove 2 from 12(12 becomes 1) Compare 1 with 9, 1 is smaller than 9, so remove 1 from 1(becomes NULL)

// Output: 9

// Input Format

// Two space seperated integers α and β

// Constraints

// 1<=β,α<=10^9

// Output Format

// An integer denoting the remaining number

// Sample Input 0

// 100 100
// Sample Output 0

// 0
// Explanation 0

// Every digit is removed from both the numbers



#include <stdio.h>
int main ()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=a;
    d=b;
    while (c!=0 && d!=0)
    {
        c=c%10;
        d=d%10;
        if(c>d)
        {
            b=b/10;
            d=b;
            c=a;
        }
        else if (c==d)
        {
            a=a/10;
            b=b/10;
            c=a;
            d=b;
        }
        else
        {
            a=a/10;
            c=a;
            d=b;
        }

    }

    if(a>b)
    printf("%d",a);
    else if(a==b)
    printf("0");
    else
    printf("%d",b);
}