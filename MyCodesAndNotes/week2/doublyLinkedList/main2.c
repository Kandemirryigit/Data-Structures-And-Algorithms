// Link Two Nodes Together

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* prev;   // pointer to PREVIOUS node
    struct Node* next;   // pointer to NEXT node
};


int main(){
    // create two nodes
    struct Node* node1=malloc(sizeof(struct Node));
    struct Node* node2=malloc(sizeof(struct Node));

    // set values
    node1->data=10;
    node2->data=20;

    // connect them in BOTH directions
    node1->prev=NULL;   // node1 has no previous node
    node1->next=node2;  // node1's next is node2

    node2->prev=node1;  // node2's previous is node1
    node2->next=NULL;   // node2 has no next node

    // print values
    printf("node1 value: %d\n", node1->data);     // output: 10
    printf("node2 value: %d\n", node2->data);     // output: 20

    // we can go FORWARD
    printf("From node2 go backward: %d\n",node2->prev->data);  // output: 10

    free(node1);
    free(node2);
    return 0;

}