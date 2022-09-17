#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
   
//Represents the node of list.  
struct node{  
    int data;  
    struct node *next;  
};  
   
//Declaring head and tail pointer as null.  
struct node *head = NULL;  
struct node *tail = NULL;  
   
//This function will add the new node at the end of the list.  
void add(int data){  
    //Create new node  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    //Checks if the list is empty.  
    if(head == NULL){  
        //If list is empty, both head and tail would point to new node.  
        head = newNode;  
        tail = newNode;  
        newNode->next = head;  
    }else {  
        //tail will point to new node.  
        tail->next = newNode;  
        //New node will become new tail.  
        tail = newNode;  
        //Since, it is circular linked list tail will point to head.  
        tail->next = head;  
    }  
}  
   
//This function will display the nodes of circular linked list  
void display(){  
    struct node *current = head;  
    if(head == NULL){  
        printf("List is empty");  
    }  
    else{  
        printf("Nodes of the circular linked list: \n");  
         do{  
             //Prints each node by incrementing pointer.  
            printf("%d ", current->data);  
            current = current->next;  
        }while(current != head);  
        printf("\n");  
    }  
}  
void printeven()
{
	struct node *current = head;  
    if(head == NULL){  
        printf("List is empty");  
    }  
    else{  
        printf("Even Nodes of the circular linked list: \n");  
        do{  
             //Prints each node by incrementing pointer.  
            if((current->data) % 2 == 0)
			{
			printf("%d ", current->data);  
            current = current->next;  
        	}
        	else
        	current=current->next;
		}while(current != head);  
        printf("\n");  
    }
	
	  }      
int main()  
{  
    int d, choice=1;
	//Adds data to the list  
   
   while(choice!=0)
   {
   printf("enter data ");
   scanf("%d", &d);
   	add(d);
	printf("Choose 1 to add element 0 to exit");
   scanf("%d", &choice);  
   
   }
      //Displays all the nodes present in the list  
   display();
   printeven();  
     
   return 0;
}
