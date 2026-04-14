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



// insert node in BST
struct Node* insert(struct Node* root,int value){
    if(root==NULL) return createNode(value);
    if(value<root->data)
        root->left=insert(root->left,value);
    else
        root->right=insert(root->right,value);
    
    return root;
}



// search value in BST
int search(struct Node* root,int value){
    if(root==NULL) return 0;   // not found
    if(root->data==value) return 1;  // found

    if(value<root->data)
        return search(root->left,value);
    else   
        return search(root->right,value);

}



int main(){
    struct Node* root=NULL;

    //insert nodes
    root=insert(root,10);
    insert(root,5);
    insert(root,20);
    insert(root,3);
    insert(root,7);

    // search for values
    int value=7;
    if (search(root,value))
        printf("%d found in BST\n",value);
    else
        printf("%d not found in BST\n",value);


    value = 15;
    if (search(root, value))
        printf("%d found in BST\n", value);
    else
        printf("%d not found in BST\n", value);



    return 0;
}