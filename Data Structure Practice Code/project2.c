#include <stdio.h>

#define MAX_SIZE 1000
#define FILE_NAME "array_data.txt"

int arr[MAX_SIZE];
int n = 0;

void saveToFile()
{
    FILE *file = fopen(FILE_NAME, "w");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    fprintf(file, "%d\n", n);

    for (int i = 0; i < n; i++)
    {
        fprintf(file, "%d ", arr[i]);
    }

    fclose(file);

    printf("\nData saved to file successfully!\n");
}

void loadFromFile()
{
    FILE *file = fopen(FILE_NAME, "r");

    if (file == NULL)
    {
        printf("\nNo previous data found. Creating a new array.\n");
        return;
    }

    fscanf(file, "%d", &n);

    for (int i = 0; i < n; i++)
    {
        fscanf(file, "%d", &arr[i]);
    }

    fclose(file);

    printf("\nPrevious data loaded successfully!\n");
}

void display()
{
    if (n == 0)
    {
        printf("\nArray is empty!\n");
        return;
    }

    printf("\nCurrent array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void insert()
{
    int m, pos, value;

    printf("\nHow many elements do you want to insert: ");
    scanf("%d", &m);

    if (n + m > MAX_SIZE)
    {
        printf("Not enough space in the array!\n");
        return;
    }

    for (int i = 0; i < m; i++)
    {
        printf("\nEnter the position where you want to insert: ");
        scanf("%d", &pos);

        if (pos < 1 || pos > n + 1)
        {
            printf("Invalid position!\n");
            i--;
            continue;
        }

        printf("Enter the element %d: ", i + 1);
        scanf("%d", &value);

        for (int i = n; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = value;
        n++;
    }

    printf("\nElement inserted successfully!\n");
    printf("Final array after insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    display();
    saveToFile();
}

void delete()
{
    int m, pos;

    if (n == 0)
    {
        printf("\nThe array is empty.\n");
        return;
    }

    printf("\nHow many elements do you want to delete: ");
    scanf("%d", &m);

    if (m > n)
    {
        printf("You cannot delete more elements than the array contains!\n");
        return;
    }

    for (int i = 0; i < m; i++)
    {
        printf("\nEnter the position of the element you want to delete: ");
        scanf("%d", &pos);

        if (pos < 1 || pos > n)
        {
            printf("Invalid position!\n");
            i--;
            continue;
        }

        for (int i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
    }

    printf("\nElement deleted successfully!\n");
    printf("Final array after deletion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    display();
    saveToFile();
}

void update()
{
    int m, pos, value;

    if (n == 0)
    {
        printf("\nThe array is empty.\n");
        return;
    }

    printf("\nHow many elements do you want to update: ");
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        printf("\nEnter the position of the element you want to update: ");
        scanf("%d", &pos);

        if (pos < 1 || pos > n)
        {
            printf("Invalid position!\n");
            i--;
            continue;
        }

        printf("Enter the new value: ");
        scanf("%d", &value);

        arr[pos - 1] = value;
    }

    printf("\nElement updated successfully!\n");
    printf("Final array after update: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    display();
    saveToFile();
}

void split()
{
    int even[MAX_SIZE];
    int odd[MAX_SIZE];

    int evenCount = 0;
    int oddCount = 0;

    if (n == 0)
    {
        printf("\nThe array is empty!\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
        else
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
    }

    printf("\nArray split into even and odd numbers successfully!\n");

    printf("\nThe list of even numbers:\n");
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nThe list of odd numbers:\n");
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d ", odd[i]);
    }

    printf("\n");
}

void merge()
{
    int numberOfArrays;
    int size;

    printf("\nHow many arrays do you want to merge? ");
    scanf("%d", &numberOfArrays);

    if (numberOfArrays < 1)
    {
        printf("Invalid number of arrays!\n");
        return;
    }

    for (int i = 1; i <= numberOfArrays; i++)
    {
        printf("\nEnter the size of Array %d: ", i);
        scanf("%d", &size);

        if (size < 1)
        {
            printf("Invalid array size!\n");
            i--;
            continue;
        }

        if (n + size > MAX_SIZE)
        {
            printf("\nNot enough space to merge more elements!\n");
            printf("Maximum capacity is %d elements.\n", MAX_SIZE);
            return;
        }

        printf("Enter %d elements for Array %d:\n", size, i);

        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[n]);
            n++;
        }
    }
    printf("\n%d arrays merged successfully!\n", numberOfArrays);
    printf("Final merged array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    display();
    saveToFile();
}

int main()
{
    int choice;

    loadFromFile();
    if (n == 0)
    {
        printf("\nEnter the size of the array: ");
        scanf("%d", &n);

        if (n < 1 || n > MAX_SIZE)
        {
            printf("Invalid array size!\n");
            return 0;
        }

        for (int i = 0; i < n; i++)
        {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &arr[i]);
        }

        saveToFile();
    }

    display();
    do
    {
        printf("\n---Main Menu---\n\n");

        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Update an element\n");
        printf("4. Split into even and odd\n");
        printf("5. Merge two arrays\n");
        printf("6. Display array\n");
        printf("7. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                update();
                break;

            case 4:
                split();
                break;

            case 5:
                merge();
                break;

            case 6:
                display();
                break;

            case 7:
                printf("\nExiting the program...\n");
                return 0;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (1);

    return 0;
}