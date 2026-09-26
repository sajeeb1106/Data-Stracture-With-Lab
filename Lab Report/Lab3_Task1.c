#include <stdio.h>

int main()
{
    int n, i, m = 0, nm = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int multiple[n], nonMultiple[n];

    printf("\n");
    for(i = 0; i < n; i++)
    {
        printf("Enter array elements %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Split array
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 3 == 0)
        {
            multiple[m] = arr[i];
            m++;
        }
        else
        {
            nonMultiple[nm] = arr[i];
            nm++;
        }
    }

    printf("\nMultiples of 3:\n");
    for(i = 0; i < m; i++)
    {
        printf("%d ", multiple[i]);
    }

    printf("\nNon-multiples of 3:\n");
    for(i = 0; i < nm; i++)
    {
        printf("%d ", nonMultiple[i]);
    }

    return 0;
}