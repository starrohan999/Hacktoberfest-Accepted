#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node *prev;
        Node *next;
    
};

void addNodeAtBegin(int data, Node **Head){
        Node *new_Node = new Node;
        
        new_Node->data = data;
        new_Node->prev = NULL;
        new_Node->next = (*Head);
        
        if((*Head) != NULL) (*Head)->prev = new_Node;
        
        (*Head) = new_Node;
        // Node *prev = NULL;
        // Node *temp = Node *Head->next;
        // node *next = *temp;
    }
    
     void addNodeAtEnd(int data, Node **Head){
        Node *new_Node = new Node;
        
        Node *last = (*Head);
        new_Node->data = data;
         
        new_Node->next = NULL;
        
        if((*Head) == NULL){
            new_Node->prev = NULL;
            (*Head) = new_Node; 
            return;
        }
        
        while(last->next != NULL){
            last = last->next;
        }
        
        last->next = new_Node;
        
        new_Node->prev = last;
    }
    
    void addNodeAfter(int data, Node *prev){
        if (prev == NULL)
        {
            cout<<"the given previous node cannot be NULL";
            return;
        }
        
        Node *new_Node = new Node;
        
        new_Node->data = data;
        
        new_Node->prev = prev;
        
        new_Node->next = (prev)->next;
        (prev)->next = new_Node;
        
        if(new_Node->next != NULL){
            new_Node->next->prev = new_Node;
        }
    }
    
    void printList(Node* node)
    {
        Node* last;
        cout<<"\nTraversal in forward direction \n";
        while (node != NULL)
        {
            cout<<" "<<node->data<<" ";
            last = node;
            node = node->next;
        }
     
        // cout<<"\nTraversal in reverse direction \n";
        // while (last != NULL)
        // {
        //     cout<<" "<<last->data<<" ";
        //     last = last->prev;
        // }
    }
    
    void deleteNode(Node **Head, Node *del){
        
        if(del == NULL || *Head == NULL) return;
        
        if (*Head == del) *Head = del->next;
        
        if(del->next != NULL) del->next->prev = del->prev;
        
        if(del->prev != NULL) del->prev->next = del->next;
        
        free(del);
    }
    
    void ReverseList(Node **Head){
        // while((*Head)->next != NULL){
        //     *Head->next = *Head;
        // }
        
        Node *temp = NULL;
        Node *current = *Head;
        
        while(current != NULL){
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }
        
        if(temp != NULL) *Head = temp->prev;
        
    }
    
    int findSize(Node *node)
    {
       int count = 0;
       while (node != NULL)
       {
           count++;
           node = node->next;
       }
       return count;
    //   cout << '\n' << "Size of Linked List: " << count << endl;
    }
    
    void swapKthNode(Node **Head, int k){
        int n = findSize(*Head);
         cout << '\n' << "Size of Linked List: " << n << endl;
         
         if(k < 0 || k > n) return;
         
         if(k == (n - k + 1)) {
             printList(*Head);
             return;
         }
         
        //  find kth element from begining
        Node *x1 = *Head;
        Node *x1_prev = NULL;
        
        for(int i = 1; i < k; i++){
            x1_prev = x1;
            x1 = x1->next;
        }
        
        //  find kth element from last
        Node *x2 = *Head;
        Node *x2_prev = NULL;
        
        for(int i = 1; i < n - k + 1; i++){
            x2_prev = x2;
            x2 = x2->next;
        }
        
        if(x1_prev) x1_prev->next = x2;
        
        if(x2_prev) x2_prev->next = x1;
        
        // swap next pointers
        Node *temp = x1->next;
        x1->next = x2->next;
        x2->next = temp;
        
        if(k == 1) *Head = x2;
        
        if(k == n) *Head = x1;
        
        cout << "Linked List after swapping nodes: " << endl;
        printList(*Head);
    }



int main() {
    
    Node *head = NULL;
    
    addNodeAtEnd(9, &head);
    addNodeAtBegin(3, &head);
    
    
    addNodeAtBegin(5, &head);
    addNodeAtEnd(2, &head);
    
    
    
    addNodeAfter(8, head->next);
    printList(head);
    
    // deleteNode(&head, head);
    // deleteNode(&head, head->next);
    // deleteNode(&head, head->next);
    // printList(head);
    
    // ReverseList(&head);
    // printList(head);
    
    // findSize(head);
    swapKthNode(&head, 3);
    
    return 0;
}

