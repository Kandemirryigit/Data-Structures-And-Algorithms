// Insert at head

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


void printList(struct Node* head){
    struct Node* curr=head;
    while(curr!=NULL){
        printf("%d ->",curr->data);
        curr=curr->next;
    }
    printf("NULL\n");
}


// This function creates a new node and puts it at the FRONT of the list
struct Node* insertHead(struct Node* head,int val){
    struct Node* newNode=malloc(sizeof(struct Node));    // create new node
    newNode->data=val;    // set its value
    newNode->next=head;   // new node points to the old head
    return newNode;       // new node is now the new head
}



int main(){
    struct Node* head=NULL;    // start with empty list

    head=insertHead(head,30);  // list: 30 -> NULL
    head=insertHead(head,20);  // list: 20 -> 30 -> NULL
    head=insertHead(head,10);  // list: 10 -> 20 -> 30 -> NULL

    printList(head);  // output: 10 -> 20 -> 30 -> NULL

    return 0;
}