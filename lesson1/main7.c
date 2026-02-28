////////////////////////////////
// CALCULATE TWO COMPLEX NUMBER
///////////////////////////////


#include <stdio.h>


struct Numbers{
    float real;
    float virtual;

};


int main()
{
    struct Numbers n1;
    printf("Enter first complex number: ");
    scanf("%f %f",&n1.real,&n1.virtual);

    struct Numbers n2;
    printf("Enter second complex number:");
    scanf("%f %f",&n2.real,&n2.virtual);

    printf("Number1: %.1f+%.1fi",n1.real,n1.virtual);
    return 0;
}