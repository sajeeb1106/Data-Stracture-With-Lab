#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("\n");
    for(i = 0; i < n; i++)
    {
        printf("Enter array elements %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            arr[i] = arr[i] + 5;
        }
    }

    printf("\nUpdated array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}