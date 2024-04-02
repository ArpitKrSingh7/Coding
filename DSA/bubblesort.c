#include <stdio.h>

int main ()
{
    int n;
    printf("Enter number of Elements : ");
    scanf("%d",&n);
    int N[n];

    for(int i=0;i<n;i++)
    {
        printf("Enetr the element : ");
        scanf("%d",&N[i]);
    }


    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(N[i]>N[j])
            {
                int temp = N[i];
                N[i] = N[j];
                N[j]= temp;
            }

        }
    }


    for(int i=0;i<n;i++)
    {
        printf("%d \n",N[i]);
    }
}