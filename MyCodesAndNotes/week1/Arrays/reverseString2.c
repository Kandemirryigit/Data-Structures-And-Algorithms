// Reverse a string without strlen function

#include <stdio.h>

int main(){

    int lenghtOfString=0;
    char str[50];
    printf("Write a string: ");
    scanf("%s",&str);

    for(int i=0;str[i]!='\0';i++){
        lenghtOfString++;
    }

    for(int i=lenghtOfString;i>=0;i--){
        printf("%c",str[i]);
    }

    return 0;

}