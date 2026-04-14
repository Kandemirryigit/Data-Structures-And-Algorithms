#include <stdio.h>
#include <stdlib.h>

struct Lesson{
    int grade;
    char lessonName[30];
};


int main(){
    struct Lesson *ptr;

    int countOfRegister;

    printf("Enter count of register: ");
    scanf("%d",&countOfRegister);

    ptr=malloc(countOfRegister*sizeof(struct Lesson));

    for(int i=0;i<countOfRegister;i++){
        printf("Enter lesson name: ");
        scanf(" %[^\n]",(ptr+i)->lessonName);
        getchar();

        printf("Enter grade: ");
        scanf("%d",&(ptr+i)->grade);
    }

    for(int i=0;i<countOfRegister;++i){
        printf("%s\t%d\n",(ptr+i)->lessonName,(ptr+i)->grade);
    }


    free(ptr);

    return 0;


}