// count the nodes

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



// This function walks through the list and counts every node
int countNodes(struct Node* head){
    struct Node* curr=head;     // start at head
    int count=0;   // counter starts at 0

    while(curr!=NULL){    // keep going until NULL
        count++;          // add 1 for each node we visit
        curr=curr->next;  // move to next node
    }

    return count;     // return total count

}





int main(){

    struct Node* head=NULL;

    // Build list: 10 -> 20 -> 30 -> NULL
    head = insertTail(head, 10);
    head = insertTail(head, 20);
    head = insertTail(head, 30);

    printf("Number of nodes: %d\n", countNodes(head));  // output: 3

    // add two more
    head = insertTail(head, 40);
    head = insertTail(head, 50);

    printf("Number of nodes: %d\n", countNodes(head));  // output: 5

    return 0;



}