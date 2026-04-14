#include <stdio.h>

int main(){
    int n=10;

    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j*=2){
            printf("hi");
        }
    }


    return 0;
}


// Outer loop runs n times
// Inner loop runs logn times
// n*logn
// Result: O(n log n)