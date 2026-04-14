// Create 2 nodes and connect them

#include <stdio.h>
#include <stdlib.h>



struct Node{
    int data;
    struct Node* next;
};


int main(){
    struct Node* node1=malloc(sizeof(struct Node));
    struct Node* node2=malloc(sizeof(struct Node));

    node1->data=10;
    node1->next=node2;  // node1 points to node2

    node2->data=20;
    node2->next=NULL;  // node2 is the last

    printf("%d -> %d\n", node1->data, node2->data);  // 10 -> 20

    free(node1);
    free(node2);

    return 0;
}