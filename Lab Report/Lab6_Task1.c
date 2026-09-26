#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int queue[n];

    printf("\n");
    for(i = 0; i < n; i++)
    {
        printf("Enter queue element %d: ", i + 1);
        scanf("%d", &queue[i]);
    }

    if(n == 0)
    {
        printf("\nQueue is empty.");
    }
    else
    {
        printf("\nFront element: %d", queue[0]);
        printf("\nRear element: %d", queue[n - 1]);
    }

    return 0;
}