// Insert at Head

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


void printCircular(struct Node* head){
    if(head==NULL) return;

    struct Node* curr=head;
    printf("Circular list: ");
    do{
        printf("%d ",curr->data);
        curr=curr->next;
    }while(curr!=head); // stop when we reach head again
    printf("\n");
}


// insert new node at the front of circular list
struct Node* insertHead(struct Node* head,int val){

    // create new node
    struct Node* newNode=malloc(sizeof(struct Node));
    newNode->data=val;

    // if list is empty node points to itself
    if(head==NULL){
        newNode->next=newNode;   // points to itself — circular!
        return newNode;
    }

    // find the last node — it currently points to head
    // we need to update it to point to new node
    struct Node* curr=head;
    while(curr->next!=head)  // walk until we find last node
        curr=curr->next;


    // connect new node
    newNode->next=head; // new node points to old head
    curr->next=newNode; // last node now points to new node

    return newNode;

}


int main(){
    struct Node* head=NULL;
    head=  insertHead(head,30);   // list: 30
    head = insertHead(head, 20);  // list: 20 30
    head = insertHead(head, 10);  // list: 10 20 30

    printCircular(head);  // output: Circular list: 10 20 30

    return 0;
}