#include <stdio.h>
int main() 
{
    int n, svalue, i;
    int beg, end, mid;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n == 0) 
    {
        printf("Array is empty.\n");
        return 0;
    }

    int arr[n];

    printf("\n");
    for (i = 0; i < n; i++) 
    {
        printf("Enter elements %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the value to search: ");
    scanf("%d", &svalue);


    beg = 0;
    end = n - 1;

    while (beg <= end) 
    {
        mid = (beg + end) / 2;
        if (arr[mid] == svalue) 
        {
            printf("Value %d is found at index %d.\n", svalue, mid);
            return 0;
        }
        else if (beg == end) 
        {
            break;
        }
        else if (arr[mid] > svalue) 
        {
            end = mid - 1;
        }
        else 
        {
            beg = mid + 1;
        }
    }
    printf("Value %d is not found in the array.\n", svalue);
    return 0;
}