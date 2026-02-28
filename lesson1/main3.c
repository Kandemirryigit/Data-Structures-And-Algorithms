///////////
// POINTERS
///////////

#include <stdio.h>

int main(){
    int data;
    int *dataptr;
    data=50;
    dataptr=&data;
    printf("%d %d %p",data,*dataptr,dataptr);
}