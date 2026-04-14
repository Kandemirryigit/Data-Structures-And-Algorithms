#include <stdio.h>

int main(){
    int n=10;
    int arr[n];

    for(int i=0;i<n;i++){
        arr[i]=i;
    }

    return 0;
}


// Linear memory
// Memory grows linearly with n
// Space complexity = O(n)