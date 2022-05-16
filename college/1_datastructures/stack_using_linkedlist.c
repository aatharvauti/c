#include<stdio.h>
#include<stdlib.h>

// TOP = top
// VAL = val
// NEW_NODE = ptr

struct node *top;
void push();
void pop();
void display();

struct node {
	int val;
	struct node *next;
};

// Switch Main Menu

int main() {

    int choice;

    do {
        printf("\n\nEnter your choice: ");
        printf("\n1: Display");
        printf("\n2: Push");
        printf("\n3: Pop");
        printf("\n4: Exit\n");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                display();
                break;

            case 2:
                push();
                break;
            
            case 3:
                pop();
                break;
        }
    } while(choice !=4);

    return 0;   

}

void display()  
{  
    struct node *ptr;  
    ptr = top;
    if(ptr == NULL)
        printf("ERR: The Stack is Empty\n");
    else {
        while(ptr != NULL)
        {
			printf("\n");
            printf("%d ",ptr->val);
            ptr = ptr->next;
        }
    }
}

void push () {

    int val;
    struct node *ptr =(struct node*)malloc(sizeof(struct node));

    if(ptr == NULL)
        printf("ERR: The value can't be NULL\n");
    else {
        printf("Enter the value to be PUSHED\n");
        scanf("%d", &val);
        if(top == NULL) {
            ptr -> val = val;
            ptr -> next = NULL;
            top = ptr;
        }
        else {
            ptr -> val = val;  
            ptr -> next = top;  
            top = ptr;  
        }  
    }
}

void pop() {

    int del;
    struct node *ptr;
    if (top == NULL) // Empty Stack?
        printf("ERR: UNDERFLOW\n");
    else {
        del = top -> val;
        ptr = top;
        top = top -> next;
        free(ptr);
    }  
}