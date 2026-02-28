//////////
// STRUCT2
//////////


#include <stdio.h>

struct Persons{
    char name[50];
    char surname[50];
    float salary;
    int startingDate;
    char phoneNumber[20];
    char locationOfWork[50];


}person={"Yigit","Kandemir",150000,2006,"534 624 64 09","Yozgat"};



int main()
{

    struct Persons *person1;
    person1=&person;

    person1->startingDate=2012;

    printf("Name:%s  Surname:%s\n",person1->name,person1->surname);
    printf("Location of work: %s\n",person1->locationOfWork);
    printf("Phone number: %s\n",person1->phoneNumber);
    printf("Salary: %.2f\n",person1->salary);
    printf("The starting date of working: %d\n",person1->startingDate);



    return 0;
}