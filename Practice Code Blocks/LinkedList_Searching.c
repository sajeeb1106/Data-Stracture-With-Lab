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
    q=0;

    for(; ;)
    {
        printf("Enter any Number(Negative to stop): ");
        scanf("%d", &x);

        if(x<0)
        {
            break;
        }
        else
        {
            p=(node *)malloc(sizeof(node));

            p->value=x;
            p->next=NULL;

            if(h==0)
            {
                h=p;
                q=p;
            }
            else
            {
                q->next=p;
                q=p;
            }
        }
    }

    printf("\nFinal list are:\n");

    node *PTR=h;

    while(PTR!=NULL)
    {
        printf("%d ", PTR-> value);
        PTR=PTR->next;
    }

    int y;

    printf("\n\nEnter the value to search: ");
    scanf("%d", &y);

    PTR=h;
    while(PTR!=NULL)
    {
        if(PTR->value==y)
        {
            printf("\n%d is found at %d.\n", PTR->value, PTR);
            return 0;
        }
        PTR=PTR->next;
    }
    printf("\n%d is not found\n", PTR->value);

    return 0;
}
