#include <stdio.h>
int a,b;
void sum(int *x,int *y){
    a=*x+*y;
    printf("a,bの和は%d\n",a);
}
void square(int *x,int *y){
    b=(*x)*(*x);
    printf("aの２乗をは%d",b);
} 
int main(void){
   a=3,b=4;
   printf("%p==========%p\n",&a,&b);
   sum(&a,&b);
   printf("今、aの値は%d\n",a);
   square(&a,&b);
}
