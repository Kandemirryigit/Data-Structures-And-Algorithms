#include <stdio.h>

int main(){
    int n=10;

    for(int i=0;i<=n;i++){
        for(int j=0;j<i*i;j++){
            printf("hi");
        }
    }

    return 0;
}



// Outer lopp runs n times
// Inner loop runs i^2 times but i=n so it runs n^2 times
// n*n^2=n^3
// Result: O(n³)