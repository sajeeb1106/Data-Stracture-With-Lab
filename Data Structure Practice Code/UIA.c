#include<stdio.h>
int main()
{
    int i, pos, n, value;

    printf("Enter Element: ");
    scanf("%d", &n);

    int arr[n];

    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("Enter the element number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    printf("Enter the position to update: ");
    scanf("%d", &pos);

    if(pos>=n)
    {
        printf("Update is not posssible.\n");
        printf("The Numbers are: ");
        for(i=0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("\n");
        printf("Enter the updated value: ");
        scanf("%d", &value);

        arr[pos]=value;

        printf("\n");
        printf("Final Result: ");
        for(i=0; i<n; i++)
        {
           printf("%d ", arr[i]);
        }
    }
    return 0;
}
