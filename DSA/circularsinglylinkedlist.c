#include <stdio.h>
#include <stdlib.h>

typedef struct node // Structure defining!!
{
    int data;
    struct node *next;
} node;

node *head = NULL;
node *tail = NULL;
node *temp = NULL;

int length() // Function to calculate Number of nodes!!
{
    node *temp = head;
    if (head == NULL)
    {
        return 0;
    }
    int length = 1;

    while (temp != tail)
    {
        temp = temp->next;
        length++;
    }

    return length;
}

void insert() // Function to add New node!!
{
    node *newnode = (node *)malloc(sizeof(node));

    printf("Enter the value :  ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (head == NULL && tail == NULL)
    {
        head = tail = temp = newnode;
        newnode->next = head;
    }

    else
    {
        temp->next = newnode;
        temp = tail = newnode;
        newnode->next = head;
    }
}

void display() // Function to display the elements!
{
    node *temp = head;

    do
    {
        printf("%d \n", temp->data);
        temp = temp->next;
    } while (temp != head);
}

void insertatbeginning() // Function to insert node at first
{
    if (head == NULL)
    {
        insert();
    }

    else
    {
        node *newnode = (node *)malloc(sizeof(node));

        printf("Enter the value :  ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        newnode->next = head;
        head = newnode;
        tail->next = head;
    }
}

void insertatlast() // Function to insert node at last
{
    if (head == NULL)
    {
        insert();
    }

    else
    {
        node *newnode = (node *)malloc(sizeof(node));

        printf("Enter the value :  ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        temp->next = newnode;
        newnode->next = head;
        temp = tail = newnode;
    }
}

void insertafter(int n) // Function to insert node after a particular data - Given by the user!!!
{
    node *temp = head;
    if (head == NULL)
    {
        printf("List is empty \n");
    }

    else
    {
        do
        {
            if (temp->data == n)
            {
                break;
            }
            temp = temp->next;
        } while (temp != head);

        if (temp == head && temp->data != n)
        {
            printf("NO DATA FOUND !! \n");
        }

        else
        {
            if (temp == tail)
            {
                insertatlast();
            }
            else
            {
                node *newnode = (node *)malloc(sizeof(node));

                printf("Enter the value :  ");
                scanf("%d", &newnode->data);
                newnode->next = NULL;

                newnode->next = temp->next;
                temp->next = newnode;
            }
        }
    }
}

void insertbefore(int n) // Function to insert node before a particular data - Given by the user!!!
{
    node *temp = head, *prev = NULL;
    if (head == NULL)
    {
        printf("List is empty \n");
    }

    else
    {
        do
        {
            if (temp->data == n)
            {
                break;
            }
            prev = temp;
            temp = temp->next;
        } while (temp != head);

        if (temp == head && temp->data != n)
        {
            printf("NO DATA FOUND !! \n");
        }

        else
        {
            if (length() == 1 || prev == NULL)
            {
                insertatbeginning();
            }
            else
            {
                node *newnode = (node *)malloc(sizeof(node));

                printf("Enter the value :  ");
                scanf("%d", &newnode->data);
                newnode->next = NULL;

                newnode->next = temp;
                prev->next = newnode;
            }
        }
    }
}

void insertat(int n) // Function to insert node at particular position- Given by the user!!!
{
    if (length() < n)
    {
        printf("Wrong position");
    }

    else
    {
        node *newnode = (node *)malloc(sizeof(node));

        if (length() == 1)
        {
            insertatbeginning();
        }

        else
        {
            printf("Enter the value :  ");
            scanf("%d", &newnode->data);
            newnode->next = NULL;

            node *temp = head, *prev = NULL;
            int i = 0;
            do
            {
                prev = temp;
                temp = temp->next;
                i++;
            } while (i < n - 1);

            prev->next = newnode;
            newnode->next = temp;
        }
    }
}

void deleteatbeginning() // Function to delete node at the first position!!!
{
    node *tem = head;
    if (head == NULL)
    {
        printf("List is empty \n");
    }

    else
    {
        head = head->next;
        tail->next = head;
        tem->next = NULL;
        free(tem);
        tem = NULL;
    }
}

void deleteatlast() // Function to delete node at the last position!!!
{

    if (head == NULL)
    {
        printf("List is empty \n");
    }

    else
    {
        node *tem = head;

        while (tem->next != tail)
        {
            tem = tem->next;
        }

        tail = tem;
        tem = temp;
        tail->next = head;

        tem->next = NULL;
        free(tem);
        tem = NULL;
        temp = tail;
    }
}

void deleteafter(int n) // Function to delete node after some data X - Given by the user!!!
{
    node *temp = head, *tem = NULL;
    if (head == NULL)
    {
        printf("List is empty \n");
    }

    else
    {
        do
        {
            if (temp->data == n)
            {
                break;
            }
            temp = temp->next;
        } while (temp != head);

        tem = temp->next;

        if (temp == head && temp->data != n)
        {
            printf("NO DATA FOUND !! \n");
        }

        else
        {
            if (temp == tail)
            {
                printf("NO DATA AFTER THIS DATA \n");
            }

            else if (tem == tail)
            {
                deleteatlast();
            }

            else
            {
                temp->next = tem->next;
                tem->next = NULL;
                free(tem);
                tem = NULL;
            }
        }
    }
}

void deletebefore(int n) // Function to delete node before some data X - Given by the user!!!
{
    node *temp = head, *tem = NULL, *prev = head;
    if (head == NULL)
    {
        printf("List is empty \n");
    }

    else
    {
        do
        {
            if (temp->data == n)
            {
                break;
            }
            tem = temp;
            temp = temp->next;
        } while (temp != head);

        if (temp == head && temp->data != n)
        {
            printf("NO DATA FOUND !! \n");
        }

        else
        {
            if (temp == head)
            {
                printf("NO DATA BEFORE THIS DATA \n");
            }

            else if (tem == head)
            {
                deleteatbeginning();
            }

            else
            {
                while (prev->next != tem)
                {
                    prev = prev->next;
                }
                prev->next = temp;
                tem->next = NULL;
                free(tem);
                tem = NULL;
            }
        }
    }
}

void deleteat(int n) // Function that delete the node which is at a particular position!
{
    if (length() < n)
    {
        printf("Wrong position");
    }

    else
    {

        if (length() == 1)
        {
            deleteatbeginning();
        }
        else if (length() == n)
        {
            deleteatlast();
        }
        else
        {
            node *temp = head, *prev = NULL;
            int i = 0;
            do
            {
                prev = temp;
                temp = temp->next;
                i++;
            } while (i < n - 1);

            prev->next = temp->next;
            temp->next = NULL;
            free(temp);
            temp = NULL;
        }
    }
}

void reverse() // A classic function to reverse the linked list!!
{
    if (length() == 1 || length() == 0)
    {
        printf("No need of reversing \n");
    }

    else
    {
        node *prev = NULL;
        node *current = head;

        node *Next;

        do
        {
            Next = current->next;
            current->next = prev;
            prev = current;
            current = Next;

        } while (current != head);

        head->next = prev;
        tail = temp = head;
        head = prev;
    }
}

int main()
{
    int a, x;

    while (a != 14) // Asking user for inputs to perform certain functions!!
    {
        printf("What you want to perform ???  [1]:-Insert , [2]:-Display , [3]:- Insert at beginning , [4]:- Insert at last , [5]:- Insert after , [6]:- Insert before , [7]:- Insert at , [8]:-Delete at beginning , [9]:- Delete at last , [10]:- Delete after , [11]:- Delete before , [12]:- Delete at , [13]:- Reverse  :   ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            insert();
            break;

        case 2:
            display();
            break;

        case 3:
            insertatbeginning();
            break;

        case 4:
            insertatlast();
            break;

        case 5:

            printf("Enter the data : ");
            scanf("%d", &x);
            insertafter(x);
            break;

        case 6:
            printf("Enter the data : ");
            scanf("%d", &x);
            insertbefore(x);
            break;

        case 7:
            printf("Enter the position : ");
            scanf("%d", &x);
            insertat(x);
            break;

        case 8:
            deleteatbeginning();
            break;

        case 9:
            deleteatlast();
            break;

        case 10:
            printf("Enter the data : ");
            scanf("%d", &x);
            deleteafter(x);
            break;

        case 11:
            printf("Enter the data : ");
            scanf("%d", &x);
            deletebefore(x);
            break;

        case 12:
            printf("Enter the position : ");
            scanf("%d", &x);
            deleteat(x);
            break;

        case 13:
            reverse();
            break;

        case 14:
            break;

        default:
            printf("Choose a valid Option \n ");
        }
    }
}