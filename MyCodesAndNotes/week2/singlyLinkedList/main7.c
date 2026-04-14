// Delete a node

#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node* next;
};


void printList(struct Node* head){
    struct Node* curr=head;
    while(curr!=NULL){
        printf("%d -> ",curr->data);
        curr=curr->next;
    }
    printf("NULL\n");

}


struct Node* insertTail(struct Node* head,int val){
    struct Node* newNode=malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->next=NULL;

    if (head==NULL) return newNode;

    struct Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=newNode;
    return head;

}



// This function finds a node with the given value and removes it
struct Node* deleteNode(struct Node* head,int val){
    // if list is empty do nothing
    if (head == NULL) return NULL;

    // if the node to delete is the head
    if(head->data==val){
        struct Node* temp=head->next;   // save the next node
        free(head);      // free the head
        return temp;     // new head is the next node
    }


    // walk until we find the node BEFORE the one we want to delete
    struct Node* curr = head;
    while (curr->next != NULL && curr->next->data != val) {
        curr = curr->next;
    }

    // if we found it
    if (curr->next != NULL) {
        struct Node* temp = curr->next;       // node to delete
        curr->next = curr->next->next;        // skip over it
        free(temp);                           // free it from memory
    }

    return head;

}




int main(){

    struct Node* head=NULL;

    // Build list: 10 -> 20 -> 30 -> 40 -> NULL
    head = insertTail(head, 10);
    head = insertTail(head, 20);
    head = insertTail(head, 30);
    head = insertTail(head, 40);


    printList(head);   // output: 10 -> 20 -> 30 -> 40 -> NULL


    head = deleteNode(head, 20);  // delete middle node
    printList(head);              // output: 10 -> 30 -> 40 -> NULL

    head = deleteNode(head, 10);  // delete head node
    printList(head);              // output: 30 -> 40 -> NULL

    head = deleteNode(head, 40);  // delete tail node
    printList(head);              // output: 30 -> NULL

    return 0;





}