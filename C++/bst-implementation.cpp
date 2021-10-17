#include<iostream>
using namespace std;

struct Node{
    struct Node* left;
    int val;
    struct Node* right;
    Node(int data){
        val=data;
        left=NULL;
        right=NULL;
    }
};

int main(){
    struct Node *root=new Node(22);
    root->left=new Node(33);
    root->right=new Node(44);
    root->left->right=new Node(55);
    return 0;
}
