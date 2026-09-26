#include<stdio.h>
int main()
{
    int n, pos, value, i;

    printf("Enter Element: ");
    scanf("%d", &n);

    int arr[n];

    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("Enter the element number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the position to insert: ");
    scanf("%d", &pos);

    printf("\nEnter the value: ");
    scanf("%d", &value);

    if(pos>=n)
    {
        arr[n]= value;
    }
    else
    {
        for(i=n; i>pos; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[i]=value;
    }

    printf("\nFinal Result: ");
    for(i=0; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }
}