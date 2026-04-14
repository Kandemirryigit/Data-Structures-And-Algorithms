#include <stdio.h>

int main(){
    int n=5;
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("hi");
        }
    }

    return 0;
}


// Outer loop runs n times
// Inner loop runs i times and n=i so inner loop runs n times too
// n*n=n2
// Result: O(n²)