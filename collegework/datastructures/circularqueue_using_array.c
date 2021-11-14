#include<stdio.h>
#include<stdlib.h>

#define MAX 100

// VAL = element

int queue[MAX];
int front = -1;
int rear = -1;

// Insert element in circular queue
void enqueue(int element)
{
    if (front == 0 && rear == (MAX - 1))
        printf("\nERR: Queue Overflow!\n");

    if (front == -1 && rear == -1) {
        front = 0;
        rear = 0;
        queue[rear] = element;
    }
    else if (rear == (MAX - 1) && front != 0) {
        rear = 0;
        queue[rear] = element;
    }
    else {
        rear = rear + 1;
        queue[rear] = element;
    }
}

// Delete element in circular queue
int dequeue()
{
    if((front == -1) && (rear == -1))
        printf("\nERR: Queue Underflow!\n");
    else if (front == rear) {
        front = -1;
        rear = -1;
    }
    else {
        if (front == (MAX - 1))
            front = 0;
        else
            front += 1;
    }
}

void display()  
{  
    int i = front;
    if (front == -1 && rear == -1)
        printf("\nERR: Queue is Empty!\n");
    else {
        printf("\n");
        while(i <= rear) {
            printf("%d ", queue[i]);
            i += 1;
        }
        printf("\n");
    }
}

int main() {

    int choice, val;

    do {
        printf("\n1: Insert an element");
        printf("\n2: Delete an element");
        printf("\n3: Display");
        printf("\n4: Exit\n");
        printf("\n\nEnter your choice: ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the element which is to be inserted: ");
                scanf("%d", &val);
                enqueue(val);
                break;

            case 2:
                dequeue();
                break;
            
            case 3:
                display();
                break;
        }
    } while(choice !=4);

    return 0;   

}