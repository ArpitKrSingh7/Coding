#include <stdio.h>

int main()
{
    int n;
    printf("Enetr the number of elements : ");
    scanf("%d", &n);

    int N[n], min;
    for (int i = 0; i < n; i++)
    {
        printf("Enetr the element : ");
        scanf("%d", &N[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        min = i;

        for (int j = i + 1; j < n ; j++)
        {
            if (N[j] < N[min])
            {
                min = j;
            }
        }

        if (i != min)
        {
            int temp = N[min];
            N[min] = N[i];
            N[i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", N[i]);
    }
}