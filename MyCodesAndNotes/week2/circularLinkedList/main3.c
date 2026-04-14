// Display

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void display(struct Node *head){
    if(head==NULL){
        printf("List is empty!");
        return;
    }

    struct Node *temp=head;
    do{
        printf("%d ->",temp->data);
        temp=temp->next;
    }while(temp!=head);
    
}


int main(){

    struct Node *first=malloc(sizeof(struct Node));
    struct Node *second=malloc(sizeof(struct Node));

    first->data=10;
    first->next=second;

    second->data=20;
    second->next=first;

    display(first);




    return 0;
}