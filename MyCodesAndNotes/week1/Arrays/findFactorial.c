// Find Factorial

#include <stdio.h>


int findFactorial(int number){
    long long sum=1;

    if(number<0){
        printf("Number should be positive!\n");
        return -1;
    }
    else if(number==0) return 1;

    for(int i=number;i>0;i--){
        sum*=i;
    }

    return sum;

}


int main(){
    int number=0;
    printf("Enter a number: ");
    scanf("%d",&number);



    printf("Result: %d",findFactorial(number));
    return 0;
}