#include <stdio.h>

int main(void)
{
    char str1[] = {'a', 'b', 'c', 'd', 'e'};
    char str2[5];                // str1とstr2が定義した。
    for (int i = 0; i < 5; i++) // str1をプリントする。
    {
        printf("str1[%d]:%c,", i, str1[i]);
    }
    printf("\n");
    int j = 0;              // jは０に定義する。これからは１ずつ増加する。
    while (str1[j] != NULL) // str1[]中の元素が NULLではなければ、whileループが続く。
    {
        str2[j] = str1[j]; // str1[]中の元素が str2[]にコピーする。
        j++;
    }
    for (int i = 0; i < 5; i++) // str２をプリントする。
    {
        printf("str2[%d]:%c,", i, str2[i]);
    }
    return 0;
}