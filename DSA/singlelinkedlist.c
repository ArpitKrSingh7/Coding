// ARPIT KUMAR SINGH - CS23I1022 - Dual Degree

#include <stdio.h>
#include <stdlib.h>

typedef struct node // Defining the structure
{
    int data;
    struct node *next;
} node;

node *head = NULL,*temp = NULL; // Initializing the head variable

void create() // Creating function
{
    node *newnode;

    newnode = (node *)malloc(sizeof(node));

    printf("Enter the Element Value : ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if (head == NULL) // Checking if head = NULL or what!
    {
        head = newnode;
        temp = head;
    }

    else // Main logic for adding node
    {
        temp->next = newnode;
        temp = newnode;
    }
}

void display() // Display Function
{
    node *temp = head;

    if (head == NULL) // Checking if head = NULL or what!
    {
        printf("Linked list is empty\n");
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

void addbeginning() // Function to insert at the first position
{
    node *newnode;

    newnode = (node *)malloc(sizeof(node));

    printf("Enter the Element Value : ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }

    else
    {
        newnode->next = head;
        head = newnode;
    }
}

void addlast() // Function to insert at the last position
{
    node *newnode, *temp = head;

    newnode = (node *)malloc(sizeof(node));

    printf("Enter the Element Value : ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
}

int length() // function to find the number of nodes
{
    int length = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }

    return length;
}

void insertposition(int n) // Function to insert at a particular position
{
    node *newnode, *temp = head;
    int i = 1;

    newnode = (node *)malloc(sizeof(node));

    printf("Enter the Element Value : ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if (n > length()) // How we can insert an element at a position which doesn't exist
    {
        printf("Wrong position\n");
    }

    else if (length() == 0)
    {
        head = newnode;
    }

    else
    {

        if (head == NULL)
        {
            head = newnode;
        }

        else
        {
            while (i != n - 1)
            {
                temp = temp->next;
                i++;
            }

            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
}

void deletebeginning() // Function to delete at beginning position
{
    node *temp = head;
    if (head == NULL)
    {
        printf("Nothing to delete\n");
    }

    else
    {

        head = temp->next;
        temp->next = NULL;
        free(temp);
    }
}

void deletelast() // Function to delete at last position
{
    node *temp = head;
    if (head == NULL) // How we can delete an element if list is empty
    {
        printf("Nothing to delete\n");
    }

    else if (length() == 1)
    {
        head = NULL;
    }
    else
    {
        for (int i = 1; i < length() - 1; i++) // Pointing temp to last position
        {
            temp = temp->next;
        }

        temp->next = NULL;
    }
}

void deleteposition(int n) // Function to delete at a particular position
{
    node *temp = head, *ahead = temp->next;
    int i = 1;

    if (n > length())
    {
        printf("Wrong position\n");
    }
    else
    {

        if (head == NULL) // How we can delete an element if list is empty
        {
            printf("Nothing to delete\n");
        }
        else if (length() == 1)
        {
            head = NULL;
        }
        else
        {
            while (i != n - 1)
            {
                temp = temp->next;
                ahead = temp->next;
                i++;
            }

            temp->next = ahead->next;
            ahead->next = NULL;
            free(ahead);
        }
    }
}

void reverselist() // Function to reverse the whole elements
{
    node *temp = head; // Using 3 pointers to reverse the list

    if (head == NULL)
    {
        printf("Linked list is empty\n");
    }

    else if (length() == 1)
    {
        printf("No need of reversing");
    }

    else
    {
        node *ahead = temp->next, *prev = NULL;
        while (ahead != NULL) // used switch pointer technique to reverse the list
        {
            temp->next = prev;
            prev = temp;
            temp = ahead;
            ahead = ahead->next;
            temp->next = prev;
        }

        head = temp;
    }
}

int main() // main function
{
    int a = 0, n;

    while (a != 10)
    {
        printf("What you want to perform? [1]: Create , [2]: Display , [3]: add beginning , [4]: add last , [5]: Insert at position , [6]: Delete beginning , [7]: Delete last , [8]: Delete at position , [9]: Reverse list , [10] : Exit : ");
        scanf("%d", &a);

        switch (a) // Consistently asks user for options until he chooses EXIT option
        {
        case 1:
            create();
            break;

        case 2:
            display();
            break;

        case 3:
            addbeginning();
            break;

        case 4:
            addlast();
            break;

        case 5:
            printf("Enter position : ");
            scanf("%d", &n);
            insertposition(n);
            break;

        case 6:
            deletebeginning();
            break;

        case 7:
            deletelast();
            break;

        case 8:
            printf("Enter position : ");
            scanf("%d", &n);
            deleteposition(n);
            break;

        case 9:
            reverselist();
            break;

        case 10:
            printf("Arpit singh's program Shining off \n");
            break;

        default:
            printf("Choose a valid option\n");
        }
    }
}
