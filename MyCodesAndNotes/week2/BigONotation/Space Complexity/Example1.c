#include <stdio.h>


int factorial(int n){
        if(n==0) return 1;
        return n*factorial(n-1);

}



// Recursive function (stack memory)
// Each recursive call adds a stack frame → n calls
// Space complexity = O(n)
// Key: recursion uses extra memory for the call stack