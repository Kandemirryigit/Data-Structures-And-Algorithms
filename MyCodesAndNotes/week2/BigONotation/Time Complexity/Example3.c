// Decreasing loops
// n → n/2 → n/4 → ...
// Answer: O(log n)

#include <stdio.h>

int main(){
    int n=10;
    for(int i=0;i<n;i/2){
        printf("hi");
    }

    return 0;
}