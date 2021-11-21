#include <stdio.h>

void fct(void)
{
    printf("Hi 1!\n");
}
void fct2(void)
{
    printf("Hi 2!\n");
}
int main(void)
{
    int x;
    int array[10];
    printf("%p\n", &x);
    printf("%p\n", array);
    printf("%p\n", fct);
    printf("%p\n", fct2);
   
}