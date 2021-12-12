#include <stdio.h>
int a,b,c;
void min(int *x,int *y,int *z){
    c=*x<*y?*x:*y;
    printf("cの値は%d\n",c);
}
void sum(int *x,int *y,int *z){
    c=*x+*y;
    printf("a,bの和は%d",c);
}
int main(void){
    a=1;
    b=3;
    min(&a,&b,&c);
    sum(&a,&b,&c);
}