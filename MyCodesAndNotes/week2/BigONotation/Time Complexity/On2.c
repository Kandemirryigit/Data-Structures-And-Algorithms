// O(n²) — Nested loops
// Outer loop: n
// Inner loop: n
// Total: n × n = n²

#include <stdio.h>

int main(){
    int n=5;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("hi");
        }
    }

    return 0;
}


// We have two for loop -nested loops-
// Inner loop runs for n times so in this code 5 times
// Outer loop runs for n times so in this code 5 time