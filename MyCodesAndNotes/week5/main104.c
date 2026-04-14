// Create a new node with a function

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};


// this function creates a new node and returns it
// instead of writing malloc every time we just call this function
struct Node* createNode(int val){
    struct Node* newNode=malloc(sizeof(struct Node));
    newNode->data=val;     // set value
    newNode->left=NULL;    // no left child
    newNode->right=NULL;   // no right child
    return newNode;        // return the new node
}



int main(){

    // now building the tree is much cleaner
    struct Node* root= createNode(50);
    struct Node* n30= createNode(30);
    struct Node* n70= createNode(70);
    struct Node* n20= createNode(20);
    struct Node* n40= createNode(40);


    // connect them
    root->left=n30;
    root->right=n70;
    n30->left=n20;
    n30->right=n40;


    // print to verify
    printf("Root: %d\n", root->data);              // output: 50
    printf("Left: %d\n", root->left->data);        // output: 30
    printf("Right: %d\n", root->right->data);      // output: 70
    printf("30's left: %d\n", n30->left->data);    // output: 20
    printf("30's right: %d\n", n30->right->data);  // output: 40



    free(n20); free(n40);
    free(n30); free(n70);
    free(root);
    return 0;

}
