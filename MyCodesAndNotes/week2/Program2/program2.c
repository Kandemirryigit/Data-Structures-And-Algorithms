// All functions for singly linked list


#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};


void show(struct Node *head){
    if(head==NULL){
        printf("List is empty!\n");
        return;
    }

    while(head!=NULL){
        printf("%d ->",head->data);
        head=head->next;
    }

}


struct Node *insertHead(struct Node *head,int value){
    struct Node *newNode=malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=head;
    return newNode;
}


struct Node *insertTail(struct Node *head,int value){
    struct Node *newNode=malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;

    if(head==NULL) return newNode;

    struct Node *current=head;
    while(current->next!=NULL){
        current=current->next;
    }

    current->next=newNode;

    return head;

}



int search(struct Node *head,int value){
    struct Node *current=head;
    int index=0;

    while(current!=NULL){
        if(current->data==value){
            return index;
        }
        else{
            current=current->next;
            index++;
        }
    }

    return -1;

}



struct Node *deleteNode(struct Node *head,int value){
    if(head==NULL) return NULL;

    if(head->data==value){
        struct Node *temp=head->next;
        free(head);
        return temp;
    }

    struct Node *current=head;
    while(current->next!=NULL && current->next->data!=value){
        current=current->next;
    }

    if(current->next!=NULL){
        struct Node *temp=current->next;
        current->next=current->next->next;
        free(temp);
    }

    return head;

}



int countNodes(struct Node *head){
    struct Node *temp=head;
    int count=0;

    if(temp==NULL) return 0;
    
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }

    return count;
}



int findMax(struct Node *head){
    if(head==NULL) return 0;

    int max=head->data;
    struct Node *temp=head;

    while(temp!=NULL){
        if(temp->data>max){
            max=temp->data;
        }
            
        temp=temp->next;
    }

    return max;

}



int findMin(struct Node *head){
    if(head==NULL) return 0;

    int min=head->data;
    struct Node *temp=head;

    while(temp!=NULL){
        if(temp->data<min){
            min=temp->data;
        }
        temp=temp->next;
    }

    return min;

}





int main(){
    struct Node *head=NULL;

    char choice;
    int number;
    do{
        printf("\n1- Add to the head\n");
        printf("2- Add to the end\n");
        printf("3- Search\n");
        printf("4- Delete a value\n");
        printf("5- Count the nodes\n");
        printf("6- Find max value\n");
        printf("7- Find min value\n");
        printf("8- Display the list\n");
        printf("9- Exit\n");

        printf("What's your choice: ");
        scanf("%c",&choice);
        getchar();

        if(choice=='1'){
            printf("Number: ");
            scanf("%d",&number);
            getchar();
            head=insertHead(head,number);
        }
        else if(choice=='2'){
            printf("Number: ");
            scanf("%d",&number);
            getchar();
            head=insertTail(head,number);
        }
        else if(choice=='3'){
            printf("Which number do you wanna search: ");
            scanf("%d",&number);
            printf("The index of the value %d is: %d",number,search(head,number));
        }
        else if(choice=='4'){
            printf("Which value do you want to delete: ");
            scanf("%d",&number);
            getchar();
            head=deleteNode(head,number);
        }
        else if(choice=='5'){
            printf("Count of nodes are %d",countNodes(head));
        }
        else if(choice=='6'){
            printf("The max value in the list are: %d",findMax(head));
        }
        else if(choice=='7'){
            printf("The min value in the list are: %d",findMin(head));
        }
        else if(choice=='8'){
            show(head);
        }


    
    }while(choice!='9');
    

    



}