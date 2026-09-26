#include <stdio.h>

void insert()
{
    int m, n, pos, i, value;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nCurrent array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter How many elements you want to insert: ");
    scanf("%d", &m);

    for (i = 0; i < m; i++)
    {
        printf("\nEnter the position where you want to insert the element: ");
        scanf("%d", &pos);

        printf("Enter the element %d: ", i + 1);
        scanf("%d", &value);

        for(int j = n; j >= pos; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[pos-1] = value;
        n++;
    }

    printf("\nElement inserted successfully!\n");
    printf("Final array after insertion: ");
    for (int i = 0; i < n; i++) 
        {
            printf("%d ", arr[i]);
        }
    printf("\n");
}

void delete()
{
    int m, n, pos, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter how many elements you want to delete: ");
    scanf("%d", &m);

    for (int k = 0; k < m; k++)
    {
        printf("Enter the position of the element you want to delete: ");
        scanf("%d", &pos);

        for (i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
    }
}

void update()
{
    int m, n, pos, i, value;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter how many elements you want to update: ");
    scanf("%d", &m);

    for (i = 0; i < m; i++)
    {
        printf("\nEnter the position of the element you want to update: ");
        scanf("%d", &pos);

        printf("Enter the new value: ");
        scanf("%d", &value);

        arr[pos - 1] = value;
    }
}

void split()
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
    }
}

void merge()
{
    int m, n, i;

    printf("Enter the size of the first array: ");
    scanf("%d", &m);

    int arr1[m];

    for (i = 0; i < m; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter the size of the second array: ");
    scanf("%d", &n);

    int arr2[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int arr3[m + n];

    for (i = 0; i < m; i++)
    {
        arr3[i] = arr1[i];
    }

    for (i = 0; i < n; i++)
    {
        arr3[m + i] = arr2[i];
    }
}

int main()
{
    do
    {
        int choice, arr[100], arr1[100], arr2[100], arr3[100], n, m, k;
        
        printf("\n\n--Array Operations--\n\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Update an element\n");
        printf("4. Split the array into even and odd numbers\n");
        printf("5. Merge two arrays\n");
        printf("6. Exit\n");
        
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();

                printf("\nElement deleted successfully!\n");
                printf("Final array after deletion: ");
                for (int i = 0; i < n; i++) 
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                update();

                printf("\nElement updated successfully!\n");
                printf("Final array after update: ");
                for (int i = 0; i < n; i++) 
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 4:
                split();

                printf("\nArray split into even and odd numbers successfully!\n");
                printf("Even numbers in the array: ");
                for (int i = 0; i <= k; i++) 
                {
                    printf("%d ", arr3[i]);
                }
                printf("\n");

                printf("Odd numbers in the array: ");
                for (int i = k + 1; i < m; i++) 
                {
                    printf("%d ", arr3[i]);
                }
                printf("\n");
                break;
            case 5:
                merge();

                printf("\nArrays merged successfully!\n");
                printf("Final merged array: ");
                for (int i = 0; i < m + n; i++) 
                {
                    printf("%d ", arr3[i]);
                }
                printf("\n");
                break;
            case 6:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(1);

    return 0;
}