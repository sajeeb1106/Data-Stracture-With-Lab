#include<stdio.h>
#include<stdlib.h>

struct student
{
    int value;
    struct student *next;
};

typedef struct student node;

node *p1,*q1,*h1,*p2,*q2,*h2;

int main()
{
    int x;

    h1=0;
    q1=0;
    h2=0;
    q2=0;

    printf("First Linked List:\n");
    for( ; ;)
    {
        printf("Enter your value (Negative to Stop): ");
        scanf("%d",&x);
        
        if(x<0)
        {
            break;
        }
        else
        {
            p1=(node*)malloc(sizeof(node));

            p1->value=x;
            p1->next=NULL;

            if(h1==0)
            {
                h1=p1;
                q1=p1;
            }
            else
            {
                q1->next=p1;
                q1=p1;
            }
        }   
    }

    printf("\nFirst linked list values are:\n");

    node *ptr1=h1;

    while(ptr1!=NULL)
    {
        printf("%d ",ptr1->value);
        ptr1=ptr1->next;
    }

    printf("\nSecond Linked List:\n");
    for( ; ;)
    {
        printf("Enter your value (Negative to Stop): ");
        scanf("%d",&x);
        if(x<0)
        {
            break;
        }
        else
        {
            p2=(node*)malloc(sizeof(node));

            p2->value=x;
            p2->next=NULL;

            if(h2==0)
            {
                h2=p2;
                q2=p2;
            }
            else
            {
                q2->next=p2;
                q2=p2;
            }
        }    
    }

    printf("\nSecond linked list values are:\n");

    node *ptr2=h2;

    while(ptr2!=NULL)
    {
        printf("%d ",ptr2->value);
        ptr2=ptr2->next;
    }

    node *h=h1;

    node *ptr=h1;

    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=h2;
        
    printf("\n\nAfter merge, linked list values are:\n");

    node *ptr3=h;

    while(ptr3!=NULL)
    {
        printf("%d ",ptr3->value);
        ptr3=ptr3->next;
    }

    return 0;
}