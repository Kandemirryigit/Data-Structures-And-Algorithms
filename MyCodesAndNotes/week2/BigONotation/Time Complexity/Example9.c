#include <stdio.h>

int main(){
    int n=10;

    for(int i=1;i<=n;i*=2){
        for(int j=0;j<i*i;j++){
            printf("hi");
        }
    }

    return 0;
}


// Outer loop: i = 1, 2, 4, … → log n
// Inner loop: i² → 1², 2², 4² …
// Big O: O(n²)