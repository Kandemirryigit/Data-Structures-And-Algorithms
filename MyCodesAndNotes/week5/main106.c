// Search in a BST

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



// this function searches for a value in the BST
// returns 1 if found, 0 if not found
int search(struct Node* root,int val){
    // if we reached NULL the value is not in the tree
    if(root==NULL) return 0;

    // if we found it return 1
    if(root->data==val) return 1;

    if(val<root->data)
        // val is smaller so search LEFT side
        return search(root->left,val);
    else
        // val is bigger so search RIGHT side
        return search(root->right,val);
}



int main(){

    struct Node* root=NULL;

    // build the tree
    root=insert(root,50);
    root=insert(root,30);
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


    // search for values
    printf("Search 40: %d\n",search(root,40));   // output: 1 (found)
    printf("Search 60: %d\n", search(root, 60));  // output: 1 (found)
    printf("Search 99: %d\n", search(root, 99));  // output: 0 (not found)
    printf("Search 20: %d\n", search(root, 20));  // output: 1 (found)

    return 0;

}



