#include <stdio.h>
#include <limits.h>
void pop();
void push();
void peek();
void display();

int  main()
{

    int arr[100],top=-1,a=0,i=0;
    while(1)
    {
        printf("What you want to do? [1]:-Push , [2]:-Pop , [3]:-Peek , [4]:-Display , [5]:-exit : ");
        scanf("%d",&a);


        if(a==1)
        {
            push(arr,&top);
        }

        if(a==2)
        {
            pop(arr,&top);
        }
        if(a==3)
        {
            peek(arr,&top);
        }

        if(a==4)
        {
            display(arr,&top);
        }

        if(a==5)
        {
            printf("Thanks,See you next time!");
            break;
        }
    }
    while(i!=top+1)
    {
        printf("%d ",arr[i]);
        i++;
    }
}

void display(int arr[],int *t)
{
    for(int i=0;i<=*t;i++)
    {
        printf("%d\n",arr[i]);
    }
}

void push(int arr[],int *t)
{
    if(*t==99)
    {
        printf("Stack overflow \n");
    }

    else
    {
        (*t)++;
        printf("Enter the element : ");
        scanf("%d",&arr[*t]);
    }
    
}

void pop(int arr[],int *t)
{
    if(*t==-1)
    {
        printf("ERROR,No element present! \n");
    }

    else
    {
        (*t)--;
    }
}

void peek(int arr[],int *t)
{
    printf("Topmost element is %d\n",arr[*t]);
}
