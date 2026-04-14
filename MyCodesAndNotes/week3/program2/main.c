#include <stdio.h>
#include <string.h>

int isPalindrome(char *str){
    char *ptrStart=str;
    char *ptrEnd=str+strlen(str)-1;

    while(ptrEnd>ptrStart){
        if(*ptrEnd!=*ptrStart){
            return 0;
        }
        *ptrStart++;
        *ptrEnd--;
    }

    return 1;

}

int main() {
    char word[] = "kabak";
    
    if (isPalindrome(word)) {
        printf("%s This word is a palindrome word.\n", word);
    } else {
        printf("%s This word is not a pakindrome word.\n", word);
    }

    return 0;
}