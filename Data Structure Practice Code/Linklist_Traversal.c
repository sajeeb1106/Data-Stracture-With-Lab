#include<stdio.h>
#include<stdlib.h>

struct student
{
    int value;
    struct student *next;
};

typedef struct student node;

node  *p, *q, *h;   // h is for head, p is for dynamic Address, q is for temporary variable

int main()
{
   int x;
   h=0;
   q=0;

   for(; ;)
   {
       printf("Enter any value (negative  to stop): ");
       scanf("%d", &x);

       if(x<0)
       {
           break;
       }
       else
       {
           p=(node*)malloc(sizeof(node));     // malloc means memory location

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
       printf("%d %d\n", PTR, PTR-> value);
       PTR=PTR->next;
   }
   return 0;
}