#include <stdio.h>
int main()
{
    int n, i, top = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int stack[n];

    printf("\n");
    for(i = 0; i < n; i++)
    {
        printf("Enter array elements %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Push array elements into stack
    for(i = 0; i < n; i++)
    {
        top++;
        stack[top] = arr[i];
    }
    // Pop elements and store back into array
    for(i = 0; i < n; i++)
    {
        arr[i] = stack[top];
        top--;
    }

    printf("\nReversed array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}