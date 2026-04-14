// Create 2 nodes

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


int main(){
    // Create nodes
    struct Node* node1=malloc(sizeof(struct Node));
    struct Node* node2=malloc(sizeof(struct Node));

    node1->data=10;
    node1->next=node2;

    node2->data=20;
    node2->next=NULL;

    printf("%d -> %d",node1->data,node2->data);

    free(node1);
    free(node2);

    return 0;

}