#include<stdio.h>
#include<stdlib.h>

struct student
{
    int value;
    struct student *next;
};

typedef struct student node;

node *p, *q, *h;

int main()
{
    int x;
    h=0;
    p=0;

    for(; ;)
    {
        printf("Enter any number(Negetive to Stop): ");
        scanf("%d", &x);

        if(x<0)
        {
            break;
        }
        else
        {
            p=(node *)malloc(sizeof(node));

            p-> value=x;
            p-> next=NULL;

            if(h==0)
            {
                h=p;
                q=p;
            }
            else
            {
                q-> next=p;
                q=p;
            }
        }
    }

    printf("The Final Values are: \n");

    node *PTR=h;

    while(PTR!=NULL)
    {
        printf("%d\n", PTR-> value);
        PTR=PTR->next;
    }

    int y;

    printf("Enter the number to search: ");
    scanf("%d", &y);
    
    PTR=h; 
    while(PTR!=NULL)
    {
        if(PTR->value == y)
        {
            printf("%d is Found", y);
            return 0;
        }

        PTR=PTR->next;
    }

    printf("%d Not Found", y);
}