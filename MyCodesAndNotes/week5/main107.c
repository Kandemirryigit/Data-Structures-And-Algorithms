// Inorder traversal

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};


struct Node* createNote(int val){
    struct Node* newNode=malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

struct Node* insert(struct Node* root,int val){
    if(root==NULL) return createNote(val);

    if(val<root->data)
        root->left=insert(root->left,val);
    else if(val>root->data)
        root->right=insert(root->right,val);

    return root;
}



// inorder traversal — Left, Root, Right
// this always prints BST values in SORTED order
void inorder(struct Node* root){
    if(root==NULL) return;  // base case — nothing to print

    inorder(root->left);        // first go all the way left
    printf("%d ",root->data);  // then print current node
    inorder(root->right);       // then go right

}


int main(){

    struct Node* root=NULL;

    root=insert(root,50);
    root = insert(root, 30);
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

    printf("Inorder: ");
    inorder(root);   // output: 20 30 40 50 60 70 80
    printf("\n");

    return 0;

}
