#include <stdio.h>

struct Person{
    char name[50];
    char surname[50];
    char tcNo[12];
    float salary;
};


int main(){
    struct Person p1;

    printf("What is your name: ");
    scanf(" %[^\n]",p1.name);

    printf("What is your surname: ");
    scanf(" %[^\n]",p1.surname);

    printf("What is TC: ");
    scanf("%s",p1.tcNo);

    printf("What is your salary: ");
    scanf("%f",&p1.salary);


    printf("Name: %s\n",p1.name);
    printf("Surname: %s\n",p1.surname);
    printf("Tc: %s\n",p1.tcNo);
    printf("Salary: %.2f\n",p1.salary);

    return 0;

}