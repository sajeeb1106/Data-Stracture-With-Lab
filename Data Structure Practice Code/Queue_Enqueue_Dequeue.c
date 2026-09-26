#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r=-1, f=-1, n, Invalue, key, i;

    printf("Enter the Capacity of Queue: ");
    scanf("%d", &n);

    int q[n], max=n-1;

    while(1)
    {
        printf("Enter 1 to Enqueue: \n");
        printf("Enter 2 to Dequeue: \n");
        printf("Enter 3 to Output: \n");
        printf("Enter any key to Exit: \n");
        scanf("%d", &key);

        if(key==1)
        {
            printf("Enter Your insert value: ");
            scanf("%d", &Invalue);
            if(r==max)
            {
                printf("The Queue is Full.\n");
            }
            else
            {
                if(r==-1)
                {
                    r=0;
                    f=0;
                }
                else
                {
                    r=r+1;
                }
                q[r]=Invalue;
                printf("The Number is successfully Inserted.\n");
            }
        }
        else if(key==2)
        {
            if(f==-1 || f>r)
            {
                printf("The Queue is Empty.\n");
            }
            else
            {
                q[f]=0;
                f++;
                printf("The Number is successfully deleted.\n");
            }

        }
        else if(key==3)
        {
            printf("The Queue values are.\n");
            for(i=f; i<=r ;i++)
            {
                printf("%d is at index %d\n", q[i], i);
            }
        }
        else
        {
            exit(0);
        }
    }
    return 0;
}
