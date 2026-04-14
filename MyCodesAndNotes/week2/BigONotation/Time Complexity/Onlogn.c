// O(n log n)
// Combination of linear + logarithmic
// outer: n
// inner: log n
// total: n log n → O(n log n)


#include <stdio.h>

int main(){
    int n=10;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j*=2){
            printf("hi");
        }
    }

    return 0;
}
