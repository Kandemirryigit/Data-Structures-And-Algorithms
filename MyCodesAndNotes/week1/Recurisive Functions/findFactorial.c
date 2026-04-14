// Find factorial

#include <stdio.h>

int factorial(int n){
    if(n==0) return 1;   // base case

    return n* factorial(n-1);   // recursive case
}


int main(){
    printf("5! = %d\n", factorial(5)); // Output: 120
    return 0;
}