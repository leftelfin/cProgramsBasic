#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    char major[20];
    int age;
    double gpa;
};


int main(){
    struct student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name,"Lisa");
    strcpy(student1.major,"Arts");

    struct student student2;
    student2.age = 24;
    student2.gpa = 3.2;
    strcpy(student2.name,"Jennie");
    strcpy(student2.major,"Music");

    printf("%s\n",student1.name);
    printf("%s\n",student2.name);

    return 0;
}