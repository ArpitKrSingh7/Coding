#include <stdio.h>
#include <stdlib.h>

typedef struct node // Defining structure using typedef and different variables
{
    struct node *next;
    struct node *prev;
    int data;
} node;

node *temp = NULL; // Defining some structure variables like head,tail etc
node *head = NULL;
node *tail = NULL;

int length() // Calculate length
{
    node *temp = head;

    int length = 1;
    if (head == NULL)
    {
        return 0;
    }

    else
    {
        while (temp != tail)
        {
            temp = temp->next;
            length++;
        }

        return length;
    }
}

void create() // Creating nodes
{
    node *newnode = (node *)malloc(sizeof(node));
    printf("Enter the data : ");
    scanf("%d", &newnode->data);

    newnode->next = newnode->prev = NULL;

    if (head == NULL)
    {
        head = temp = tail = newnode;
        head->next = head;
        tail->prev = tail;
    }

    else
    {
        temp->next = newnode;
        temp = temp->next;
        temp->prev = tail;
        tail = temp;
        tail->next = head;
        head->prev = tail;
    }
}

void display_forward() // Displaying objects in forward direction
{
    node *temp = head;

    do
    {
        printf("%d \n", temp->data);
        temp = temp->next;

    } while (temp != head);
}

void display_reverse() // Displaying objects in reverse direction
{
    node *temp = tail;

    do
    {
        printf("%d \n", temp->data);
        temp = temp->prev;

    } while (temp != tail);
}

void add_first() // Adding nodes at first position
{
    if (head == NULL)
    {
        create();
    }

    else
    {
        node *newnode = (node *)malloc(sizeof(node));
        printf("Enter the data : ");
        scanf("%d", &newnode->data);

        newnode->next = newnode->prev = NULL;

        head->prev = newnode;
        newnode->next = head;
        head = newnode;
        head->prev = tail;
        tail->next = head;
    }
}

void add_last() // adding nodes at last position
{
    if (head == NULL)
    {
        create();
    }

    else
    {
        node *newnode = (node *)malloc(sizeof(node));
        printf("Enter the data : ");
        scanf("%d", &newnode->data);

        newnode->next = newnode->prev = NULL;

        newnode->prev = tail;
        tail->next = newnode;

        tail = temp = tail->next;
        tail->next = head;
        head->prev = tail;
    }
}

void add_after(int n) // add nodes after a particular data given by user
{
    node *tem = head;

    if (head == NULL)
    {
        printf("Nothing to search for!! \n");
    }

    else
    {
        int a = length();
        while (tem->data != n && a >= 0)
        {
            tem = tem->next;
            a--;
        }
        if (a == -1)
        {
            printf("NO SUCH DATA FOUND \n");
        }

        else if (tem == tail)
        {
            add_last();
        }

        else
        {
            node *newnode = (node *)malloc(sizeof(node));
            printf("Enter the data : ");
            scanf("%d", &newnode->data);

            newnode->next = newnode->prev = NULL;

            newnode->prev = tem;
            newnode->next = tem->next;
            tem->next->prev = newnode;
            tem->next = newnode;
        }
    }
}

void add_before(int n) // add nodes before a particular data given by user
{
    node *tem = head;

    if (head == NULL)
    {
        printf("Nothing to search for!! \n");
    }

    else
    {
        int a = length();
        while (tem->data != n && a >= 0)
        {
            tem = tem->next;
            a--;
        }
        if (a == -1)
        {
            printf("NO SUCH DATA FOUND \n");
        }

        else if (tem == head)
        {
            add_first();
        }

        else
        {
            node *newnode = (node *)malloc(sizeof(node));
            printf("Enter the data : ");
            scanf("%d", &newnode->data);

            newnode->next = newnode->prev = NULL;

            newnode->next = tem;
            newnode->prev = tem->prev;
            tem->prev->next = newnode;
            tem->prev = newnode;
        }
    }
}

void add_at(int n) // add nodes at a particular position given by user
{
    if (length() < n)
    {
        printf("Wrong position !!\n");
    }

    else if (head == NULL)
    {
        create();
    }

    else if (length() == n)
    {
        add_last();
    }

    else if (n == 1)
    {
        add_first();
    }

    else
    {
        node *tem = head;
        int i = n - 2;
        while (i > 0)
        {
            tem = tem->next;
            i--;
        }

        node *newnode = (node *)malloc(sizeof(node));
        printf("Enter the data : ");
        scanf("%d", &newnode->data);

        newnode->next = tem->next;
        tem->next = newnode;
        newnode->prev = tem;
    }
}

