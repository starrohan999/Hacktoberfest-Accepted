#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
 
class single_llist
{
	Node  *head;
    public:
    	single_llist() 
        {
         head = NULL;
        }
        void insert_begin();
        void insert_pos();
        void insert_last(); 
        void insert_before();
        void insert_after();
        void insert_middle();
        void delete_first();
        void delete_last();
        void delete_pos();
        void search();
        void update();
        void display();
};
 

int main()
{
    int choice, val, nodes, element, position, i;
    single_llist sl;
    Node *head = NULL;
    while (1)
    {
        cout<<endl<<"---------------------------------"<<endl;
        cout<<endl<<"Operations on singly linked list"<<endl;
        cout<<endl<<"---------------------------------"<<endl;
        cout<<"1.Insert Node at beginning"<<endl;
        cout<<"2.Insert node at last"<<endl;
        cout<<"3.Insert node at position"<<endl;
        cout<<"4.Insert node after a node"<<endl;
        cout<<"5.Insert node before a node"<<endl;
        cout<<"6.Insert node in middle of the linked list"<<endl;
        cout<<"7.Delete first  node"<<endl;
        cout<<"8.Delete last node"<<endl;
        cout<<"9.Delete a Particular Node"<<endl;
        cout<<"10.Update Node Value"<<endl;
        cout<<"11.Search Element"<<endl;
        cout<<"12.Display Linked List"<<endl;
        cout<<"13.Exit "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Inserting Node at Beginning: "<<endl;
            sl.insert_begin();
            cout<<endl;
            break;
        case 2:
            cout<<"Inserting Node at Last: "<<endl;
            sl.insert_last();
            cout<<endl;
            break;
        case 3:
            cout<<"Inserting Node at a given position:"<<endl;
            sl.insert_pos();
            cout<<endl;
            break;
        case 4:
            cout<<"Insert node after a node"<<endl;
            sl.insert_after();
            cout<<endl;
            break;
        case 5:
        	cout<<"Insert node before a node"<<endl;
        	sl.insert_before();
            cout<<endl;
            break;
        case 6:
        	cout<<"Insert node in middle of the linked list"<<endl;
        	sl.insert_middle();
            cout<<endl;
            break;
        case 7:
        	cout<<"Delete the first element"<<endl;
			sl.delete_first();
			break;
		case 8:
        	cout<<"Delete the last element"<<endl;
			sl.delete_last();
			break;
		case 9:	
        	cout<<"Delete a particular node: "<<endl;
            sl.delete_pos();    
            break;
        case 10:   
            cout<<"Update Node Value:"<<endl;  
            sl.update();
            cout<<endl;
            break;
        case 11:
            cout<<"Search element in Link List: "<<endl;
            sl.search();
            cout<<endl;
            break;
        case 12:
            cout<<"Display elements of link list"<<endl;
            sl.display();
            cout<<endl;
            break;
        case 13:
            cout<<"Exiting..."<<endl;
            exit(1);
            break;  
        default:
            cout<<"Wrong choice"<<endl;
        }
    }
    return 0;
}
 
// Inserting element in beginning
void single_llist::insert_begin()
{
    int val;
    cout<<"Enter the value to be inserted: ";
    cin>>val;
    Node* new_node = new Node;
      new_node->data = val;
      new_node->next = NULL;// make a new node

      // If list is empty, make the new node, the head
      if (head == NULL)
        head = new_node;
      // else, make the new_node the head and its next, the previous head
      else
      {
        new_node->next = head;
        head = new_node;
      }
    cout<<"Element Inserted at beginning"<<endl;
}
 
//Inserting Node at last
void single_llist::insert_last()
{
    int val;
    cout<<"Enter the value to be inserted: ";
    cin>>val;
    Node* new_node = new Node;
    new_node->data = val;
    new_node->next = NULL;
	// If list is empty, make the new node, the head
    if (head == NULL)
        head = new_node;
    // else, make the new_node the head and its next, the previous head
    else
    {
      	Node *temp;
    	temp = head;
    	while (temp->next != NULL)
    	{         
        	temp = temp->next;        
    	}
    	temp->next = new_node;
	}   
    cout<<val<<" is Inserted at last"<<endl;  
}
 
