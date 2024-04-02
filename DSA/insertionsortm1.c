#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int N[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &N[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        int temp = N[i];
        while (j > 0 && N[j] < temp)
        {
            N[j - 1] = N[j];
            N[j] = temp;
            j--;
            temp = N[j - 1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", N[i]);
    }
}