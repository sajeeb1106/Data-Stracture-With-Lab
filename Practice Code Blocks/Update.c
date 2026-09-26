#include<stdio.h>

int main()
{
    int n, pos, value, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    if(n==0)
    {
        printf("The array is empty.\n");
    }
    else
    {
        int arr[n];

        printf("\n");
        for(i=0; i<n; i++)
        {
            printf("Enter Element %d: ", i+1);
            scanf("%d", &arr[i]);
        }

        printf("\nEnter the position to update: ");
        scanf("%d", &pos);

        if(pos>=n)
        {
            printf("Update is not possible.\n");
            printf("Final values are: ");
            for(i=0; i<n; i++)
            {
                printf("%d ", arr[i]);
            }
        }
        else
        {
            printf("Enter the updated Value: ");
            scanf("%d", &value);

            arr[pos]=value;

            printf("\nFinal values are: ");
            for(i=0; i<n; i++)
            {
                printf("%d ", arr[i]);
            }
        }
    }
    return 0;
}
