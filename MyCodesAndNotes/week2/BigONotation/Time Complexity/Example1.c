// Two loops but NOT nested
// n + n = 2n
// Drop constants
// Answer: O(n)


#include <stdio.h>

int main(){
    int n=5;

    // Runs n times
    for(int i=0;i<n;i++){
        printf("hi");
    }

    // Runs n times
    for(int i=0;i<n;i++){
        printf("hi");
    }


    return 0;
}