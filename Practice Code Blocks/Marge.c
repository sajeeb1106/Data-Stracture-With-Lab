#include<stdio.h>

int main()
{
    int m, n, i;

    printf("Enter the size of First array: ");
    scanf("%d", &m);

    int arr1[m];

    printf("\n");
    for(i=0; i<m; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr1[i]);
    }

    printf("\n");
    printf("Enter the size of Second array: ");
    scanf("%d", &n);

    int arr2[n];

    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr2[i]);
    }

    int arr[m+n];

    printf("\n");
    for(i=0; i<m; i++)
    {
        arr[i]=arr1[i];
    }

    for(i=0; i<n; i++)
    {
        arr[m+i]=arr2[i];
    }

    printf("\n");
    printf("\nFinal array:\n");
    for(i=0; i<m+n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
