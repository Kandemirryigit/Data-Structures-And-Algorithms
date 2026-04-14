// Postorder Traversal

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


// postorder — Left, Right, Root
void postorder(struct Node* root){
    if(root==NULL) return;   // base case — nothing to print

    postorder(root->left);     // 1. go left first
    postorder(root->right);    // 2. go right
    printf("%d ",root->data);  // 3. print current node LAST
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

    printf("Postorder ");
    postorder(root);    // output: 20 40 30 70 50
    printf("\n");


    return 0;

}