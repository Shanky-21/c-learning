#include <stdio.h>
#include <math.h>

struct{
    char name[10];
    int age;
    float salary;
} person;

int main(void){
    strcpy(person.name,"James");
    person.age = 10;
    person.salary = 35000;
    printf("%s\n",person.name);
    /*printf("%d\n",person.age);
    printf("%d\n",person.salary);*/
}
