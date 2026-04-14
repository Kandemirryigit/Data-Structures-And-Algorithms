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


void displayBackward(struct Node *head){
    if(head==NULL){
        printf("List is empty!");
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

    printf("\n");

}




int main(){
    struct Node *head = NULL;

    head = insertTail(head, 10);
    head = insertTail(head, 20);
    head = insertTail(head, 30);

    displayBackward(head);

    return 0;
}