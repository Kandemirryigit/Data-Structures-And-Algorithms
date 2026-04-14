#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};


struct Node *createNode(int value){
    struct Node *newNode=malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}


// BST insert (recursive)
struct Node *insert(struct Node *root,int value){
    if(root==NULL){
        return createNode(value);
    }

    if(value<root->data){
        root->left=insert(root->left,value);
    }
    else if(value>root->data){
        root->right=insert(root->right,value);
    }

    return root;
}

// Inorder traversal 
void inorder(struct Node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}


int main(){
    struct Node *root=NULL;
    int num;

    printf("Enter student Ids):\n");
    while (1) {
        scanf("%d", &num);

        if (num == 0)
            break;

        root = insert(root, num);
    }

    printf("BST (Inorder): ");
    inorder(root);

    return 0;


}
