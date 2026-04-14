// Add peek and isEmpty functions

#include <stdio.h>

#define MAX 5

int queue[MAX];
int front=0;
int rear=-1;
int size=0;

void enqueue(int val){
    if(size==MAX){
        printf("Queue is full!");
        return;
    }
    queue[++rear]=val;
    size++;
}


int dequeue(){
    if(size==0){
        printf("Queue is empty\n");
        return -1;
    }
    int val=queue[front];
    front++;
    size--;
    return val;
}


// peek looks at the front value WITHOUT removing it
int peek(){
    if(size==0){    // if queue is empty nothing to peek
        printf("Queue is empty!\n");
        return -1;
    }
    return queue[front];   // just return front value, dont change front
}


void isEmpty(){
    if(size==0){
        printf("Queue is empty!\n");
    }
    else{
        printf("Queue is not empty!\n");
    }
}



int main(){

    isEmpty();

    enqueue(10);
    enqueue(20);
    enqueue(30);

    isEmpty();

    printf("Peek: %d\n",peek());  // output: 10 (just looks, doesnt remove)
    printf("Peek: %d\n",peek());  // output: 10 (still there!)

    dequeue();
    printf("Peek: %d\n",peek());  // output: 20 (new front)

    return 0;

}
