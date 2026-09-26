#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// PUSH function
void push()
{
    int value;

    if(top == MAX - 1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        printf("Enter value to push: ");
        scanf("%d", &value);

        top++;
        stack[top] = value;

        printf("Element pushed successfully");
    }
}
// POP function
void pop()
{
    if(top == -1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        printf("\nDeleted element: %d", stack[top]);
        top--;
    }
}
// DISPLAY function
void display()
{
    int i;

    if(top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nStack elements are:\n");

        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("\nInvalid choice");
        }
    }

    return 0;
}