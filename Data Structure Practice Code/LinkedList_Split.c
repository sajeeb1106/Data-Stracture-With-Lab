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
        printf("Enter any number(Negetive to stop): ");
        scanf("%d", &x);

        if(x<0)
        {
            break;
        }
        else
        {
            p=(node*)malloc(sizeof(node));

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

    int y;

    printf("Enter the number to split at: ");
    scanf("%d", &y);

    node *PTR=h;
    node *Head1=NULL;
    node *Head2=NULL;

    while(PTR!=NULL)
    {
        if(PTR->value==y)
        {
            Head2=PTR->next;
            PTR->next=NULL;
            break;
        }
        PTR=PTR->next;
    }

    printf("First Linked List: \n");
    PTR=h;

    while(PTR!=NULL)
    {
        printf("%d ", PTR->value);
        PTR=PTR->next;
    }

    printf("\nSecond Linked List: \n");
    PTR=Head2;

    while(PTR!=NULL)
    {
        printf("%d ", PTR->value);
        PTR=PTR->next;
    }
    return 0;
}