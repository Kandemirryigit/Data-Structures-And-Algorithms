///////////
// STRUCT3
//////////


#include <stdio.h>
#include <string.h>


struct StudentInfo{
    char studentName[50];
    char favoriteLesson[50];
    int id;
};


void show(struct StudentInfo s)
{
    printf("Student name: %s\n",s.studentName);
    printf("Favorite Lesson: %s\n",s.favoriteLesson);
    printf("Id: %d\n",s.id);

}



int main()
{
    struct StudentInfo s1;
    strcpy(s1.studentName,"Yigit kandemir");
    strcpy(s1.favoriteLesson,"C Programming Language");
    s1.id=1241602049;
    show(s1);
    

    return 0;
}