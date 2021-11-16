#include<stdio.h>   
#include<stdlib.h>  
#define MAX 10

void insert();  
void delete();  
void display();

int front = -1, rear = -1;  
int queue[MAX];  

void main ()  
{  
    int choice;   
    while(choice != 4)   
    {     
        printf("\n\nMain Menu\n");  
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
            default:   
                printf("\nPlease enter valid choice\n");  
        }  
    }  
}

void insert()
{  
    int item;  
    
    printf("\nEnter the element\n");  
    scanf("\n%d",&item);      
    
    if(rear == MAX-1)  
    {  
        printf("\nERR: OVERFLOW\n");  
        return;  
    }
    
    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }
    else   
    {  
        rear = rear+1;  
    }
    
    queue[rear] = item;  
    printf("\nValue has been inserted");  
}

void delete()  
{  
    int item;

    if (front == -1 || front > rear)
    {  
        printf("\nERR: UNDERFLOW\n");
        return;          
    }  
    else
    {  
        item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }
        else   
        {  
            front = front + 1;  
        }  
        printf("\nValue has been deleted");  
    }  
      
      
}  
      
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        printf("\nERR: QUEUE IS EMPTY\n");  
    }  
    else  
    {
        printf("\nCurrent Elements:");
        for(i=front;i<=rear;i++)  
            printf("\n%d",queue[i]);    
    }  
}
