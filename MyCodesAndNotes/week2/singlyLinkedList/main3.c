// print all nodes

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


// This function prints every node from head to NULL
void printList(struct Node* head){
    struct Node* curr=head;    // start at the head node

    while(curr!=NULL){   // keep going until we hit NULL
        printf("%d ->",curr->data);   // print current node's value
        curr=curr->next;  // move to the next node
    }

    printf("NULL\n");   // print NULL at the end to show the list ended
}




int main(){
    // Create 3 nodes
    struct Node* n1=malloc(sizeof(struct Node));
    struct Node* n2=malloc(sizeof(struct Node));
    struct Node* n3=malloc(sizeof(struct Node));

    // Set values
    n1->data=10;
    n2->data=20;
    n3->data=30;

    // Link them together
    n1->next=n2;
    n2->next=n3;
    n3->next=NULL;    // last node points to nothing

    // Print the whole list
    printList(n1);    // output: 10 -> 20 -> 30 -> NULL

    // free all nodes
    free(n1);
    free(n2);
    free(n3);

    return 0;
}