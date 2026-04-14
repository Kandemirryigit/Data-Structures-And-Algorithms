// Create a Single Node

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* prev;   // pointer to PREVIOUS node
    struct Node* next;   // pointer to NEXT node
};


int main(){

    // create one node
    struct Node* node1=malloc(sizeof(struct Node));
    node1->data=10;
    node1->prev=NULL;  // no previous node
    node1->next=NULL;  // no next node

    printf("Node value: %d\n",node1->data);  // output: 10

    free(node1);
    return 0;
}


// The only difference from singly linked list:
// instead of one pointer next, we now have TWO pointers prev and next.
// That's it!