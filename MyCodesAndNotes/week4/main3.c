// Add a dequeue function

#include <stdio.h>

#define MAX 5

int queue[MAX];
int front=0;
int rear=-1;


void enqueue(int val){
    queue[++rear]=val;   // increase rear first, then put value there
} 

// dequeue function removes and returns the front value
int dequeue(){
    int val=queue[front];   // save the front value
    front++;   // move front forward
    return val;  // return the saved value
}

int main(){
    enqueue(10);   // queue: [10]
    enqueue(20);   // queue: [10, 20]
    enqueue(30);   // queue: [10, 20, 30]

    // now lets dequeue them one by one
    printf("Dequeued: %d\n",dequeue());   // output: 10  (first in first out!)
    printf("Dequeued: %d\n",dequeue());   // output: 20
    printf("Dequeued: %d\n",dequeue());   // output: 30

    return 0;
    
}