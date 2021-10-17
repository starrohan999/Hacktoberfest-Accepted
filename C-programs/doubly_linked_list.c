//Author: Sanjana Sawant

#include <stdio.h>
#include <stdlib.h>

struct dlink{
    struct dlink *left;
    int data;
    struct dlink *right;
};
typedef struct dlink node;
node *start;

node *getnode();
int count_node(node *start);

void insert_node();
void insert_beg();
void insert_mid();
void insert_end();

void delete_node();
void delete_beg();
void delete_mid();
void delete_end();

void display();
void create_list();

//Creates a new node
node *getnode()
{
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("\nEnter data : ");
    scanf("%d",&newnode->data);
    newnode -> left = NULL;
    newnode -> right = NULL;
    return newnode;
}

//Counts the number of nodes
int count_node(node *start)
{
    if (start == NULL)
        return 0;
    else
        return 1 + count_node(start->right);
}

//Create a newlist
void create_list()
{
    node *newnode, *temp;
    int i, n;
    printf("\nEnter the number of nodes to be created : ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        newnode =getnode();
        if (start == NULL)
            start = newnode;
        else
        {
            temp = start;
            while(temp -> right != NULL)
            {
                temp = temp->right;
            }
            temp ->right= newnode;
            newnode -> left = temp;
        }
    }
}

void insert_node()
{
    int n;
    printf("\n*****************");
    printf("\n1. Insert node at the beginning");
    printf("\n2. Insert node at the mid");
    printf("\n3. Insert node at the end");
    printf("\n\nEnter your choice : ");
    scanf("%d",&n);
    switch (n)
    {
        case 1: insert_beg();
                break;
        case 2: insert_mid();
                break;
        case 3: insert_end();
                break;
        default: printf("\nInvalid Choice !!");
    }
}

//Inserting node at the beginning
void insert_beg()
{
    node *newnode;
    newnode=getnode();
    if (start == NULL)
        start = newnode;
    else
    {
        start->left = newnode;
        newnode->right = start;
        start = newnode;
        printf("\nNew node inserted");
    }
}

//Inserts node at the middle of the list
void insert_mid()
{
    int pos, nodectr, ctr=1;
    node *temp, *newnode;

    printf("\nEnter the position : ");
    scanf("\n%d",&pos);
    nodectr = count_node(start);

    if(pos>nodectr)
        printf("\nPosition out of range");
    else if (pos==1)
        insert_beg();
    else if (pos == nodectr)
        insert_end();

    if (pos>1 && pos<nodectr)
    {
        newnode = getnode();
        temp =start;
        while(ctr<pos-1)
        {
            temp=temp->right;
            ctr++;
        }
        newnode ->left = temp;
        newnode -> right = temp->right;
        temp->right->left = newnode;
        temp->right = newnode;
        printf("\nNew node inserted");
    }
}

//Inserts node at the end
void insert_end()
{
    node *temp, *newnode;
    newnode = getnode();
    if (start==NULL)
    {
        start = newnode;
    }
    else
    {
        temp = start;
        while(temp->right != NULL)
        {
            temp =temp->right;
        }
        temp->right=newnode;
        newnode->left=temp;
        printf("\nNew node inserted");
    }
}

void delete_node()
{
    int n;
    printf("\n*****************");
    printf("\n1. Delete node at the beginning");
    printf("\n2. Delete node at the mid");
    printf("\n3. Delete node at the end");
    printf("\n\nEnter your choice : ");
    scanf("%d",&n);
    switch (n)
    {
        case 1: delete_beg();
                break;
        case 2: delete_mid();
                break;
        case 3: delete_end();
                break;
        default: printf("\nInvalid Choice !!");
    }
}

//Deletes node at the beginning
void delete_beg()
{
    node *temp;
    if (start == NULL)
    {
        printf("\nEmpty List !!");
        return;
    }
    else
    {
        temp =start;
        start = start -> right;
        start -> left = NULL;
        printf("\nNode deleted");
        free(temp);
    }
}

//Deletes node at specified position
void delete_mid()
{
  int i =0, pos, nodectr;
  node *temp;
  if (start == NULL)
  {
      printf("\nEmpty list !!");
      return;
  }
  else
  {
      printf("\nEnter the position : ");
      scanf("%d", &pos);
      nodectr = count_node(start);
      if (pos == 1)
        delete_beg();
      else if (pos == nodectr)
        delete_end();
      if (pos>1 && pos<nodectr)
      {
          temp = start;
          i=1;
          while (i<pos)
          {
              temp = temp->right;
              i++;
          }
          temp->right->left = temp->left;
          temp->left->right = temp ->right;
          free(temp);
          printf("\nNode deleted");
      }
      else
      {
          printf("\nInvalid position");
      }
  }
}

//deletes last node
void delete_end()
{
    node *temp;
    if (start == NULL)
    {
        printf("\nEmpty List !!");
    }
    else
    {
        temp = start;
        while (temp->right != NULL)
        {
            temp= temp->right;
        }
        temp -> left->right = NULL;
        printf("\nNode deleted");
        free(temp);
    }
}

//Traversing the list from left to right
void display()
{
    node *temp;
    temp= start;
    printf("\nThe contents of the list are : \n");
    if (start == NULL)
        printf("\nEmpty list ");
    else
    {
        int c=1;
        while (temp != NULL)
        {
          printf("Node %d : %d\n", c, temp->data);
          temp = temp -> right;
          c++;
        }
    }
}

//Menu for selecting function
int menu()
{
    int ch;
    printf("\n-----------------------------------------------------------------");
    printf("\n1. Create list");
    printf("\n2. Insert a node");
    printf("\n3. Delete a node");
    printf("\n4. Display list");
    printf("\n5. Exit");
    printf("\n\nEnter your choice (1-5): ");
    scanf("%d",&ch);
    return ch;
}

int main()
{
    int ch;
    printf("Program to implement doubly linked list\n\n");
    while (1)
    {
        ch = menu();
        switch (ch)
        {
            case 1: create_list();
                    break;
            case 2: insert_node();
                    break;
            case 3: delete_node();
                    break;
            case 4: display();
                    break;
            case 5: exit(0);
            default: printf("\nInvalid choice !!!");
        }
    }
}
