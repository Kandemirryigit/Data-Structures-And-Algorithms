// Print all queue elements

#include <stdio.h>

#define MAX 5

int queue[MAX];
int front=0;
int rear=-1;
int size=0;


int isEmpty(){
    return size==0;
}


void enqueue(int val){
    if(size==MAX){
        printf("Queue is full!\n");
        return;
    }
    queue[++rear]=val;
    size++;
}

int dequeue(){
    if(size==0){
        printf("Queue is empty");
        return -1;
    }
    int val=queue[front];
    front++;
    size--;
    return val;
}


void printQueue(){
    if(isEmpty()){
        printf("Queue is Empty!\n");
        return;
    }
    printf("Queue (front to near): ");
    for(int i=front;i<=rear;i++){   // start from front, go to rear
        printf("%d ",queue[i]);
    }
    printf("\n");
}



int main(){

    enqueue(10);  // queue: [10]
    enqueue(20);  // queue: [10, 20]
    enqueue(30);  // queue: [10, 20, 30]
    enqueue(40);  // queue: [10, 20, 30, 40]

    printQueue();
    // output: Queue (front to rear): 10 20 30 40

    printf("Dequeued: %d\n", dequeue());  // remove 10

    printQueue();
    // output: Queue (front to rear): 20 30 40

    printf("Dequeued: %d\n", dequeue());  // remove 20

    printQueue();
    // output: Queue (front to rear): 30 40

    return 0;



}

