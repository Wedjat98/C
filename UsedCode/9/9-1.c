#include <stdio.h>
void fct(void)
{
    int x;
    printf("%p\n", &x);
}
void fct2(void)
{
    int y;
    printf("%p\n", &y);
}
int main(void)
{
    fct();
    fct2();
}