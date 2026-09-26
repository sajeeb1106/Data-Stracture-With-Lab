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

    printf("\nTotal number of elements in the queue: %d", n);

    return 0;
}