// sum of first n numbers

#include <stdio.h>

int sum(int n){
    // 1. Base Case: If n is 0, the sum is 0.
    if(n==0) return 0;

    // 2. Recursive Step: n + sum of (n-1)
    return n+sum(n-1);

}


int main(){
    int result1=sum(3);
    int result2=sum(5);
    int result3=sum(10);

    printf("The sum for 3: %d\n",result1);   // output: 6
    printf("The sum for 5: %d\n",result2);   // output: 15
    printf("The sum for 10: %d\n",result3);  // output: 55

    return 0;
}


/*

sum(3)
= 3 + sum(2)
= 3 + (2 + sum(1))
= 3 + (2 + (1 + sum(0)))
= 3 + (2 + (1 + 0))   // base case reached
= 3 + (2 + 1)
= 3 + 3
= 6


*/
