#include <stdio.h>

struct Personel{
    char name[16];
    char surname[16];
    double salary;
    int starting_year;
    char GSM[14];
    char city[16];
}person={"Yigit","Kandemir",120.000,2006,"123 456 789","Istanbul"};


int main(){
    struct Personel *ptr;
    ptr=&person;

    ptr->starting_year=2018;

    printf("Name - Surname: %s %s\n",ptr->name,ptr->surname);
    printf("City: %s\n",ptr->city);
    printf("GSM: %s\n",ptr->GSM);
    printf("Salary: %.3f\n",ptr->salary);
    printf("Starting year: %d\n",ptr->starting_year);


    return 0;
}