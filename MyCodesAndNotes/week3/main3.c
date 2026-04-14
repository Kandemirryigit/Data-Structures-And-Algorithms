// Add a pop function

#include <stdio.h>

int stack[5];   // our stack
int top=-1;     // -1 means empty


// push function adds a value to the top
void push(int val){
    stack[++top]=val;   // increase top first, then put value there
}


// pop function removes and returns the top value
int pop(){
    return stack[top--];  // return top value first, then decrease top
}


int main(){

    push(10);   // stack: [10]
    push(20);   // stack: [10, 20]
    push(30);   // stack: [10, 20, 30]

    // now lets pop them one by one
    printf("Popped: %d\n",pop());   // output: 30  (last in first out!)
    printf("Popped: %d\n",pop());   // output: 20
    printf("Popped: %d\n",pop());   // output: 10

    return 0;
}