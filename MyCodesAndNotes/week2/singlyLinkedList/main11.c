// Real life example of linked list
// Task manager

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    char task[100];
    struct Node* next;
};


// Add task at the end
struct Node* addTask(struct Node* head,char* taskName){
    struct Node* newNode=malloc(sizeof(struct Node));
    strcpy(newNode->task,taskName);
    newNode->next=NULL;

    if(head==NULL) return newNode;

    struct Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=newNode;
    return head;
}


// Delete task by name
struct Node* deleteTask(struct Node* head,char* taskName){
    if(head==NULL) return NULL;

    if(strcmp(head->task,taskName)==0){
        struct Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }

    struct Node* curr = head;
    while(curr->next != NULL && strcmp(curr->next->task, taskName) != 0){
        curr = curr->next;
    }


    if(curr->next != NULL){
        struct Node* temp = curr->next;
        curr->next = temp->next;
        free(temp);
    }

    return head;


}



// Print all tasks
void showTasks(struct Node* head){
    printf("\nYour Tasks:\n");
    while(head != NULL){
        printf("- %s\n", head->task);
        head = head->next;
    }
}



int main(){
    struct Node* head = NULL;

    head = addTask(head, "Study C");
    head = addTask(head, "Go to gym");
    head = addTask(head, "Drink water");

    showTasks(head);

    printf("\nDeleting 'Go to gym'...\n");
    head = deleteTask(head, "Go to gym");

    showTasks(head);

    return 0;
}

