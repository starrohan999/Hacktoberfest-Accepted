#include<stdlib.h>
#include<string.h>
#include<stdio.h>
struct Student
{
    int Reg_number,Marks;
    char Student_name[100];
    struct Student *next;
}*head;
void input(int Reg_number,int Marks, char* Student_name)
{

    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
    student->Reg_number=Reg_number;
    student->Marks=Marks;
    strcpy(student->Student_name,Student_name);
    student->next = NULL;

    if(head==NULL)
    {
        head = student;
    }
    else
    {
        student->next = head;
        head = student;
    }
}
void remove_lowest()
    {
        struct Student * temp = head;
        int min_mark=temp->Marks;
        while(temp!=NULL)
            {
                if(temp->Marks<=min_mark)
                {
                    min_mark=temp->Marks;
                }
                temp = temp->next;
            }
        struct Student * temp1 = head;
        struct Student * temp2 = head;
        while(temp1!=NULL)
        {
            if(temp1->Marks==min_mark)
            {
                printf("Record with min marks %d Found !!!\n",min_mark);
                if(temp1==temp2)
                    {
                        head = head->next;
                        free(temp1);
                    }
                else
                    {
                        temp2->next = temp1->next;
                        free(temp1);
                    }
                printf("Record Successfully Deleted !!!\n");
                return;
            }
            temp2 = temp1;
            temp1 = temp1->next;
        }
    }
void display()
{
    struct Student * temp = head;
    while(temp!=NULL)
    {
        printf("Registration Number: %d\n", temp->Reg_number);
        printf("Student name: %s\n", temp->Student_name);
        printf("Marks : %d\n", temp->Marks);
        temp = temp->next;
    }
}
int main()
{
    head = NULL;
    int choice;
    int Reg_number,Marks;
    char Student_name[100];
    int Number_to_del;
    printf("Choose options as below :\n1. Create a list \n2. Delete the lowest \n3. Display :");
    do
    {
        printf("\nEnter Choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                    printf("Enter Registration Number : ");
                    scanf("%d",&Reg_number);
                    printf("\nEnter Marks : ");
                    scanf("%d",&Marks);
                    printf("Enter Student Name : ");
                    scanf("%s",Student_name);
                    input(Reg_number,Marks,Student_name);
                    break;
            case 2:
                remove_lowest();
                printf("The registration Number with the lowest marks has been deleted ");
                break;
            case 3:
                printf("Displaying the details in the list : \n");
                display();
                break;
        }

    } while (choice != 0);
}






#include<stdio.h>  
#include<stdlib.h>
#include<string.h>

struct node  
{  
    struct node *prev;  
    struct node *next;  
    int marks;
    int regno;
    char name[100];
};  
struct node *head;

void insertion_beginning()  
{  
   struct node *ptr;   
   int reg;
   char name[100];
   int marks;
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
    printf("\nEnter Registration Number");  
    scanf("%d",&reg);
    printf("\nEnter Name");
    scanf("%s",name);
    printf("\nEnter marks");
    scanf("%d",&marks);
      
   if(head==NULL)  
   {  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->regno=reg;
       strcpy(ptr->name,name);
       ptr->marks=marks;
       head=ptr;  
   }  
   else   
   {  
       ptr->regno=reg;
       strcpy(ptr->name,name);
       ptr->marks=marks;
       ptr->prev=NULL;  
       ptr->next = head;  
       head->prev=ptr;  
       head=ptr;  
   }  
   printf("\nNode inserted\n");  
}  
     
}  
void insertion_last()  
{  
   struct node *ptr,*temp;  
   int reg; 
   char name[100];
   int marks;
   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
    printf("\nEnter Registration Number");  
    scanf("%d",&reg);
    printf("\nEnter Name");
    scanf("%s",name);
    printf("\nEnter marks");
    scanf("%d",&marks);  
       if(head == NULL)  
       {  
           ptr->next = NULL;  
           ptr->prev = NULL;  
           head = ptr;  
       }  
       else  
       {  
          temp = head;  
          while(temp->next!=NULL)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          ptr->next = NULL;  
          }  
             
       }  
     printf("\nnode inserted\n");  
    }  
    
void display()  
{  
    struct node *ptr;  
    printf("\n printing values...\n");  
    ptr = head;  
    while(ptr != NULL)  
    {  
        printf("%d\n",ptr->regno);
        printf("%s\n",ptr->name);
        printf("%d\n",ptr->marks);
        ptr=ptr->next;  
    }  
} 

void main ()  
{  
int choice =0;  
    while(choice != 9)  
    {  
        printf("\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Show");  
        printf("\nEnter your choice?\n");  
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insertion_beginning();  
            break;  
            case 2:  
            insertion_last();  
            break;  
            case 3:  
            display();  
            break;  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
} 