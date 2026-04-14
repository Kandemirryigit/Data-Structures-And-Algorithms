#include <stdio.h>
#include <stdlib.h>

// Definition of the Node structure
struct Node{
    int data;
    struct Node *next;
};

// Function to add a node to the end of the circular list
struct Node *addToEnd(struct Node *last, int value){
    // Allocate memory for the new node
    struct Node *newNode=malloc(sizeof(struct Node));
    newNode->data=value;

    if(last==NULL){
        // If the list is empty, node points to itself
        newNode->next=newNode;
        return newNode;
    }

    // New node points to the head (last->next)
    newNode->next=last->next;
    // Current last node points to the new node
    last->next=newNode;

    // Return the new node as the "last" node
    return newNode;

}


// Function to traverse and print the circular list
void displayList(struct Node *last){
    if(last==NULL){
        printf("List is empty!");
        return;
    }

    struct Node *temp=last->next;  // Start from the Head node
    printf("Circular Linked List:");

    do{
        printf("%d -> ",temp->data);
        temp=temp->next;
    }while(temp!=last->next);   // Stop when we loop back to Head

    printf("Back to head!");

}




int main(){
    struct Node *last=NULL;

    int count;
    int number;

    printf("How many numbers would you like to enter: ");
    scanf("%d",&count);

    for(int i=0;i<count;i++){
        printf("Enter value-%d: ",i+1);
        scanf("%d",&number);
        last=addToEnd(last,number);
    }

    displayList(last);
    return 0;
}