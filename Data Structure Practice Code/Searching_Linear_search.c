#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], i, search, found = 0;

    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("Enter the element number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &search);

    for(i=0; i<n; i++)
    {
        if(arr[i] == search)
        {
            printf("Element %d found in the array.\n", search);
            found = 1;
        }
    }
    if(found == 0)
        {
            printf("Element %d not found in the array.\n", search);
        }
    return 0;
}