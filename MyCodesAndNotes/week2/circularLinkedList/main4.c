// Insert at tail

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *insertTail(struct Node *head,int value){
    struct Node *newNode=malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;

    if(head==NULL){
        newNode->next=newNode;
        return newNode;
    }

    struct Node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }

    temp->next=newNode;
    newNode->next=head;

    return head;

}


void display(struct Node *head){
    if(head==NULL){
        printf("The list is empty!");
        return;
    }

    struct Node *temp=head;
    do{
        printf("%d ->",temp->data);
        temp=temp->next;
    }while(temp!=head);

}



int main() {
    struct Node* head = NULL;

    head = insertTail(head, 10);
    head = insertTail(head, 20);
    head = insertTail(head, 30);

    display(head); 

    return 0;
}