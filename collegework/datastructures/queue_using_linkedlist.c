#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front;  
struct node *rear;   

void insert();  
void delete();  
void display();  

void main ()  
{  
    int choice;
    while(choice != 4)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
        }
    }
}

void insert()  
{  
    struct node *ptr;  
    int element;   
      
    ptr = (struct node *) malloc (sizeof(struct node));  
    if (ptr == NULL) {
        printf("ERR: OVERFLOW!");
        return;
    }
    else {
        printf("\nEnter the element\n");
        scanf("%d",&element);

        ptr -> data = element;

        if(front == NULL) {
            front = ptr;
            rear = ptr;
            front -> next = NULL;
            rear -> next = NULL;
        }
        else {
            rear -> next = ptr;
            rear = ptr;
            rear -> next = NULL;
        }
    }
}

void delete ()
{
    struct node *ptr;
    if(front == NULL)  
    {
        printf("\nERR: UNDERFLOW!\n");
        return;
    }
    else
    {
        ptr = front;
        front = front -> next;
        free(ptr);
    }
}

void display()
{
    struct node *ptr;
    ptr = front; 
    if(front == NULL)
        printf("\nERR: Queue is Empty!\n");
    else {
        while(ptr != NULL)   
        {  
            printf("\n%d",ptr -> data);  
            ptr = ptr -> next;  
        }
        printf("\n");
    }
}