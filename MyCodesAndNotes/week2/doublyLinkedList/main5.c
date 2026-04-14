// Insert at Tail

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};


void printForward(struct Node* head){
    struct Node* curr=head;
    while(curr!=NULL){
        printf("%d ",curr->data);
        curr=curr->next;
    }
    printf("\n");
}


// insert new node at the end of the list
struct Node* insertTail(struct Node* head,int val){

    // create new node
    struct Node* newNode=malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->prev=NULL;   // new node is the last so next is NULL
    newNode->next=NULL;   // will be set later

    // if list is empty new node becomes the head
    if(head==NULL) return newNode;

    // walk to the last node
    struct Node* curr=head;
    while(curr->next!=NULL)
        curr=curr->next;


    // connect new node to the last node in BOTH directions
    curr->next=newNode;   // last node points forward to new node
    newNode->prev=curr;   // new node points backward to last node

    return head;

}


int main(){

    struct Node* head = NULL;

    head=insertTail(head,10);   // list: 10
    head=insertTail(head,20);   // list: 10 20
    head=insertTail(head,30);   // list: 10 20 30

    printForward(head);
    return 0;

}