// Search for a value

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


// This function searches for a value and returns its index
// if not found returns -1
int search(struct Node* head,int val){
    struct Node* curr=head;  // start at head
    int index=0;   // keep track of position

    while(curr!=NULL){
        if(curr->data==val){   // did we find it?
            return index;      // yes! return its position
        }
        curr=curr->next;    // move to next node
        index++;            // increase position counter
    }

    return -1;   // we reached NULL without finding it

}




int main(){
    struct Node* head=NULL;

    // Build list: 10 -> 20 -> 30 -> 40 -> NULL
    head=insertTail(head,10);
    head=insertTail(head,20);
    head=insertTail(head,30);


    printf("20 is at index: %d\n", search(head, 20));  // output: 1
    printf("30 is at index: %d\n", search(head, 30));  // output: 2
    printf("99 is at index: %d\n", search(head, 99));  // output: -1 (not found)


    return 0;
}