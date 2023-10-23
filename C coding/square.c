#include <stdio.h>
int main ()

{
    int a;
    printf("Enter the side length of the square you want! : ");
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        if(i==1)
        {
            for(int k=a;k>0;k--)
            {
                printf("* ");
            }
        }
        else 
        {
       for (int j=1;j<=i;j++)
       {
        printf("* ");
        if(i>=2&& i<=a-1)
        {
            for(int x=a-2;x>0;x--)
            {
                printf("  ");
            }
            printf("*");
            break;
        }
       }
        }
       printf("\n");
    }

}