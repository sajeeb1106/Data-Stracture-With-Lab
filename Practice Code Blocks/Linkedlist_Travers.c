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
        printf("Enter a value(Negative to stop): ");
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

    printf("\n");
    printf("The final values are:\n");

    node *PTR=h;

    while(PTR!=NULL)
    {
        printf("%d ", PTR->value);
        PTR=PTR->next;
    }
    return 0;
}
