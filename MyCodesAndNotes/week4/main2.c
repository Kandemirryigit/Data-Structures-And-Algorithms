// Add an enqueue function

#include <stdio.h>

#define MAX 5

int queue[MAX];
int front=0;
int rear=-1;


// enqueue function adds a value to the rear of the queue
void enqueue(int val){
    queue[++rear]=val;  // increase rear first, then put value there
}


int main(){
    // now we use the enqueue function instead of doing it manually
    enqueue(10);   // rear becomes 0,  queue: [10]
    enqueue(20);   // rear becomes 1,  queue: [10, 20]
    enqueue(30);   // rear becomes 2,  queue: [10, 20, 30]

    // print the front value
    printf("Front value is: %d\n",queue[front]);  // output: 10

    return 0;

}