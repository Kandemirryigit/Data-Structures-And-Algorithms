/////////////////////////////
// FIND FACTORIAL OF A NUMBER
/////////////////////////////


#include <stdio.h>



int factorial(int number)
{
    int result=1;

    if(number==0 || number==1){
        return 1;
    }


    for(int i=2;i<=number;i++){
        result*=i;
    }

    return result;

    
}




int main()
{
    int number;
    int value=0;
    printf("Enter a number: ");
    scanf("%d",&number);

    if(number<0){
        printf("The number is lower than 0 so we can't find the answer");
    }
    else{
        factorial(number);
        printf("The result: %d",factorial(number));
    }

    
    return 0;
}




