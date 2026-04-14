// Reverse a string

#include <stdio.h>
#include <string.h>    // For strlen function

int main(){
    char str[50];
    printf("Write a string: ");
    scanf("%s",&str);

    int lenghtOfString=strlen(str);

    for(int i=lenghtOfString-1;i>=0;i--){
        printf("%c",str[i]);
    }

    return 0;

}