#include <stdio.h>

int getmax(int N[], int n)
{
    int max = N[0];

    for (int i = 0; i < n; i++)
    {
        if (max < N[i])
        {
            max = N[i];
        }
    }

    return max;
}

int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int N[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements : ");
        scanf("%d", &N[i]);
    }
    int k = getmax(N, n) + 1;
    int M[k];
    

    for (int i = 0; i < k; i++)
    {
        M[i] = 0;
    }

    for(int i = 0 ;i<n;i++)
    {
        M[N[i]]++;
    }
    // printf ("%d",getmax(N,n));
    for(int i = 1;i<k;i++)
    {
        M[i] = M[i-1] + M[i];
    }

    for(int i = k-1 ;i>=0;i--)
    {
        N[--M[i]] = i;
    }
    
    for(int i = 0;i<n;i++)
    {
        printf("%d \n" ,N[i]);
    }


}
