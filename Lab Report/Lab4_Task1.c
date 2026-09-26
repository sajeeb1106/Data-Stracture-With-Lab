#include <stdio.h>
int main()
{
    int n1, n2, i, j, k = 0, flag;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("\nEnter first array elements:\n");
    for(i = 0; i < n1; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("\nEnter second array elements:\n");
    for(i = 0; i < n2; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int merge[n1 + n2];

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

    for(i = 0; i < k; i++)
    {
        for(j = i + 1; j < k; j++)
        {
            if(merge[i] == merge[j])
            {
                for(int l = j; l < k - 1; l++)
                {
                    merge[l] = merge[l + 1];
                }
                k--;
                j--;
            }
        }
    }
    printf("\nMerged array without duplicates:\n");
    for(i = 0; i < k; i++)
    {
        printf("%d ", merge[i]);
    }

    return 0;
}