#include <stdio.h>

int main()
{
    int n;
    printf("Enetr the number of elements : ");
    scanf("%d", &n);

    int N[n], min = -1, min1;
    for (int i = 0; i < n; i++)
    {
        printf("Enetr the element : ");
        scanf("%d", &N[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (min <= N[j])
            {
                min = N[j];
                min1 = j;
            }

            int temp = N[min1];
            N[min1] = N[j];
            N[j] = temp;
        }

        min = -1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", N[i]);
    }
}