#include <stdio.h>
int main()
{
    int n, i, p = 0, ne = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int positive[n], negative[n];

    printf("\n");
    for(i = 0; i < n; i++)
    {
        printf("Enter array elements %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Split array
    for(i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
        {
            positive[p] = arr[i];
            p++;
        }
        else
        {
            negative[ne] = arr[i];
            ne++;
        }
    }

    printf("\nPositive numbers:\n");
    for(i = 0; i < p; i++)
    {
        printf("%d ", positive[i]);
    }

    printf("\n\nNegative numbers:\n");
    for(i = 0; i < ne; i++)
    {
        printf("%d ", negative[i]);
    }

    return 0;
}