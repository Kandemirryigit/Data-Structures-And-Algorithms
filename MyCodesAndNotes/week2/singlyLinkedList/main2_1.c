#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


void printList(struct Node* head){
    struct Node* curr=head;
    while(curr!=NULL){
        printf("%d ->",curr->data);
        curr=curr->next;
    }
    printf("NULL");

}


int main(){
    // create 3 nodes manually
    struct Node* head=malloc(sizeof(struct Node));
    struct Node* second=malloc(sizeof(struct Node));
    struct Node* third=malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;

    printList(head);
    return 0;
}