//Insertion of node at a given position
void single_llist::insert_pos()
{
    int val, pos, count=1;
    cout<<"Enter the value to be inserted: ";
    cin>>val;
    cout<<"Enter the position: ";
    cin>>pos;
    Node* new_node = new Node;
    new_node->data = val;
    new_node->next = NULL;
    Node *temp = head;
    while (count<pos-1 && temp->next != NULL)
    {         
        temp = temp->next; 
		count++;       
    }
    new_node->next=temp->next;
    temp->next = new_node;
    cout<<"Element "<<val<<" inserted at "<<pos<<endl;
}

//Insertion after a node
void single_llist::insert_after()
{
    int val, nd, count=1;
    cout<<"Enter the value to be inserted: ";
    cin>>val;
    cout<<"Enter the data of the node: ";
    cin>>nd;
    Node* new_node = new Node;
    new_node->data = val;
    new_node->next = NULL;
    Node *temp = head;
    while (temp->data !=nd && temp->next != NULL)
    {         
        temp = temp->next;       
    }
    new_node->next=temp->next;
    temp->next = new_node;
    cout<<"Element "<<val<<" inserted after "<<nd<<endl;
}

//Insertion before a node
void single_llist::insert_before()
{
    int val, nd, count=1;
    cout<<"Enter the value to be inserted: ";
    cin>>val;
    cout<<"Enter the data of the node: ";
    cin>>nd;
    Node* new_node = new Node;
    new_node->data = val;
    new_node->next = NULL;
    Node *back, *front = head;
    while (front->data !=nd && front->next != NULL)
    {    
	    back=front;     
        front = front->next;       
    }
    new_node->next=front;
    back->next = new_node;
    cout<<"Element "<<val<<" inserted before "<<nd<<endl;
}

//Insertion of a node in the middle of the linked list
void single_llist::insert_middle()
{
    int val;
    cout<<"Enter the value to be inserted: ";
    cin>>val;
    Node* new_node = new Node;
    new_node->data = val;
    new_node->next = NULL;
    Node *fast= head, *slow = head;
    while (fast->next !=NULL && fast->next->next != NULL)
    {    
	   fast = fast->next->next;
	   slow= slow->next;      
    }
    new_node->next=slow->next;
    slow->next = new_node;
    cout<<"Element- "<<val<<" is inserted in the middle of the linked list"<<endl;
}

//Delete the first element
void single_llist::delete_first()
{
	Node *temp=head;
	head=head->next;
	cout<<"Element- "<<temp->data<<" is deleted"<<endl;
	delete temp;	
}

//Delete the last element
void single_llist::delete_last()
{
	Node *last, *temp=head;
	while (temp->next->next != NULL)
    {         
        temp = temp->next;       
    }
	last=temp->next;
	temp->next=NULL;
	cout<<"Element- "<<last->data<<" is deleted"<<endl;
	delete last;
}

//Delete element of a given position
void single_llist::delete_pos()
{
    Node *temp2, *temp1=head;
    int count=1, pos;
    cout<<"Enter the position of the node, to be deleted: ";
    cin>>pos;
	while (count<pos-1)
    {         
        temp1 = temp1->next;
		count++;       
    }
    temp2=temp1->next;
    cout<<"Element- "<<temp2->data<<" is deleted"<<endl;
	temp1->next=temp2->next;
	delete temp2;
}
 
//Update a given Node
void single_llist::update()
{
    int value, pos, i;
    if (head == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the node postion to be updated: ";
    cin>>pos;
    cout<<"Enter the new value: ";
    cin>>value;
    Node *temp, *ptr;
    temp = head;
    if (pos == 1)
    {
        head->data = value; 
    }
    else
    {
        for (i = 0;i < pos - 1;i++)
        {
            if (temp == NULL)
            {
                cout<<"There are less than "<<pos<<" elements";
                return;
            }
            temp = temp->next;
        }
        temp->data = value;  
    }
    cout<<"Node Updated"<<endl;
} 
 
//Searching an element
void single_llist::search()
{
    int value, pos = 0;
    bool flag = false;
    if (head == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the value to be searched: ";
    cin>>value;
    Node *temp;
    temp = head;
    while (temp != NULL)
    {
        pos++;
        if (temp->data == value)
        {
            flag = true;
            cout<<"Element "<<value<<" is found at position "<<pos<<endl;
        }
        temp = temp->next;
    }
    if (!flag)
        cout<<"Element "<<value<<" not found in the list"<<endl;  
}
 

//Display Elements of a link list
void single_llist::display()
{
    struct Node *temp;
    if (head == NULL)
    {
        cout<<"The List is Empty"<<endl;
    }
    temp = head;
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
