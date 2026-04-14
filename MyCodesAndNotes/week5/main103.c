// Create a tree with 3 levels manually

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};


int main(){

    // Level 1 --root
    struct Node* root=malloc(sizeof(struct Node));
    root->data=50;
    root->left=NULL;
    root->right=NULL;


    // level 2 — left and right of root
    struct Node* n30 = malloc(sizeof(struct Node));
    n30->data = 30;
    n30->left = NULL;
    n30->right = NULL;


    struct Node* n70 = malloc(sizeof(struct Node));
    n70->data = 70;
    n70->left = NULL;
    n70->right = NULL;


    // level 3 — children of 30
    struct Node* n20 = malloc(sizeof(struct Node));
    n20->data = 20;
    n20->left = NULL;
    n20->right = NULL;

    struct Node* n40 = malloc(sizeof(struct Node));
    n40->data = 40;
    n40->left = NULL;
    n40->right = NULL;


    // level 3 — children of 70
    struct Node* n60 = malloc(sizeof(struct Node));
    n60->data = 60;
    n60->left = NULL;
    n60->right = NULL;

    struct Node* n80 = malloc(sizeof(struct Node));
    n80->data = 80;
    n80->left = NULL;
    n80->right = NULL;



    // connect everything together
    root->left=n30;
    root->right=n70;

    n30->left=n20;
    n30->right=n40;

    n70->left=n60;
    n70->right=n80;




    // print some values to verify
    printf("Root: %d\n", root->data);                    // output: 50
    printf("Root left: %d\n", root->left->data);         // output: 30
    printf("Root right: %d\n", root->right->data);       // output: 70
    printf("30's left: %d\n", root->left->left->data);   // output: 20
    printf("30's right: %d\n", root->left->right->data); // output: 40
    printf("70's left: %d\n", root->right->left->data);  // output: 60
    printf("70's right: %d\n", root->right->right->data);// output: 80



    free(n20); free(n40); free(n60); free(n80);
    free(n30); free(n70);
    free(root);
    return 0;



}




/*
        50
       /  \
      30   70
     / \  / \
    20 40 60 80

*/