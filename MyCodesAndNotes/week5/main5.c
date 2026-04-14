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


// Insert value into BST
struct Node* insert(struct Node* root,int value){
    if(root==NULL){
        return createNode(value);   // empty tree, create node
    }
    if(value<root->data)
        root->left=insert(root->left,value);  // go left
    else
        root->right=insert(root->right,value);  // go right

    return root;
    
}


// Inorder traversal (prints sorted numbers)
void inorder(struct Node* root){
    if(root==NULL) return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}



int main(){
    struct Node* root=NULL;

    // insert nodes automatically
    root=insert(root,10);
    insert(root,5);
    insert(root,20);
    insert(root,3);
    insert(root,7);

    printf("Inorder traversal (sorted): ");
    inorder(root);
    printf("\n");

    return 0;

}
