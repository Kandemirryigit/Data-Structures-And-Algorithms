// Add overflow and underflow checks

#include <stdio.h>

#define MAX 3  // stack can hold maximum 3 elements

int stack[MAX];
int top=-1;

// push function with overflow check
void push(int val){
    if(top==MAX-1){   // if top reached the last spot, stack is full
        printf("Stack overflow! Cannot push %d\n",val);
        return;
    }
    stack[++top]=val;  // increase top first, then put value there
}


// pop function with underflow check
int pop(){
    if(top==-1){   // if top is -1, stack is empty
        printf("Stack Underflow! Nothing to pop\n");
        return -1;
    }
    return stack[top--];    // return top value first, then decrease top
}



int main(){
    push(10);   // stack: [10]
    push(20);   // stack: [10, 20]
    push(30);   // stack: [10, 20, 30]  — stack is now full
    push(40);   // output: Stack overflow! Cannot push 40

    printf("Popped: %d\n", pop());  // output: 30
    printf("Popped: %d\n", pop());  // output: 20
    printf("Popped: %d\n", pop());  // output: 10
    printf("Popped: %d\n", pop());  // output: Stack underflow! Nothing to pop


}
