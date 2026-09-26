#include<stdio.h>
int main()
{
    int n;

    printf("Enter the amount of arrays you want to merge: ");
    scanf("%d", &n);

    int count = 0;
    int sizes[n];

    printf("\n");
    for(int i = 0; i < n; i++)
    {
        printf("Enter the size of array %d: ", i + 1);
        scanf("%d", &sizes[i]);
        count += sizes[i];
    }
    int merged[count];
    int index = 0;

    for(int i = 0; i < n; i++)
    {
        printf("\n");
        for(int j = 0; j < sizes[i]; j++)
        {
            printf("Enter the elements of array %d: ", i + 1);
            scanf("%d", &merged[index]);
            index++;
        }
    }

    printf("\nMerged array: ");
    for(int i = 0; i < count; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}