#include <stdio.h>

int main(){
    int n=10;

    for(int i=1;i<=10;i++){
        for(int j=1;j<=i*i;j++){
            for(int k=0;k<j;k++){
                printf("hi");
            }
        }
    }


    return 0;
}

// Big O: O(n⁴)