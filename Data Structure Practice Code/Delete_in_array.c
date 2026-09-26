#include<stdio.h>
int main()
{
    int i, pos, n;

    printf("Enter Element: ");
    scanf("%d", &n);

    int arr[n];

    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("Enter the element number %d(Index number %d): ", i+1, i);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the position to Delete: ");
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

        printf("\nFinal Result= ");
        for(i=0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}