// Find Minimum and Maximum Value in a BST

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int val){
    struct Node* newNode=malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}


struct Node* insert(struct Node* root,int val){
    if(root==NULL) return createNode(val);

    if(val<root->data)
        root->left=insert(root->left,val);
    else if(val>root->data)
        root->right=insert(root->right,val);

    return root;
}


// minimum value is always the LEFTMOST node in a BST
int findMin(struct Node* root){
    if(root==NULL) return -1;   // empty tree

    // keep going left until we cant go left anymore
    while(root->left!=NULL)
        root=root->left;
    
    return root->data;  // leftmost node is the minimum
}


// maximum value is always the RIGHTMOST node in a BST
int findMax(struct Node* root){
    if(root==NULL) return -1;  // empty tree

    // keep going right until we cant go right anymore
    while(root->right!=NULL)
        root=root->right;

    return root->data;   // rightmost node is the maximum
}


int main(){

    struct Node* root=NULL;

    root = insert(root,50);
    root = insert(root,30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);


    //        50
    //       /  \
    //      30   70
    //     / \  / \
    //    20 40 60 80


    printf("Minimum: %d\n", findMin(root));  // output: 20
    printf("Maximum: %d\n", findMax(root));  // output: 80


    return 0;

}

