#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//NEW_NODE = ptr

struct stack
{
    int data;
    struct stack *next;
};

struct stack *top = NULL;
struct stack *display(struct stack *);
struct stack *insert(struct stack *, int);
struct stack *delete(struct stack *);


int main(int argc, char *argv[]) {

    int val, choice;

    do {
        printf("\n\nEnter your choice: ");
        printf("\n1: Display Stack");
        printf("\n2: Insert");
        printf("\n3: Delete");
        printf("\n4: Exit\n");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                //Display
                top = display(top);
                break;

            case 2:
                //Insert
                printf("\n Enter the value to be inserted: ");
                scanf("%d", &val);
                top = insert(top, val);
                break;
            
            case 3:
                //Delete
                top = delete(top);
                break;
        }
    } while(choice !=4);

    return 0;   
   
}

//Display
struct stack *display(struct stack *top)
{
    struct stack *ptr;
    ptr = top;

    if(top == NULL)
        printf("\n Error: The Stack is Empty!");
    else {
    
        while(ptr != NULL)
        {
            printf("\n %d", ptr -> data);
            ptr = ptr -> next;
        }
    }
    return top;
}

//Insert

struct stack *insert(struct stack *top, int val)
{
    struct stack *ptr;
    
    ptr = (struct stack*)malloc(sizeof(struct stack));
    ptr -> data = val;
    
    if(top == NULL) {
        ptr -> next = NULL;
        top = ptr;
    }
    else {
        ptr -> next = top;
        top = ptr;
    }

    return top;
}

//Delete
struct stack *delete(struct stack *top)
{
    struct stack *ptr;
    ptr = top;

    if (top == NULL)
        printf("\n Error: Stack Underflow, can't delete");
    else {
    top = top -> next;
    
    printf("\n The value deleted: %d", ptr -> data);
    free(ptr);
    }
 
    return top;
}

