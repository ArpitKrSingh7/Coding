#include <stdio.h>

#define maxsize 100

int front = -1 , rear = -1;
int queue [maxsize];


void enqueue()
{
     if(rear == maxsize-1)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  

    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        printf("Enter the data : ");
        scanf("%d", &queue[rear]);
    }

    else
    {
        printf("Enter the data : ");
        scanf("%d", &queue[++rear]);
    }
}

void display()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty!!\n");
    }

    else
    {
        for(int i = front ; i<=rear ; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}

void frontmost()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty!!\n");
    }

    else
    {
        printf("Frontmost element is %d\n",queue[front]);
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("UnderFlow\n");
    }

    else
    {

        if(front == rear)
        {
            front = rear = -1;
        }

        else
        {
            front++;
        }

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