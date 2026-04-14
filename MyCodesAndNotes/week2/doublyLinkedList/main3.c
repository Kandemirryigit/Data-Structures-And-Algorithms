// Print All Nodes (Both Directions)

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

int main(){

    // create 3 nodes
    struct Node* node1=malloc(sizeof(struct Node));
    struct Node* node2=malloc(sizeof(struct Node));
    struct Node* node3=malloc(sizeof(struct Node));

    // set values
    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    // connect them in both directions
    node1->prev=NULL;   // node1 has no previous
    node1->next=node2;  // node1 → node2

    node2->prev=node1;  // node2 ← node1
    node2->next=node3;  // node2 → node3

    node3->prev=node2;   // node3 ← node2
    node3->next=NULL;    // node3 has no next


    // print forward — left to right
    printf("Forward: ");
    struct Node* curr=node1;  // start from head
    while(curr!=NULL){
        printf("%d ",curr->data);
        curr=curr->next;   // move forward
    }
    printf("\n");
    // output: Forward:  10 20 30


    // print backward — right to left
    printf("Backward: ");
    curr=node3;    // start from last node
    while(curr!=NULL){
        printf("%d ",curr->data);
        curr=curr->prev;  // move backward
    }
    printf("\n");
    // output: Backward: 30 20 10

    free(node1);
    free(node2);
    free(node3);
    return 0;

}



// This is impossible with a singly linked list
// you can only go forward with singly
// With doubly you can go both ways!