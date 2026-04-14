#include <stdio.h>
#include <stdlib.h>


// Define the structure of a tree node
struct Node{
    int data;   // value stored in the node
    struct Node* left;   // pointer to left child
    struct Node* right;  // pointer to right child
};


// Function to create a new node
struct Node* createNode(int value){
    struct Node* n=malloc(sizeof(struct Node));    // allocate memory for one node
    n->data=value;
    // initially, node has no children
    n->left=NULL;
    n->right=NULL;
    return n;
}


int main(){
    struct Node* root=createNode(10);

    root->left=createNode(5);
    root->right=createNode(20);

    printf("Root: %d\n",root->data);
    printf("Left: %d\n",root->left->data);
    printf("Right: %d\n",root->right->data);

    return 0;
}