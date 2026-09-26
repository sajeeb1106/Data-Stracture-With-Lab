#include<stdio.h>
int main()
{
    int m, n, i;

    printf("Enter the size of the first array: ");
    scanf("%d", &m);

    int arr1[m];
    
    for (i = 0; i < m; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter the size of the second array: ");
    scanf("%d", &n);

    int arr2[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int arr3[m + n];

    for (i = 0; i < m; i++)
    {
        arr3[i] = arr1[i];
    }

    for (i = 0; i < n; i++)
    {
        arr3[m + i] = arr2[i];
    }

    printf("\nMerged array: ");
    for (i = 0; i < m + n; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}