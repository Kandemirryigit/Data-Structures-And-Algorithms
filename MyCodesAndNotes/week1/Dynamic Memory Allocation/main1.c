#include <stdio.h>
#include <stdlib.h>

int main(){
    int countOfNumbers=0;

    printf("How many number are you gonna use: ");
    scanf("%d",&countOfNumbers);

    int *arr=malloc(countOfNumbers*sizeof(int));
    if(arr==NULL){
        printf("Memory allocation is Unsuccessful!");
        return 1;
    }

    for(int i=0;i<countOfNumbers;i++){
        arr[i]=i*10;
    }

    for(int i=0;i<countOfNumbers;i++){
        printf("%d. %d\n",i,arr[i]);
    }

    free(arr);

    return 0;


}