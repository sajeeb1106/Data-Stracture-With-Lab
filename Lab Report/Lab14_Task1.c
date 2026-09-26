#include <stdio.h>
#include <time.h>
int main()
{
    int n, i, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter sorted array elements:\n");
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter search element: ");
    scanf("%d", &key);

    // Linear Search
    int found1 = -1;
    clock_t start1 = clock();

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found1 = i;
            break;
        }
    }

    clock_t end1 = clock();

    // Binary Search
    int low = 0, high = n - 1, mid;
    int found2 = -1;

    clock_t start2 = clock();

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            found2 = mid;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    clock_t end2 = clock();

    printf("\nLinear Search: ");
    if(found1 != -1)
        printf("Found at index %d\n", found1);
    else
        printf("Not Found\n");

    printf("Execution Time: %lf seconds\n",
           (double)(end1 - start1) / CLOCKS_PER_SEC);

    printf("\nBinary Search: ");
    if(found2 != -1)
        printf("Found at index %d\n", found2);
    else
        printf("Not Found\n");

    printf("Execution Time: %lf seconds\n",
           (double)(end2 - start2) / CLOCKS_PER_SEC);

    return 0;
}