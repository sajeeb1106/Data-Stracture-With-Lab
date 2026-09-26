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
    float x,max;

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

    max=PTR->value;

    while(PTR!=NULL)
    {
        if(PTR->value>max)
            max=PTR->value;

        PTR=PTR->next;
    }

    printf("Largest Value = %.1f",max);

    return 0;
}