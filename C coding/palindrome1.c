#include <stdio.h>
int main ()
{
    int a,d,rev=0;
    printf("Enter the maximum value : ");
    scanf("%d",&a);
    printf("Enter the minimum value : ");
    scanf("%d",&d);

    for (int i=d;i<=a;i++)
    {
        int b=i;
        while(b!=0)
        {
            rev=rev*10 +b%10;
            b=b/10;
        }

        if(rev==i)
        {
            printf("%d\n",i);
        }
        rev=0;
    }
}