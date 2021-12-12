#include <stdio.h>
typedef struct Person
{
    int age;
    int height;
    int weight;
} Person;
void pin(Person *ptr);
void pout(Person p);

int main()
{
    Person person;
    pin(&person);
    pout(person);
}
void pin(Person *ptr)
{
    printf("年齢、身長、体重を入力してください: ");
    scanf("%d%d%d", &ptr->age, &ptr->height, &ptr->weight);
}
void pout(Person p)
{
    printf("年齢、身長、体重は%d、%d、%d", p.age, p.height, p.weight);
}