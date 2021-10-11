#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left,*right;

    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void zigZagTraversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    stack<Node*> currLevel;
    stack<Node*> nextLevel;

    bool leftToRight = true; //to keep track of direction

    currLevel.push(root);
    while(!currLevel.empty())
    {
        Node* temp = currLevel.top();
        currLevel.pop();

        if(temp!=NULL)
        {
            cout<<temp->data<<" ";

            if(leftToRight)
            {
                nextLevel.push(temp->left);
                nextLevel.push(temp->right);
            }
            else{
                nextLevel.push(temp->right);
                nextLevel.push(temp->left);
            }
        }

        if(currLevel.empty())
        {
            leftToRight = !leftToRight;
            swap(currLevel,nextLevel);
        }
    }
}

int main()
{
   Node* root = new Node(12);
   root->left = new Node(9);
   root->right = new Node(15);
   root->left->left = new Node(5);
   root->left->right = new Node(10);

   zigZagTraversal(root);
}

//Output: 12 15 9 5 10
