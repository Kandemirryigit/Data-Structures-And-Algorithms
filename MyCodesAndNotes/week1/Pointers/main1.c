#include <stdio.h>

int main(){
    int data;
    int *dataptr;

    data=50;
    dataptr=&data;

    printf("%d %d %p\n",data,*dataptr,dataptr);

    return 0;
}