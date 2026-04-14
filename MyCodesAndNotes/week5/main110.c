// Count total Nodes in a tree

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


// this function counts every node in the tree
int countNodes(struct Node* root){
    // if we reached NULL there is no node here
    if(root==NULL) return 0;

    // count left nodes + right nodes + current node (1)
    return 1+countNodes(root->left) + countNodes(root->right);
}


int main(){

    struct Node* root=NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);

    //        50
    //       /  \
    //      30   70
    //     / \
    //    20  40


    printf("Total nodes: %d\n", countNodes(root));  // output: 5


    // add two more nodes
    root = insert(root, 60);
    root = insert(root, 80);

    printf("Total nodes: %d\n", countNodes(root));  // output: 7

    return 0;



}

