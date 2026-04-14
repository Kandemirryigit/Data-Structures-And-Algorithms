// Create a single node

#include <stdio.h>
#include <stdlib.h>  // for malloc and free


// Creating a blueprint for a node
struct Node{
    int data;
    struct Node* next;
};



int main(){
    // Create a node
    struct Node* node1=malloc(sizeof(struct Node));
    node1->data=10;    // added data
    node1->next=NULL;  // no next node yet

    printf("Node value: %d\n", node1->data);  // prints 10

    free(node1);  // always free!
    return 0;
}



// We create one node, give it the value 10, and point it to NULL because there's no next node.