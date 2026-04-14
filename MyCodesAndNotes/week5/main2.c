#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};


struct Node* createNode(int value){
    struct Node* n=malloc(sizeof(struct Node));

    n->data=value;
    n->left=NULL;
    n->right=NULL;
    return n;
}


int main(){
    // Create root
    struct Node* root=createNode(10);

    // Level1
    root->left=createNode(5);
    root->right=createNode(20);

    // Level2
    root->left->left=createNode(15);
    root->left->right=createNode(7);
    root->right->left=createNode(15);
    root->right->right=createNode(25);


    // Print values manually to understand structure
    printf("Root: %d\n",root->data);

    printf("Left child of root: %d\n",root->left->data);
    printf("Right child of root: %d\n",root->right->data);

    printf("Left->Left: %d\n", root->left->left->data);
    printf("Left->Right: %d\n", root->left->right->data);

    printf("Right->Left: %d\n", root->right->left->data);
    printf("Right->Right: %d\n", root->right->right->data);

    return 0;

}
