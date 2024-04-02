#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
}stack;

stack *top=NULL;

void push()
{
    stack *newnode;

    newnode = (stack *)malloc(sizeof(stack));
    printf("Enter the data : ");
    scanf("%d",&newnode -> data);

    newnode -> next = NULL;

    if(top == NULL)
    {
        top = newnode;
    }

    else
    {
        newnode -> next = top;
        top = newnode;
    }
}

void display ()
{
    stack *temp = top;
    if(temp == NULL)
    {
        printf("Stack is Empty!!\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d\n",temp -> data);
            temp = temp -> next;
        } 
    }
    
}

void pop()
{
    stack *temp = top;
    if(temp == NULL)
    {
        printf("Stack is Empty!!\n");
    }

    else
    {
        top = top->next;
        temp -> next = NULL;
        free(temp);
        temp = NULL;
    }
}

void peek()
{
    printf("Top most element is %d \n",top->data);
}

int main ()
{
    int a=0;
    while(1)
    {
        printf("What you want to do? [1]:-Push , [2]:-Pop , [3]:-Peek , [4]:-Display , [5]:-exit : ");
        scanf("%d",&a);


        if(a==1)
        {
            push();
        }

        if(a==2)
        {
            pop();
        }
        if(a==3)
        {
            peek();
        }

        if(a==4)
        {
            display();
        }

        if(a==5)
        {
            printf("Thanks,See you next time!");
            break;
        }
    }
    
}