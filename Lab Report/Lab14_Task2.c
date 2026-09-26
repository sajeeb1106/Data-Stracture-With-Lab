#include <stdio.h>

int main()
{
    int n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("\n");
    for(i = 0; i < n; i++)
    {
        printf("Enter array element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter search value: ");
    scanf("%d", &key);

    printf("\nIndices of %d are: ", key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("%d ", i);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Value not found.");
    }

    return 0;
}