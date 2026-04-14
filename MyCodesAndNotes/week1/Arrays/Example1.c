#include <stdio.h>

int main(){
    int A[10];
    
    for(int i=0;i<10;i++){
        printf("Address:%d  indis: A[%d]=%d\n",&A[i],i,A[i]);
    }

    return 0;
}