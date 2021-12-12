#include <stdio.h>
#include <string.h>
typedef struct Person
{
    int age;
    int height;
    int weight
} Person;

int main()
{
    Person person;
    pin(person);
    pout(person);
}
void pin(Person *ptr)
{
    printf("Please input age heigh weight: ");
    scanf("%d%d%d", &(ptr)->age,  &(ptr)->height, &(ptr)->weight);
}
void pout(Person p)
{
    printf("age heigh weight%d%d%d", &p.age, &p.height, &p.weight);
}