#include<stdio.h>
int main()
{
    int n, total=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter Numbers: ");
        scanf("%d", &arr[i]);
        total = total + arr[i];
    }

    printf("Total = %d\n", total);
    return 0;
}
