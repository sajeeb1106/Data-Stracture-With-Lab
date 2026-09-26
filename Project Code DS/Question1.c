#include<stdio.h>
#include<stdlib.h>

struct student
{
    float value;
    struct student *next;
};

typedef struct student node;

node *p,*q,*h;

int main()
{
    float x, ZZ=75.5;

    h=0;
    q=0;

    for(;;)
    {
        printf("Enter any value (negative to stop): ");
        scanf("%f",&x);

        if(x<0)
            break;

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

    node *PTR=h;

    while(PTR!=NULL)
    {
        if(PTR->value==ZZ)
        {
            node *newNode=(node*)malloc(sizeof(node));
            newNode->value=72.2;
            newNode->next=PTR->next;
            PTR->next=newNode;
            break;
        }
        PTR=PTR->next;
    }

    printf("\nFinal Linked List:\n");

    PTR=h;

    while(PTR!=NULL)
    {
        printf("%.1f\n",PTR->value);
        PTR=PTR->next;
    }

    return 0;
}