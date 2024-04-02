#include <stdio.h>

int partition(int arr[], int low, int high)
{
    int i = low;
    int j = high;

    while (1)
    {
        while (arr[i] <= arr[low] && i <= j)
        {
            i++;
        }

        while (arr[j] >= arr[low] && j >= i)
        {
            j--;
        }

        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

        else
        {
            int temp = arr[low];
            arr[low] = arr[j];
            arr[j] = temp;

            return j;
        }
    }
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pivotindex = partition(arr, low, high);

        quicksort(arr, low, pivotindex - 1);
        quicksort(arr, pivotindex + 1, high);
    }
    // int pivotindex = partition(arr,n);
}

int main()
{
    int n;
    scanf("%d", &n);

    int N[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &N[i]);
    }

    printf("Unsorted array : \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", N[i]);
    }

    printf("Sorted array : \n");

    quicksort(N, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", N[i]);
    }
}