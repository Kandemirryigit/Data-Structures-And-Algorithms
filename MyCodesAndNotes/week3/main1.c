// What stack looks like


#include <stdio.h>


int main(){
    // imagine these are our stack elements
    // we add them one by one from bottom to top
    // and we can only take from the top

    int stack[5];    // our stack — just an array of 5 spots
    int top=-1;      // -1 means stack is completely empty

    // lets manually push 3 values
    stack[++top]=10;   // top becomes 0,  stack: [10]
    stack[++top]=20;   // top becomes 1,  stack: [10, 20]
    stack[++top]=30;   // top becomes 2,  stack: [10, 20, 30]


    // print what is on top right now
    printf("Top value is: %d\n", stack[top]);  // output: 30

    // manually pop — just decrease top
    top--;  // top becomes 1,  stack: [10, 20]
    printf("Top value is: %d\n", stack[top]);  // output: 20

    top--;  // top becomes 0,  stack: [10]
    printf("Top value is: %d\n", stack[top]);  // output: 10


    return 0;

}


