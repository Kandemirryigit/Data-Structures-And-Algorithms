// Fibonacci Numbers

#include <stdio.h>

int fibonacci(int n){
    if(n==0) return 0;  // base case
    if(n==1) return 1;  // base case
    return fibonacci(n-1)+fibonacci(n-2);  // recursive case
}


int main(){
    for(int i=0;i<10;i++)
        printf("%d ",fibonacci(i));   // Output: 0 1 1 2 3 5 8 13 21 34

    return 0;
}