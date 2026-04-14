#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};


struct Node *insertTail(struct Node *head,int value){
    struct Node *newNode=malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;

    if(head==NULL){
        newNode->prev=NULL;
        return newNode;
    }

    struct Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=newNode;
    newNode->prev=temp;

    return head;
}



void displayForward(struct Node *head){
    if(head==NULL){
        printf("The list is empty!");
        return;
    }

    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

}


void displayBackward(struct Node *head){
    if(head==NULL){
        printf("The list is empty!");
        return;
    }

    struct Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->prev;
    }
    printf("NULL\n");

}


int main(){
    struct Node *head = NULL;

    head = insertTail(head, 10);
    head = insertTail(head, 20);
    head = insertTail(head, 30);

    printf("Forward:\n");
    displayForward(head);

    printf("Backward:\n");
    displayBackward(head);

    return 0;
}