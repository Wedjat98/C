#include <stdio.h>
#include <string.h>
void pin(Person *ptr)
{
    printf("Please input age heigh weight: ");
    scanf("%d%d%d", &*ptr.age,&*ptr.height,&*ptr.weight);
}
void pout(Person p)
{
    printf("%d%d%d", &p.age,&p.height,&p.weight);
}
struct Person
{
    int age;
    int height;
    int weight
};

int main()
{
    struct Person person;
    pin(person);
    pout(person);
}
