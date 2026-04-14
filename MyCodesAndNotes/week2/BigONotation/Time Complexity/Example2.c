// Different variables
// Outer: n
// Inner: m
// Answer: O(n × m)
// If m = n → then O(n²)


#include <stdio.h>

int main(){
    int n=10;
    int m=10;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("hi");
        }
    }

    return 0;
}