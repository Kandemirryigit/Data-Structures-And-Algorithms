// Insert Into a BST With a Function

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


// this function inserts a value in the correct position in the BST
// if val is smaller than current node go left
// if val is bigger than current node go right
struct Node* insert(struct Node* root,int val){
    // if tree is empty or we reached an empty spot
    // create a new node here
    if(root==NULL) return createNode(val);

    if(val<root->data){
        // val is smaller so go LEFT
        root->left=insert(root->left,val);
    }
    else if(val>root->data){
        // val is bigger so go RIGHT
        root->right=insert(root->right,val);
    }

    return root;   // return the unchanged root
}



int main(){

    struct Node* root=NULL;  // start with empty tree

    // insert values one by one
    root=insert(root,50);   // 50 becomes root
    root=insert(root,30);   // 30 < 50 goes left
    root=insert(root,70);   // 70 > 50 goes right
    root=insert(root,20);   // 20 < 50 < 30 goes left of 30
    root=insert(root,40);   // 40 < 50 > 30 goes right of 30
    root=insert(root,60);   // 60 > 50 < 70 goes left of 70
    root=insert(root,80);   // 80 > 50 > 70 goes right of 70


    // verify some values
    printf("Root: %d\n", root->data);              // output: 50
    printf("Left: %d\n", root->left->data);        // output: 30
    printf("Right: %d\n", root->right->data);      // output: 70
    printf("30's left: %d\n", root->left->left->data);   // output: 20
    printf("30's right: %d\n", root->left->right->data); // output: 40


    return 0;


}



/*

         50
        /  \
       30   70
       / \  / \
      20 40 60 80

*/