#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node * left;
    int data;
    struct node * right;
};

struct node *first=NULL;

struct node *insertelement(struct node *first,int data)
{

    struct node *ptr,*rootnode,*nodeptr;
    ptr=(struct node *)(malloc(sizeof(struct node)));
    
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;

    if(first==NULL) {
        first=ptr;
        ptr->left=NULL;
        ptr->right=NULL;
    }

    else {
        rootnode=NULL;
        nodeptr=first;

        while(nodeptr!=NULL){

            rootnode = nodeptr;
            if(data < rootnode -> data)
                nodeptr = nodeptr -> left;
            else
                nodeptr=nodeptr -> right;
        }

        if(data < rootnode -> data)
            rootnode -> left=ptr;
        else
            rootnode->right=ptr;
    }

    return first;
}

void inorder(struct node *first) 
{
    if(first != NULL) {
        inorder(first -> left);
        printf("%d   ",first -> data);
        inorder(first -> right);
    }
}

void preorder(struct node *first) 
{
    if(first != NULL) {
        printf("%d   ",first -> data);
        preorder(first -> left);
        preorder(first -> right);
    }
}

void postorder(struct node *first) 
{
    if(first != NULL) {
        postorder(first -> left);
        postorder(first -> right);
        printf("%d   ",first -> data);
    }
}

struct node *smallest(struct node *first)
{
    if(first==NULL || first->left==NULL)
        return first;
    else
        return smallest(first->left);
}

struct node *largest(struct node *first){
    if(first==NULL || first->right==NULL)
        return first;
    else
        return largest(first->right);
}

int main(){
    int choice, data;
    struct node *ptr;

    do {
        
        printf("\n\n1. Insert\n2. Inorder\n3. Preorder\n4. Postorder\n5. Smallest\n6. Largest\n");
        printf("Enter an Option: ");
        scanf("%d",&choice);
        
        switch(choice) 
        {  
            case 1:
            printf("\nEnter the element to insert: ");
            scanf("%d", &data);
            first = insertelement(first,data);
            printf("\nThe element is inserted in tree successfully...\n");
            break;
            
            case 2:
                printf("\nInorder Transversal: ");
                inorder(first);
                break;

            case 3:
                printf("\nPreorder Transversal: ");
                preorder(first);
                break;

            case 4:
                printf("\nPostorder Transversal: ");
                postorder(first);      
                break;

            case 5:
                printf("\nSmallest Number: ");
                ptr = smallest(first);
                printf("%d\n", ptr -> data);
                break;
            
            case 6:
                printf("\nLargest Number: ");
                ptr = largest(first);
                printf("%d\n", ptr -> data);
                break;

            default:
                printf("\nERR: Enter a valid number!");
            
        }
    } while(choice!=7);
    return 0;
}