#include<stdio.h>

int main()
{
    int n, i, pos;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    if(pos>=n)
    {
        printf("Delete is not possible.\n");
    }
    else
    {
        for(i=pos+1; i<n; i++)
        {
            arr[i-1]=arr[i];
        }
        n=n-1;

        printf("\nFinal Result:\n");
        for(i=0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
