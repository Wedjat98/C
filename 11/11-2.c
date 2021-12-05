#include <stdio.h>
void str_concat(char *d, char *s1, char *s2)
{
    sprintf(d, "%s %s\n", s1, s2);//標準ライブラリ関数sprintfを使った
    printf("合成した文字列は%s", d);
}
int main(void)
{
    char *str1 = "Hello";
    char *str2 = "World.";

    char str3[30];

    str_concat(str3, str1, str2);

    return 0;
}