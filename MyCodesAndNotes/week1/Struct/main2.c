#include <stdio.h>
#include <string.h>

struct Info{
    char studentName[50];
    char favoriteLesson[50];
    int id;
};


void show(struct Info student){
    printf("Student Name: %s\n",student.studentName);
    printf("Favorite Lesson: %s\n",student.favoriteLesson);
    printf("Student ID: %d\n",student.id);
}


int main(){
    struct Info s1;
    strcpy(s1.studentName,"Yigit Kandemir");
    strcpy(s1.favoriteLesson,"C Programming Language");
    s1.id=101;
    show(s1);

    return 0;
}