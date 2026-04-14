#include <stdio.h>

#define m 4
#define n 3

int a[n][m]={
    {1,2,3,4},{10,20,30,40},{100,200,300,400}};

int main(){
    int *p;
    p=&a[0][0] + m*1 +2;
    printf("%d  %d\n",a[1][2],*p);

    return 0;
}