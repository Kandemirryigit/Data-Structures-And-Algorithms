// create a single tree node

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;     // left child
    struct Node* right;    // right child
};


int main(){

    // Create one node
    struct Node* node=malloc(sizeof(struct Node));
    node->data=50;     // set its value
    node->left=NULL;   // no left child yet
    node->right=NULL;  // no right child yet

    printf("Node value: %d\n", node->data);  // output: 50

    free(node);
    return 0;
}



/*
      50
     /  \
   NULL  NULL

*/