#include <stdio.h>
int main()
{
    int n, m;
    int i, j, pos, value;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];


    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter how many elements you want to insert: ");
    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        printf("\nEnter position to insert: ");
        scanf("%d", &pos);

        printf("Enter value: ");
        scanf("%d", &value);

        for(j = n; j >= pos; j--)
        {
            arr[j] = arr[j - 1];
        }

        arr[pos - 1] = value;
        n++;
    }

    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}