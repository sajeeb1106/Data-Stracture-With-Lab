#include<stdio.h>
#include<stdlib.h>

struct student
{
    int value;
    struct student *next;
};

typedef struct student node;
node *p,*q,*h;

int main()
{
    int x;
    h=0,
    q=0;

    for( ; ;)
    {
        printf("Enter any number(Negetive to Stop): ");
        scanf("%d",&x);

        if(x<0)
        {
            break;
        }
        else
        {
            p=(node*)malloc(sizeof(node));

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
    printf("The Final Values are:\n");
    node *ptr=h;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->value);
        ptr=ptr->next;
    }

    node *h1,*h2;

    h1=h;
    h2=NULL;

    int i=1, pos;
    
    printf("\n");
    printf("Enter your split position: ");
    scanf("%d",&pos);

    ptr=h;
    while(i!=pos)
    {
        i=i+1;
        ptr=ptr->next;
    }
    h2=ptr->next;
    ptr->next=NULL;

    printf("After Split, First Linked List Are:\n");
    while(h1!=NULL)
    {
        printf("%d ",h1->value);
        h1=h1->next;
    }

    printf("\n");
    printf("After Split, Second Linked List Are:\n");
    while(h2!=NULL)
    {
        printf("%d ",h2->value);
        h2=h2->next;
    }
    return 0;
}