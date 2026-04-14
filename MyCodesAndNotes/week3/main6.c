// Add print all stack elements function

#include <stdio.h>

#define MAX 5

int stack[MAX];
int top=-1;


void push(int val){
    if(top==MAX-1){
        printf("Stack Overflow\n");
        return;
    }
    stack[++top]=val;
}


int pop(){
    if(top==-1){
        printf("Stack Underflow!\n");
        return -1;
    }
    return stack[top--];
}



int peek(){
    if(top==-1){
        printf("Stack is Empty");
        return -1;
    }
    return stack[top];
}



void printStack(){
    if(top==-1){
        printf("Stack is empty!\n");
        return;
    }
    
    printf("Stack (top to bottom):\n");
    for(int i=top;i>=0;i--){  // start from top, go down to 0
        printf("%d\n",stack[i]);
    }
}



int main(){

    push(10);    // stack: [10]
    push(20);    // stack: [10, 20]
    push(30);    // stack: [10, 20, 30]
    push(40);    // stack: [10, 20, 30, 40]

    printStack();
    // output:
    // Stack (top to bottom):
    // 40
    // 30
    // 20
    // 10

    printf("\nPopped: %d\n",pop());  // remove 40

    printStack();
     // output:
    // Stack (top to bottom):
    // 30
    // 20
    // 10

    return 0;
}


