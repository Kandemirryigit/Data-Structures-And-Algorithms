// Inorder traversal


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




// Inorder traversal (LEFT -> ROOT -> RIGHT)
void inorder(struct Node* root){
    // base case: if node is empty, stop
    if(root==NULL)
        return;

     // 1. go to left subtree
     inorder(root->left);

     // 2. print current node
     printf("%d ",root->data);

     // 3. go to right subtree
     inorder(root->right);

}


int main(){
    struct Node* root=createNode(10);

    root->left=createNode(5);
    root->right=createNode(20);

    root->left->left=createNode(3);
    root->left->right=createNode(7);

    printf("Inorder traversal: ");
    inorder(root);

    return 0;

}