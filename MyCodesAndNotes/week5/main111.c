// Find the Height of a Tree

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



// this function finds the height of the tree
// height = longest path from root down to a leaf
int height(struct Node* root){
    // if we reached NULL height is 0
    if(root==NULL) return 0;

    int leftHeight=height(root->left);   // height of left subtree
    int rightHeight=height(root->right);  // height of right subtree

    // return the bigger one plus 1 for current node
    if(leftHeight>rightHeight)
        return 1+leftHeight;
    else
        return 1+rightHeight;

}



int main(){

    struct Node* root=NULL;

    root = insert(root,50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);

    //        50          ← level 1
    //       /  \
    //      30   70       ← level 2
    //     / \
    //    20  40          ← level 3

    printf("Height: %d\n", height(root));  // output: 3

    // add one more level
    root = insert(root, 10);

    //        50          ← level 1
    //       /  \
    //      30   70       ← level 2
    //     / \
    //    20  40          ← level 3
    //   /
    //  10                ← level 4

    printf("Height: %d\n", height(root));  // output: 4

    return 0;

}