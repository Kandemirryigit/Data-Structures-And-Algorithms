// Add a push function

#include <stdio.h>

int stack[5];  // our stack
int top=-1;    // -1 means empty

// push function adds a value to the top of the stack
void push(int val){
    stack[++top]=val;   // increase top first, then put value there
}

int main(){
    // now we use the push function instead of doing it manually
    push(10);  // top becomes 0,  stack: [10]
    push(20);  // top becomes 1,  stack: [10, 20]
    push(30);  // top becomes 2,  stack: [10, 20, 30]

    printf("top value is: %d\n",stack[top]);

    return 0;

}