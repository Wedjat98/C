#include <stdio.h>
void count(); //まず構造体がない関数を定義した。
int main(void)
{
    int i = 0;
    for (i = 0; i <= 5; i++)
    {
        func();
    }
    return 0;
}
void func() 
{
    static int static_x = 0;
    int x = 0;
    static_x++;
    x++;
    printf("static_x の値は%d\n", static_x);
    printf("x の値は%d\n", x);
}