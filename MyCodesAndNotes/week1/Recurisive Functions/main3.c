#include <stdio.h>

void reverse(char *str){
    // 1. Base Case: If we hit the end of the string (null terminator)
    if(*str=='\0') return;

    // 2. Recursive Step: Go to the NEXT character first
    reverse(str+1);

    // 3. Action: Print the CURRENT character AFTER the recursive call
    printf("%c",*str);

}


int main(){
    char myName[]="Kandemir";
    printf("Original: %s\n",myName);
    printf("Reversed: ");
    reverse(myName);
    return 0;
}




// Call sequence:

/*

reverse("Kandemir") → *str = 'K' → call reverse("andemir")
reverse("andemir") → *str = 'a' → call reverse("ndemir")
reverse("ndemir") → *str = 'n' → call reverse("demir")
reverse("demir") → *str = 'd' → call reverse("emir")
reverse("emir") → *str = 'e' → call reverse("mir")
reverse("mir") → *str = 'm' → call reverse("ir")
reverse("ir") → *str = 'i' → call reverse("r")
reverse("r") → *str = 'r' → call reverse("")
reverse("") → *str = '\0' → return  ✅ base case hit

*/




// Now printing happens while returning:
/*

print 'r'
print 'i'
print 'm'
print 'e'
print 'd'
print 'n'
print 'a'
print 'K'

*/



