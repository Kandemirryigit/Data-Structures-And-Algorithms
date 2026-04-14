// Create and Print

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int main(){
    // create 3 nodes
    struct Node* node1=malloc(sizeof(struct Node));
    struct Node* node2=malloc(sizeof(struct Node));
    struct Node* node3=malloc(sizeof(struct Node));

    // set values
    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    // connect them — last node points back to head!
    node1->next=node2;   // node1 → node2
    node2->next=node3;   // node2 → node3
    node3->next=node1;   // node3 → node1 (back to head!)

    // print all nodes
    // IMPORTANT — we cant use while(curr != NULL)
    // because there is no NULL in circular list!
    // instead we stop when we reach head again
    struct Node* head=node1;
    struct Node* curr=head;

    printf("Circular List: ");
    do{
        printf("%d ",curr->data);  // print current node
        curr=curr->next;  // move to next node
    }while(curr!=head);   // stop when we reach head again
    printf("\n");
    // output: Circular list: 10 20 30

    return 0;








}