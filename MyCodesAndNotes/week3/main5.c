// Add peek and Isempty functions

#include <stdio.h>

#define MAX 5

int stack[MAX];
int top=-1;

void push(int val){
    if(top==MAX-1){
        printf("Stack Overflow! Cannot push %d",val);
        return;
    }
    stack[++top]=val;
}


int pop(){
    if(top==-1){
        printf("Stack Underflow!");
        return -1;
    }
    return stack[top--];
}


// peek looks at the top value WITHOUT removing it
int peek(){
    if(top==-1){   // if stack is empty nothing to peek
        printf("Stack is empty!\n");
        return -1;
    }
    return stack[top];   // just return top value, dont change top
}

// isEmpty checks if the stack has no elements
void isEmpty(){
    if(top==-1){
        printf("Stack is empty\n");   
    }
    else{
        printf("Stack is not empty\n");  
    }
    
}


int main(){
    isEmpty(); 

    push(10);
    push(20);
    push(30);

    isEmpty();
    printf("Peek: %d\n", peek());         // output: 30 (just looks, doesnt remove)
    printf("Peek: %d\n", peek());         // output: 30 (still there!)

    printf("Pop: %d\n", pop());           // output: 30 (now it is removed)
    printf("Peek: %d\n", peek());         // output: 20 (new top)

    return 0;

}
