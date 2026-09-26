#include <stdio.h>
int main()
{
    int n1, n2, n3, i, j, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("\nEnter first sorted array elements:\n");
    for(i = 0; i < n1; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("\nEnter second sorted array elements:\n");
    for(i = 0; i < n2; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    printf("\nEnter size of third array: ");
    scanf("%d", &n3);

    int arr3[n3];

    printf("\nEnter third sorted array elements:\n");
    for(i = 0; i < n3; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr3[i]);
    }

    int merge[n1 + n2 + n3];

    for(i = 0; i < n1; i++)
    {
        merge[k] = arr1[i];
        k++;
    }

    for(i = 0; i < n2; i++)
    {
        merge[k] = arr2[i];
        k++;
    }

    for(i = 0; i < n3; i++)
    {
        merge[k] = arr3[i];
        k++;
    }
    
    for(i = 0; i < k; i++)
    {
        for(j = i + 1; j < k; j++)
        {
            if(merge[i] > merge[j])
            {
                int temp = merge[i];
                merge[i] = merge[j];
                merge[j] = temp;
            }
        }
    }

    printf("\nMerged sorted array:\n");
    for(i = 0; i < k; i++)
    {
        printf("%d ", merge[i]);
    }
    return 0;
}