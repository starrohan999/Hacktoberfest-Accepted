#include<stdio.h>
 struct node{
     int data;
     struct node *next;
 };
 int main() 
 {
     struct node *newnode,*head,*tail,*temp;
     int choice=1,len=0;
     head=0;
     tail=0;
     while(choice)
     {
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("enter data\n");
     scanf("%d",&newnode->data);
     len++;
     if(head==0)
     {
         head=newnode;
         temp=head;
     }
     else
     {
         temp->next=newnode;
         temp=newnode; 
     }
      newnode->next=0;
      tail=temp;
     printf("enter 1 to continue else 0 to stop\n");
     scanf("%d",&choice);
     }
     printf("%d\n",head->next->data);
     printf("length of node is %d \n",len);
    return 0;
}