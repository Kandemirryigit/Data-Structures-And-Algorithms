#include <stdio.h>

int a[10]={10,20,30,40,50,60,70,80,90,100};

int main(){
    int *p=a;
    printf("%d %d %d %d\n",&a[0],p,(p+3),&a[3]);
    if(a[3]==*(p+3))
        printf("Evet");
    else
        printf("Hayir\n");
    

    return 0;
}