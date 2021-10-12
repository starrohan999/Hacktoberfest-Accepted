#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

void levelOrder(Node* node)
{
    queue<Node*> q;
    q.push(node);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
int main(){
    Node* root = new Node(2);
    root->left = new Node(8);
    root->right = new Node(6);
    root->left->left = new Node(4);
    root->left->right = new Node(1);
    root->right->left = new Node(5);
    root->right->right = new Node(3);

    levelOrder(root);
}

//Output: 2 8 6 4 1 5 3
