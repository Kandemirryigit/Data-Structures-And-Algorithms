#include <stdio.h>
#include <string.h>

char stack[100];
int top=-1;

void push(char c){
    stack[++top]=c;
}

char pop(){
    return stack[top--];
}

char peek(){
    return stack[top];
}

int isEmpty(){
    return top==-1;
}

int examine(char *exp){
    top=-1; 

    for(int i=0;i<strlen(exp);i++){
        char c=exp[i];

        if(c=='(' || c=='['){
            push(c);
        }
        else if(c==')'){
            if(isEmpty() || peek()!='(') return -1;
            pop();
        }
        else if(c==']'){
            if(isEmpty() || peek()!='[') return -1;
            pop();
        }

    }

    if(isEmpty())
        return 1;
    else 
        return -1;



}



int main() {
    char *tests[] = {
        "(2+5)-[(4-8)/6+7]",    
        "(2+5)-[(4-8)/6+7",     
        "[(2+3)]",              
        "[(2+3])",              
        "((()))",               
        "((())",                
    };

    int n = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < n; i++) {
        int result = examine(tests[i]);
        printf("%-25s → %d %s\n",
            tests[i],
            result,
            result == 1 ? "(valid)" : "(invalid)");
    }

    return 0;
}