void delete_first() // delete node at first
{
    if (head == NULL)
    {
        printf("List is empty \n");
    }

    else if (head->next == head)
    {
        head->next = NULL;
        head->prev = NULL;
        free(head);
        free(temp);
        free(tail);
        head = tail = temp = NULL;
    }

    else
    {
        node *tem = head;
        head = head->next;
        head->prev = tail;
        tem->next = NULL;
        tem->prev = NULL;
        free(tem);
        tem = NULL;
        tail->next = head;
    }
}

void delete_last() // delete node at last
{
    if (head == NULL || head->next == head)
    {
        delete_first();
    }

    else
    {
        node *tem = tail;
        tail = tail->prev;
        tail->next = head;
        tem->next = NULL;
        tem->prev = NULL;
        free(tem);
        tem = NULL;
        head->prev = tail;
    }
}

void delete_after(int n) // deleting nodes after a particular data given by user
{
    node *tem = head;

    if (head == NULL)
    {
        printf("Nothing to search for!! \n");
    }

    else
    {
        int a = length();
        while (tem->data != n && a >= 0)
        {
            tem = tem->next;
            a--;
        }
        if (a == -1)
        {
            printf("NO SUCH DATA FOUND \n");
        }

        else if (tem == tail)
        {
            printf("Noting is after this data!! \n");
        }

        else if (tem->next == tail)
        {
            delete_last();
        }

        else
        {
            node *curr = tem->next;

            tem->next = curr->next;
            curr->next->prev = tem;

            curr->next = curr->prev = NULL;
            free(curr);
            curr = NULL;
        }
    }
}

void delete_before(int n) // deleting nodes before a particular data given by user
{
    node *tem = head;

    if (head == NULL)
    {
        printf("Nothing to search for!! \n");
    }

    else
    {
        int a = length();
        while (tem->data != n && a >= 0)
        {
            tem = tem->next;
            a--;
        }
        if (a == -1)
        {
            printf("NO SUCH DATA FOUND \n");
        }

        else if (tem == head)
        {
            printf("NO DATA TO DELETE \n");
        }

        else if (tem->prev == head)
        {
            delete_first();
        }

        else
        {
            node *curr = tem->prev;

            tem->prev = curr->prev;
            curr->prev->next = tem;

            curr->next = curr->prev = NULL;
            free(curr);
            curr = NULL;
        }
    }
}

void delete_at(int n) // deleting nodes at a particular location given by user
{
    if (length() < n)
    {
        printf("Wrong position !!\n");
    }

    else if (head == NULL)
    {
        printf("Nothing to delete \n");
    }

    else if (length() == n)
    {
        delete_last();
    }

    else if (n == 1)
    {
        delete_first();
    }

    else
    {
        node *tem = head;
        int i = n - 1;
        while (i > 0)
        {
            tem = tem->next;
            i--;
        }

        tem->prev->next = tem->next;
        tem->next->prev = tem->prev;

        tem->next = tem->prev = NULL;
    }
}

int main() // main function
{
    int a = 0, x;

    while (a != 14) // Calling out user for multiple inputs using switch case and while loop
    {
        printf("What you want to perform? : [1]:- Create , [2]:- Display forward , [3]:- Display reverse , [4]:- add_first , [5]:- add_last , [6]:- add_after , [7]:- add_before , [8]:- add_at , [9]:- delete_first , [10]:- delete_last , [11]:- delete_after , [12]:- delete_before , [13]:- delete_at , [14]:- EXIT : ");
        scanf("%d", &a);

        switch (a)
        {

        case 1:
            create();
            break;

        case 2:
            display_forward();
            break;

        case 3:
            display_reverse();
            break;

        case 4:
            add_first();
            break;

        case 5:
            add_last();
            break;

        case 6:
            printf("Enter the data : ");
            scanf("%d", &x);
            add_after(x);
            break;

        case 7:
            printf("Enter the data : ");
            scanf("%d", &x);
            add_before(x);
            break;

        case 8:
            printf("Enter the position : ");
            scanf("%d", &x);
            add_at(x);
            break;

        case 9:
            delete_first();
            break;

        case 10:
            delete_last();
            break;

        case 11:
            printf("Enter the data : ");
            scanf("%d", &x);
            delete_after(x);
            break;

        case 12:
            printf("Enter the data : ");
            scanf("%d", &x);
            delete_before(x);
            break;

        case 13:
            printf("Enter the position : ");
            scanf("%d", &x);
            delete_at(x);
            break;

        case 14:
            printf("Thank you !! see you again !! \n");
            break;

        default:
            printf("Wrong input !! Please select a valid option !! \n");
        }
    }
}