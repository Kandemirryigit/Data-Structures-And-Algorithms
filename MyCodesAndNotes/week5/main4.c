// Inorder,Preorder/Postorder traversal

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


// Inorder traversal: LEFT -> ROOT -> RIGHT
void inorder(struct Node* root){
    if(root==NULL) return;       // stop if node is empty
    inorder(root->left);         // step 1: go left
    printf("%d ",root->data);    // step 2: visit current node (root)
    inorder(root->right);        // step 3: go right
} 


// Preorder traversal: ROOT -> LEFT -> RIGHT
void preorder(struct Node* root){
    if(root==NULL) return;
    printf("%d ",root->data);    // step 1: visit root first
    preorder(root->left);        // step 2: go left
    preorder(root->right);       // step 3: go right
}




// Postorder traversal: LEFT -> RIGHT -> ROOT
void postorder(struct Node* root){
    if(root==NULL) return;
    postorder(root->left);     // visit left
    postorder(root->right);    // visit right
    printf("%d ",root->data);  // visit root last
}





int main(){

    // Build tree
    struct Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(20);
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->left = createNode(15);
    root->right->right = createNode(25);


    // Print traversals
    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");


    printf("Preorder traversal: ");
    preorder(root);
    printf("\n");


    printf("Postorder traversal: ");
    postorder(root);
    printf("\n");


    return 0;

}
