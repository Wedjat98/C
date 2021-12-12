#include <stdio.h>
#include <string.h>

struct Person
{
    char name[50];
    int age;
    char gender;
};

int main()
{
    struct Person person;
    strcpy_s(
        person.name,
        sizeof(person.name) - 1,
        "○山×男");
    person.age = 20;
    person.gender = 0;
    
    printf(
        "name: %s\n"
        "age: %d\n"
        "gender: %d\n",
        person.name, person.age, person.gender);
    getchar();
}`