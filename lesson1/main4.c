/////////
// STRUCT
/////////

#include <stdio.h>
#include <strings.h>

struct Students{
    char name[50];
    char surname[50];
    char tcNo[12];
    float salary;

};



int main(){

    struct Students s1;
    strcpy(s1.name,"Yigit");
    strcpy(s1.surname,"Kandemir");
    strcpy(s1.tcNo,"10716087448");
    s1.salary=150000;

    printf("Name:%s  Surname:%s  tcNo:%s  Salary:%.2f",s1.name,s1.surname,s1.tcNo,s1.salary);


    return 0;
}