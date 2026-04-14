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
        return newNode;
    }

    struct Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=newNode;

    return head;
}


void printList(struct Node *head){
    if(head==NULL){
        printf("The list is empty!");
        return;
    }

    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}


struct Node *deleteNode(struct Node *head,int target){

    // Case 1: list is empty
    if(head==NULL){
        printf("List is empty!");
        return NULL;
    }

    // Case 2: delete the head node
    if(head->data==target){
        struct Node *temp=head;
        head=head->next;
        free(temp);
        return head;
    }

    // Case 3: delete a middle or tail node
    struct Node *prev = NULL;
    struct Node *curr = head;

    while(curr!=NULL && curr->data!=target){
        prev=curr;
        curr=curr->next;
    }


    // target not found
    if(curr==NULL){
        printf("Value %d not found.\n", target);
        return head;
    }

    // skip over the target node
    prev->next=curr->next;
    free(curr);

    return head;

}



int main() {
    struct Node* head = NULL;

    head = insertTail(head, 10);
    head = insertTail(head, 20);
    head = insertTail(head, 30);
    head = insertTail(head, 40);

    printf("Original List: ");
    printList(head);

    // Delete a middle node
    head = deleteNode(head, 20);
    printf("After deleting 20: ");
    printList(head);

    // Delete the head node
    head = deleteNode(head, 10);
    printf("After deleting 10: ");
    printList(head);

    // Delete the last node
    head = deleteNode(head, 40);
    printf("After deleting 40: ");
    printList(head);

    return 0;
}