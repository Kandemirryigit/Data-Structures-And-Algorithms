#include <stdio.h>

int main(){

    // imagine these are our queue elements
    // we add from the REAR and remove from the FRONT
    // first in first out — like a line at a bank

    int queue[5];   // our queue — just an array of 5 spots
    int front=0;    // front points to the first element
    int rear=-1;     // -1 means queue is completely empty


    // lets manually add 3 values to the rear
    queue[++rear]=10;    // rear becomes 0,  queue: [10]
    queue[++rear]=20;    // rear becomes 1,  queue: [10, 20]
    queue[++rear]=30;    // rear becomes 2,  queue: [10, 20, 30]

    // print what is at the front right now
    printf("Front value is: %d\n",queue[front]);   // output: 10


    // manually dequeue — just increase front
    front++;  // front becomes 1,  queue: [_, 20, 30]
    printf("Front value is: %d\n",queue[front]);  // output: 20


    front++;    // front becomes 2,  queue: [_, _, 30]
    printf("Front value is: %d\n", queue[front]);  // output: 30


    return 0;

}



// a queue is just an array with two variables.
// rear goes up when you add, front goes up when you remove