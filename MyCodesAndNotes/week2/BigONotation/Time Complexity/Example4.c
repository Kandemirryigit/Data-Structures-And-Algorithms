// Mixed operations
// Outer: log n
// Inner: n
// Answer: O(n log n)

#include <stdio.h>

int main(){

    int n=10;
    for(int i=0;i<n;i*=2){
        for(int j=0;j<n;j++){
            printf("hi");
        }
    }


    return 0;
}