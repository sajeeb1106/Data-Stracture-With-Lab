#include <stdio.h>

int main()
{
    int n, value;
    int i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("\n");
    for(i = 0; i < n; i++)
    {
        printf("Enter array elements %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter value to delete: ");
    scanf("%d", &value);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == value)
        {
            for(j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;
        }
    }

    printf("\nArray after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}