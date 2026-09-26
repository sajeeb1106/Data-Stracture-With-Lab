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

    node *h1, *h2;

    h1=h;
    h2=NULL;

    int i=1, pos;

    printf("\n\nEnter the position to split: ");
    scanf("%d", &pos);

    PTR=h;
    while(i!=pos)
    {
        i++;
        PTR=PTR->next;
    }
    h2=PTR->next;
    PTR->next=NULL;

    printf("\nFirst list are:\n");
    while(h1!=NULL)
    {
        printf("%d ", h1->value);
        h1=h1->next;
    }

    printf("\nSecond list are:\n");
    while(h2!=NULL)
    {
        printf("%d ", h2->value);
        h2=h2->next;
    }

    return 0;
}
