// Reverse a string

#include <stdio.h>

int power(int base,int exp){
    // 1. Base Case: Anything to the power of 0 is 1
    if(exp==0) return 1;

    // 2. Recursive Step: Multiply base by (base to the power of exp - 1)
    return base * power(base,exp-1);
}


int main(){
    int b=2,e=3;
    printf("%d to the power of %d is: %d\n", b, e, power(b, e));
    return 0;
}


/*

power(2,3)
= 2 * power(2,2)        // exp=3, recursive case
= 2 * (2 * power(2,1))  // exp=2, recursive case
= 2 * (2 * (2 * power(2,0)))  // exp=1, recursive case
= 2 * (2 * (2 * 1))     // exp=0, base case reached
= 2 * (2 * 2)
= 2 * 4
= 8

*/