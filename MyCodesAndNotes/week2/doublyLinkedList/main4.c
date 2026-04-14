//  Insert at Head

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// print forward
void printForward(struct Node* head){
    struct Node* curr=head;
    while(curr!=NULL){
        printf("%d ",curr->data);
        curr=curr->next;
    }
    printf("\n");
}


// insert new node at the front of the list
struct Node* insertHead(struct Node* head,int val){

    // create new node
    struct Node* newNode=malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->prev=NULL;   // new node has no previous — it is the head
    newNode->next=head;   // new node points forward to old head

    // if list was not empty, old head must point back to new node
    if (head != NULL) 
        head->prev=newNode;  // old head's previous is now new node
    

    return newNode;  // new node is the new head
}


int main(){
    struct Node* head=NULL;  // empty list

    head=insertHead(head,30);   // list: 30
    head=insertHead(head,20);   // list: 20 30
    head=insertHead(head,10);   // list: 10 20 30

    printForward(head);

    return 0;
}




