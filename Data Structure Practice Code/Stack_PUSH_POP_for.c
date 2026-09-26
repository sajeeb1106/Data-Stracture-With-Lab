#include <stdio.h>
#include <stdlib.h>
int main()
{
    int top = -1;
    int n, i, j, key, insertvalue;

    printf("How many elements: ");
    scanf("%d", &n);

    int stack[n], maxsize=n-1;

    for(; ;)
    {
        printf("Enter 1 for PUSH:\n");
        printf("Enter 2 for POP:\n");
        printf("Enter 3 for Display:\n");
        printf("Enter 4 for Exit:\n");
        scanf("%d", &key);
        if(key==1)
        {
            if(top==maxsize)
            {
                printf("Overflow\n");
            }
            else
            {
                printf("Enter your insert value: ");
                scanf("%d",&insertvalue);
                top=top+1;
                stack[top]=insertvalue;
                printf("Data successfully inserted in the stack\n\n");
            }
        }
        else if(key==2)
        {
            if(top==-1)
            {
                printf("Underflow\n");
            }
            else
            {
                stack[top]=0;
                top=top-1;
                printf("Data successfully deleted from the stack\n");
            }
        }
        else if(key==3)
        {
            printf("Stack values are\n");
            for(j=0; j<=top; j++)
                printf("%d\n",stack[j]);
        }
        else
        {
            exit(0);
        }
    }
    return 0;
}
