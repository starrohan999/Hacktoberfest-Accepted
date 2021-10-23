#include <stdlib.h> 
Typedef struct tnode 
{ 
 int data; 
 struct tnode *right,*left; 
}TNODE; 
 
TNODE *CreateBST(TNODE *, int); 
void Inorder(TNODE *); 
void Preorder(TNODE *); 
voidPostorder(TNODE *); 
main() 
{ 
 TNODE *root=NULL; /* Main Program */
 int opn, elem, n, i; 
 do 
 { 
 printf("\n Binary Search Tree Operations \n\n"); 
 printf("\n Press 1-Creation of BST"); 
 printf("\n 2-Traverse in Inorder"); 
 printf("\n 3-Traverse in Preorder"); 
 printf("\n 4-Traverse in Postorder"); 
 printf("\n 5-Exit\n"); printf("\n Your option ? "); 
 scanf("%d",&opn); 
 switch(opn) 
 { 
 case 1: root=NULL; 
 printf("\n\nBST for How Many Nodes ?"); 
 scanf("%d",&n); 
 for(i=1;i<=n;i++) 
 { 
 printf("\nRead the Data for Node %d ?",i); 
 scanf("%d",&elem); 
 root=CreateBST(root,elem); 
 } 
 printf("\nBST with %d nodes is ready to Use!!\n",n); break; 
 case 2: printf("\n BST Traversal in INORDER \n"); 
 Inorder(root); break; 
 case 3: printf("\n BST Traversal in PREORDER \n"); 
 Preorder(root); break; 
 case 4: printf("\n BST Traversal in POSTORDER \n"); 
 Postorder(root); break; 
 case 5: printf("\n\n Terminating \n\n"); break; 
 default: printf("\n\nInvalid Option !!! Try Again !!\n\n"); break; 
 } 
 printf("\n\n\n\n Press a Key to Continue . . . "); getch(); 
 }while(opn != 5); 
} 
TNODE *CreateBST(TNODE *root, intelem) 
{ 
 if(root == NULL) 
 { 
 root=(TNODE *)malloc(sizeof(TNODE)); 
 root->left= root->right = NULL; 
 root->data=elem; 
 return root; 
 } 
 else 
 { 
 if(elem< root->data ) 
 root->left=CreateBST(root->left,elem); 
 else 
 if(elem> root->data ) 
 root->right=CreateBST(root->right,elem); 
 else 
 printf(" Duplicate Element !! Not Allowed !!!"); 
 
 return(root); 
 } 
} 
void Inorder(TNODE *root) 
{ 
 if( root != NULL) 
 { 
 Inorder(root->left); 
 printf(" %d ",root->data); 
 Inorder(root->right); 
 } 
} 
 void Preorder(TNODE *root) 
{ 
 if( root != NULL) 
 { 
 printf(" %d ",root->data); 
 Preorder(root->left); 
 Preorder(root->right); 
 } 
} 
 voidPostorder(TNODE *root) 
{ 
 if( root != NULL) 
 { 
 Postorder(root->left); 
 Postorder(root->right); 
 printf(" %d ",root->data); 
 } 
}
