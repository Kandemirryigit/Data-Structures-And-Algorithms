// Create a root with 2 children

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;   // left child
    struct Node* right;  // right child
};


int main(){

    // Create root node
    struct Node* root=malloc(sizeof(struct Node));
    root->data=50;
    root->left=NULL;
    root->right=NULL;


    // Create left child
    struct Node* leftChild=malloc(sizeof(struct Node));
    leftChild->data=30;
    leftChild->left=NULL;
    leftChild->right=NULL;


    // Create right child
    struct Node* rightChild=malloc(sizeof(struct Node));
    rightChild->data=70;
    rightChild->right=NULL;
    rightChild->left=NULL;

    // Connect children to root
    root->left=leftChild;
    root->right=rightChild;

    // Print the tree nodes
    printf("Root: %d\n",root->data);
    printf("Left child: %d\n",root->left->data);
    printf("Right child: %d\n",root->right->data);

    free(root);
    free(leftChild);
    free(rightChild);

    return 0;

}


/*

      50
     /  \
   30    70
  / \    / \
NULL NULL NULL NULL


*/