#include <stdio.h>
int main()
{
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if(n==0)
    {
        printf("The array is empty.");
    }
    else
    {
        int arr[n], arr2[n], arr3[n];
        int j=-1, k=-1, even=0, odd=0;

        printf("\n");
        for (int i = 0; i < n; i++)
        {
            printf("Enter the element %d: ", i + 1);
            scanf("%d", &arr[i]);
        } 
         
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                j=j+1;
                arr2[j] = arr[i];
                even++;
            }
            else
            {
                k=k+1;
                arr3[k] = arr[i];
                odd++;
            }
        }

        printf("\nEven numbers in the array: ");
        for (int i = 0; i < even; i++)
        {
            printf("%d ", arr2[i]);
        } 
        
        printf("\nOdd numbers in the array: ");
        for (int i = 0; i < odd; i++)
        {
            printf("%d ", arr3[i]);
        }
        
    }
    return 0;
}