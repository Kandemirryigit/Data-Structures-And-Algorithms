// Add Overflow and Underflow checks

#include <stdio.h>

#define MAX 3  // queue can hold maximum 3 elements

int queue[MAX];
int front=0;
int rear=-1;
int size=0;   // keeps track of how many elements are in the queue


// enqueue with overflow check
void enqueue(int val){
    if(size==MAX){   // if size reached MAX, queue is full
        printf("Queue is full! Cannot enqueue %d\n",val);
        return;
    }
    queue[++rear]=val; // increase rear first, then put value there
    size++;  // increase size
}


int dequeue(){
    if(size==0){  // if size is 0, queue is empty
        printf("Queue is empty! Nothing to dequeue\n");
        return -1;
    }
    int val=queue[front];   // save front value
    front++;    // move front forward
    size--;     // decrease size
    return val;  // return saved value
}



int main(){

    enqueue(10);   // queue: [10]
    enqueue(20);   // queue: [10, 20]
    enqueue(30);   // queue: [10, 20, 30]  — queue is now full
    enqueue(40);   // output: Queue is full! Cannot enqueue 40


    printf("Dequeued: %d\n", dequeue());  // output: 10
    printf("Dequeued: %d\n", dequeue());  // output: 20
    printf("Dequeued: %d\n", dequeue());  // output: 30
    printf("Dequeued: %d\n", dequeue());  // output: Queue is empty! Nothing to dequeue

    return 0;


}