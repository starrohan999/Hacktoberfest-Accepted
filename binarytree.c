#include<stdio.h>
#include<stdlib.h>



struct node{
      
      int data; 
      struct node *lnode;
      struct node *rnode;

};


struct node * createnode(int data){
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->lnode=NULL;
    ptr->rnode=NULL;
    return(ptr);
}

void inorder(struct node *p){

   if(p){
            inorder(p->lnode);
            printf("%d",p->data);
            inorder(p->rnode);
   }
}

void postorder(struct node *p){
    if(p){
           postorder(p->lnode);
           postorder(p->rnode);
           printf("%d",p->data);
    }
}

void preorder(struct node *p){
    if(p){
        printf("%d",p->data);
        preorder(p->lnode);
        preorder(p->rnode);
    }
}

int main(){
 struct node *p=createnode(4);
 struct node *p1=createnode(1);
 struct node *p2=createnode(2);

 p->lnode=p1;
 p->rnode=p2;

inorder(p);
 printf("\n");
postorder(p);
 printf("\n");
preorder(p);

    return 0;
}
