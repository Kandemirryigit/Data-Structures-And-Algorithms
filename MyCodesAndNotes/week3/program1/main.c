#include <stdio.h>

#define MAX 5

int stack[MAX];
int top=-1;

void push(int value){
    if(top==MAX-1){
        printf("Stack Overflow!");
        return;
    }

    stack[++top]=value;

}

int pop(){
    if(top==-1){
        printf("Stack Underflow!");
        return -1;
    }

    stack[top--];
}


void peek(){
    if(top==-1){
        printf("Stack is empty!");
        return ;
    }

    printf("%d\n",stack[top]);
}


void printStack(){
    if(top==-1){
        printf("Stack is empty!\n");
        return;
    }

    printf("Stack top to bottom\n");
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }

}


int main(){

    int choice=0;
    int number=0;
    do{
        printf("1- Push\n");
        printf("2- Pop\n");
        printf("3- Peek\n");
        printf("4- Display\n");
        printf("5- Exit\n");

        printf("\nWhats your choice: ");
        scanf("%d",&choice);
        getchar();

        if(choice==1){
            printf("Whic number do you want to push: ");
            scanf("%d",&number);
            getchar();
            push(number);
        }
        else if(choice==2){
            pop();
        }
        else if(choice==3){
            peek();
        }
        else if(choice==4){
            printStack();
        }


    }while(choice!=5);

    return 0;
}

