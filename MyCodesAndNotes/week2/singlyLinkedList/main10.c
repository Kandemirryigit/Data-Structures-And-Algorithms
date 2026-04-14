// Find the maximum value

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


struct Node* insertTail(struct Node* head,int val){
    struct Node* newNode=malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->next=NULL;
    if(head==NULL) return newNode;

    struct Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=newNode;
    return head;
}



// This function walks through the list and finds the biggest value
int findMax(struct Node* head){
    // if list is empty return -1
    if (head == NULL) return -1;

    int max=head->data;    // assume first node has the biggest value
    struct Node* curr=head->next;   // start checking from second node

    while(curr!=NULL){
        if(curr->data>max){    // did we find something bigger?
            max=curr->data;    // yes! update max
        }
        curr=curr->next;   // move to next node
    }

    return max;  // return the biggest value we found

}


int main(){


    struct Node* head=NULL;

    // Build list: 40 -> 10 -> 99 -> 25 -> 7 -> NULL
    head = insertTail(head, 40);
    head = insertTail(head, 10);
    head = insertTail(head, 99);
    head = insertTail(head, 25);
    head = insertTail(head, 7);

    printf("Max value: %d\n", findMax(head));  // output: 99
    return 0;
}