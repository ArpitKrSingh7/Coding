#include <stdio.h>
int main ()

{
    int a;
    printf("Enter the side length of the square you want! : ");
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(i==1||i==a||j==1||j==a)
            {
                printf (" *");
            }
            else
            printf("  ");
            

        }

        printf("\n");


 
    }    

}    