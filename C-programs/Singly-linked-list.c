//Author: Sanjana Sawant

#include <stdio.h>
#include <stdlib.h>

struct linked {
    int val;
    struct linked *next;
};

typedef struct linked node;
node *head=NULL;


node *getnode();
void create_list();
void insert_node();
void delete_node();
void display_list();

void insert_at_beg();
void insert_at_end();
void insert_at_mid();

void delete_at_beg();
void delete_at_end();
void delete_at_mid();

int countnode(node *st);


int main()
{
    int n;

    while(1)
    {
    printf("\n------------------------------------");
    printf("\n1. Create a Linked List");
    printf("\n2. Insert a Node");
    printf("\n3. Delete a Node");
    printf("\n4. Display all elements");
    printf("\n5. Exit");
    printf("\n------------------------------------");
    printf("\nSelect any one option (1-5): ");
    scanf("%d",&n);

        switch (n){
            case 1: create_list();
                    break;
            case 2: insert_node();
                    break;
            case 3: delete_node();
                    break;
            case 4: display_list();
                    break;
            case 5: exit(0);
            default : printf("\nInvalid choice!!!!");

    }
    }
}

//Creating a new node common for insert and create functions
node *getnode()
{
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("\nEnter data : ");
    scanf("%d", &newnode -> val);
    newnode -> next = NULL;
    return newnode;
}

//Creating a new list
void create_list()
{
    int i, n;
    char ch;
    node *newnode, *temp;
    if (head != NULL)
    {
        printf("\nList is already present");
        printf("\nDo you want to append it ? (y/n): ");
        scanf ("%s", &ch);
        switch (ch){
            case 'y': break;
            case 'n': return;
            default : printf("\nInvalid Choice ");
        }
    }
    printf("\nEnter number of nodes to be created : ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        newnode  = getnode();
        if (head == NULL)
        {
            head  = newnode;
        }
        else
        {
            temp = head;
            while (temp -> next != NULL)
            {
                temp = temp-> next;
            }
            temp -> next = newnode;
        }
    }
}

//Giving options for inserting node at the beginning, end and middle
void insert_node()
{
    int n;

    printf("\n------------------------------------------");
    printf("\n1. Insert node at the beginning");
    printf("\n2. Insert node at the end");
    printf("\n3. Insert node at the mid");
    printf("\n\nSelect any one option (1-3): ");
    scanf("%d",&n);

    switch (n){
        case 1: insert_at_beg();
                break;
        case 2: insert_at_end();
                break;
        case 3: insert_at_mid();
                break;
        default : printf("\nInvalid choice!!!!");

}
}

//inserting node at the beginning
void insert_at_beg()
{
    node *newnode;
    newnode  = getnode();
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode -> next = head;
        head = newnode;
    }
}

//inserting node at the end
void insert_at_end()
{
    node *temp, *newnode;
    newnode = getnode();
    if (head==NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }

}

//inserting element at the middle
void insert_at_mid()
{
    node *newnode, *prev, *temp;
    int pos, nodectr, ctr=1;

    printf("\nEnter the position : ");
    scanf("%d",&pos);

    nodectr = countnode(head);
    if (pos >1 && pos<nodectr)
    {
        newnode =getnode();
        temp = prev = head;
        while (ctr<pos)
        {
            prev = temp;
            temp = temp->next;
            ctr++;
        }
        prev ->next = newnode;
        newnode ->next = temp;
    }
    else
    {
        printf("\nPosition is not a middle position !!\n");
    }
}

void delete_node()
{
    int n;

    printf("\n-------------------------------------------");
    printf("\n1. Delete node at the beginning");
    printf("\n2. Delete node at the end");
    printf("\n3. Delete node at the mid");
    printf("\n\nSelect any one option (1-3): ");
    scanf("%d",&n);

    switch (n){
        case 1: delete_at_beg();
                break;
        case 2: delete_at_end();
                break;
        case 3: delete_at_mid();
                break;
        default : printf("\nInvalid choice!!!!");
}
}

//delete first node
void delete_at_beg()
{
    node *temp;
    if (head ==NULL)
    {
        printf("\nEMPTY LIST!!");
        return;
    }
    else
    {
        temp = head;
        head = temp -> next;
        free(temp);
        printf("\nNode deleted ");
    }
}

//deletes last node
void delete_at_end()
{
    node *temp, *prev;
    if (head == NULL)
    {
        printf("\nEMPTY LIST!!");
    }
    else
    {
        temp = head;
        prev =head;
        while (temp->next != NULL)
        {
            prev  = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
        printf("\nNode is deleted ");
    }
}

//deletes node at specified position
void delete_at_mid()
{
    node *temp, *prev;
    int ctr=1, pos, nodectr;
    if(head == NULL)
    {
        printf("\nEMPTY LIST!!!");
        return;
    }
    else
    {
        printf("\nEnter the position of node to be deleted: ");
        scanf("%d",&pos);
        nodectr = countnode(head);
        if (pos> nodectr)
        {
            printf("\nNode does not exist !!");
        }
        if (pos >1 && pos<nodectr)
        {
            temp = prev = head;
            while(ctr < pos)
            {
                prev = temp;
                temp = temp->next;
                ctr ++;
            }
            prev->next = temp->next;
            free(temp);
            printf("\nNode is deleted ");
        }
        else
        {
            printf("\nINVALID POSITION!!");
        }
    }

}

//Displaying the complete list from left to right
void display_list()
{
    node *temp;
    int c=1;
    temp = head;
    if (head == NULL)
    {
        printf("\nEMPTY LIST!!");
    }
    else
    {
        printf("\nContents of the list are : ");
        while(temp != NULL)
        {
            printf("\nNode %d : %d",c, temp->val);
            temp = temp -> next;
            c++;
        }
    }
}

//Counting number of nodes
int countnode(node *st)
{
    if (st == NULL)
    {
        return 0;
    }
    else
    {
        return (1 + countnode(st->next));
    }
}
