#include <stdio.h>
#include <stdlib.h>

typedef struct node // Global declaration of node structure
{
    int data;
    struct node *next;
    struct node *prev;
} node;

node *head = NULL; // Global declaration of structure pointers!
node *tail = NULL;
node *prev = NULL;
node *temp = NULL;

void create() // Function to create a node
{
    node *newnode;
    newnode = (node *)malloc(sizeof(node *));

    printf("Enter the data : ");
    scanf("%d", &newnode->data);

    newnode->next = newnode->prev = NULL;

    if (temp == NULL)
    {
        temp = head = tail = newnode;
    }

    else
    {
        newnode->prev = temp;
        temp->next = newnode;
        temp = tail = newnode;
    }
}

void display_start() // Function to display node values in forward direction
{
    node *temp = head;
    if (temp == NULL)
    {
        printf("List is empty\n");
    }

    else
    {
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

void display_end() // Function to display node values in reverse direction
{
    node *temp = tail;
    if (temp == NULL)
    {
        printf("List is empty\n");
    }

    else
    {
        while (temp != NULL)
        {
            printf("%d \n", temp->data);
            temp = temp->prev;
        }
    }
}

int length() // A function that returns number of nodes
{
    int length = 0;
    node *temp = head;

    while (temp != 0)
    {
        length++;
        temp = temp->next;
    }

    return length;
}

void addfirst() // Function to add node at first position
{
    if (head == NULL)
    {
        create();
    }

    else
    {
        node *newnode;
        newnode = (node *)malloc(sizeof(node *));

        printf("Enter the data : ");
        scanf("%d", &newnode->data);

        newnode->next = newnode->prev = NULL;

        head->prev = newnode;
        newnode->next = head;

        head = newnode;
    }
}

void addlast() // Function to add node at last position
{
    if (tail == NULL)
    {
        create();
    }

    else
    {
        node *newnode;
        newnode = (node *)malloc(sizeof(node *));

        printf("Enter the data : ");
        scanf("%d", &newnode->data);

        newnode->next = newnode->prev = NULL;

        tail->next = newnode;
        newnode->prev = tail;

        temp = tail = newnode;
    }
}

void addposition(int n) // Function to add node at particular position
{

    if (n > length())
    {
        printf("Invalid Position \n");
        return;
    }

    node *temp = head;

    if (n == 1)
    {
        addfirst();
    }

    else if (n == length())
    {
        addlast();
    }

    else
    {
        node *newnode, *pre = NULL;
        int i = 0;
        newnode = (node *)malloc(sizeof(node *));

        printf("Enter the data : ");
        scanf("%d", &newnode->data);

        newnode->next = newnode->prev = NULL;

        while (i < n - 1)
        {
            pre = temp;
            temp = temp->next;
            i++;
        }

        pre->next = newnode;
        newnode->prev = pre;
        newnode->next = temp;
        temp->prev = newnode;
    }
}

void deletefirst() // Function to delete the first node
{
    node *temp = head;

    if (head == NULL)
    {
        printf("List is empty \n");
    }

    if (length() == 1)
    {
        temp->next = NULL;
        head = tail = NULL;
        free(temp);
        temp = NULL;
    }

    else
    {
        head = temp->next;
        head->prev = NULL;
        temp->next = NULL;
        free(temp);
        temp = NULL;
    }
}

void deletelast() // Function to delete the last node
{
    node *temp = tail;

    if (tail == NULL)
    {
        printf("List is empty \n");
    }

    if (length() == 1)
    {
        temp->next = NULL;
        head = tail = NULL;
        free(temp);
        temp = NULL;
    }

    else
    {
        tail = temp->prev;
        tail->next = NULL;
        temp->prev = NULL;
        free(temp);
        temp = NULL;
    }
}

void deleteposition(int n) // A function to delete a particular node
{
    if (n > length())
    {
        printf("Invalid Position \n");
        return;
    }

    node *temp = head;

    if (n == 1)
    {
        deletefirst();
    }

    else if (n == length())
    {
        deletelast();
    }

    else
    {
        node *pre = NULL, *pos = NULL;
        int i = 0;

        while (i < n - 1)
        {
            pre = temp;
            temp = temp->next;
            i++;
        }
        pos = temp;
        temp = temp->next;
        pos->next = NULL;
        pos->prev = NULL;
        free(pos);
        pos = NULL;

        pre->next = temp;
        temp->prev = pre;
    }
}

void reverse() // A classical function to reverse the nodes
{
    if (head == NULL)
    {
        printf("List is empty \n");
    }

    else if (length() == 1)
    {
        printf("No need of reversing\n");
    }

    else
    {
        // int i=1;
        node *tem = head;
        node *m = NULL;

        while (tem != NULL)
        {
            // m=tem -> next;
            // tem -> next = tem -> prev;
            // tem -> prev = m;

            // tem = m;
            // i++;

            m = tem->prev;
            tem->prev = tem->next;
            tem->next = m;
            tem = tem->prev;
        }

        m = head;
        head = tail;
        tail = m;
        temp = m;
    }
}

int main()
{
    int a = 0;

    while (a != 11) // Asking user for valid inputs
    {
        printf("What you want to perform? [1]: create , [2]: display_Start , [3]: display_Endn , [4]: Add first: , [5]: Add last , [6]: addposition , [7]: Deletefirst , [8]: Delete Last , [9]: Delete position , [10]: Reverse , [11]: Exit : ");
        scanf("%d", &a);

        switch (a)
        {
        case 1:
            create();
            break;

        case 2:
            display_start();
            break;

        case 3:
            display_end();
            break;

        case 4:
            addfirst();
            break;

        case 5:
            addlast();
            break;

        case 6:
            int n;
            printf("Enter the position : ");
            scanf("%d", &n);
            addposition(n);
            break;

        case 7:
            deletefirst();
            break;

        case 8:
            deletelast();
            break;

        case 9:
            printf("Enter the position : ");
            scanf("%d", &n);
            deleteposition(n);
            break;

        case 10:
            reverse();
            break;

        default:
            printf("Choose a valid option\n");
            break;
        }
    }
}