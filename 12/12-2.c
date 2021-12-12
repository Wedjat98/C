#include <stdio.h>
typedef struct Car
{
    int num;
    double gas;
    struct Car *next;   
}Car;
void printlist(Car* first);
int main(void){
    Car car0;
    Car car1;
    Car car2;
    Car *pcar;

    car0.num = 1234;car0.gas = 35.5;
    car1.num = 4567;car1.gas = 75.5;
    car2.num = 7890;car2.gas = 45.5;

    car0.next=&car1;
    car1.next=&car2;
    car2.next=NULL;

    printlist(&car0);
}
void printlist(Car* first){
    for (first=first;first!=NULL;first = first-> next)
    {
        printf("車のナンバーは:%d,ガソリン量は：%fです。\n",first->num,first->gas);
    } 
}