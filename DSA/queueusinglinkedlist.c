#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int data;
    struct queue *next;
}queue;

queue *front = NULL , *rear = NULL;

void enqueue()
{
    queue *newnode;

    newnode = (queue *)malloc(sizeof(queue));
    printf("Enter the data : ");
    scanf("%d",&newnode -> data);
    newnode -> next = NULL;

    if(front == NULL || rear  == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear -> next = newnode;
        rear = newnode;
    }

}

void display ()
{
    if(front == NULL || rear  == NULL)
    {
        printf("Queue is empty \n");
    }

    else
    {
        queue *temp = front;
        while(temp!=NULL)
        {
            printf("%d \n",temp -> data);
            temp = temp -> next;
        }
    }
}

void dequeue ()
{
    if(front == NULL)
    {
        printf("Underflow \n");
    }

    else
    {
        if(front == rear )
        {
            front = rear = NULL;
        }
        else
        {
            queue *temp = front;
            front = front -> next;
            temp -> next = NULL;
            free(temp);
            temp = NULL;
        }
        
    }
}

void frontmost()
{
    if(front == NULL)
    {
        printf("Underflow\n");
    }

    else
    {
        printf("%d \n", front->data);
    }
}

int main()
{

    int a=0;
    while(1)
    {
        printf("What you want to do? [1]:- Enqueue , [2]:- Dequeue , [3]:- Front , [4]:- Display , [5]:-exit : ");
        scanf("%d",&a);


        if(a==1)
        {
            enqueue();
        }

        if(a==2)
        {
            dequeue();
        }
        if(a==3)
        {
            frontmost();
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