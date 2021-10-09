#include<queue>
#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};

//accepts the old root node& data and returns the new node
node* insertInBST(node* root,int data){
	//base case
	if(root==NULL){//inserting at the leaf
		return new node(data);
	} 

	//recursive part-Insert in the subtree and update the pointers
	if(data<=root->data){
		root->left = insertInBST(root->left,data);
	}
	else{
		root->right=insertInBST(root->right,data);
	}
	return root;
}


node* buildBST(){ //reads a list of numbers till -1 and also these number will be inserted to the BST
	node*root=NULL;
	int d;
	cin>>d;
	while(d!=-1){
		root=insertInBST(root,d);
		cin>>d;
	}
	return root;
}

//same as BT
void BFStree(node* root){
	queue<node*>q;// because we want to have addresses of the children
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* f=q.front();
		if(f==NULL){
			cout<<endl;
			q.pop();

			if(!q.empty()){//to avoid infinite loop and also we have to tell na ki ab line yhaan pe khtm hoti hai agli wali :P
				
				q.push(NULL);
			}
		}

		else{
			cout<<f->data<<',';
			q.pop();
			if(f->left){// if left child is not null
				q.push(f->left);
			}
			if(f->right){// if left child is not null
				q.push(f->right);
			}
		}
	}
	return;
}

//same as BT
void printIn(node* root){
	if(root==NULL){
		return;
	}
	//left root right
	printIn(root->left);
	cout<<root->data<<" ";
	printIn(root->right);
} 


node* deleteInBST(node* root, int data){
	if(root==NULL){
		return NULL;
	}
	else if(data<root->data){
		root->left = deleteInBST(root->left,data);
		return root;
	}
	else if(data>root->data){
		root->right=deleteInBST(root->right,data);
	}
	else if(data==root->data){
		//found at root itself

		//1-node with 0 children- leaf node
		if(root->left==NULL && root->right==NULL){
			delete root;
			return NULL;
		}

		//2-node with 1 children
		if(root->left!=NULL && root->right==NULL){
			node* temp= root->left;
			delete root;
			return temp;
		}
		if(root->right!=NULL && root->left==NULL){
			node* temp= root->right;
			delete root;
			return temp;
		}

		//3-node with 2 children
		node* replace=root->right;//to find appropriate replace of the parent, by right subtree min
		while(replace->left!=NULL){
			replace=replace->left;//will take us to the leftmost element of the right subtree, which is minimum
		}
		root->data=replace->data; //putting the value of appropriate replace child in the place of parent.
		root->right=deleteInBST(root->right,replace->data);
		return root;
	}
	return root;
}

int main(){
	node* root=buildBST();
	BFStree(root);
	cout<<endl;
	int data;
	cin>>data;
	node* Final=deleteInBST(root,data);
	BFStree(Final);
	cout<<endl;

}

/*
ip=
5 3 7 1 6 8 -1
5

op=
5,
3,7,
1,6,8,

6,
3,7,
1,8,
*/
