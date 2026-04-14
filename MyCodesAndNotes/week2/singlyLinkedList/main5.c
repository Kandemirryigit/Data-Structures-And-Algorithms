// Insert at tail

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


// This function creates a new node and puts it at the END of the list
struct Node* insertTail(struct Node* head,int val){
    struct Node* newNode=malloc(sizeof(struct Node));  // create new node
    newNode->data=val;   // set its value
    newNode->next=NULL;  // it will be the last node so next is NULL

    // if list is empty, new node becomes the head directly
    if(head==NULL) return newNode;


    // walk to the last node
    struct Node* curr=head;
    while(curr->next != NULL){   // keep going until we find the last node
        curr=curr->next;
    }

    curr->next = newNode;  // attach new node at the end
    return head;

}






int main(){
    struct Node* head=NULL;  // start with empty list

    head=insertTail(head,10);
    head=insertTail(head,20);
    head=insertTail(head,30);

    printList(head);
    return 0;
}