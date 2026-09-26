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
    float x;

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
        if(PTR->value==48.2)
        {
            printf("48.2 Found");
            return 0;
        }

        PTR=PTR->next;
    }

    printf("48.2 Not Found");

    return 0;
}