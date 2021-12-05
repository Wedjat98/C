#include <stdio.h>
#define len 10
void ary_copy(char *d, char *s, int t)
{
    for (int i=0; i<t; i++)
    {
        s[i] = d[i];
        printf("要素'%c'がコピーした\n", s[i]);
    }
}
int main(void)
{
    char *a = "abcdefghi";
    char b[len];
    
    ary_copy(a, b, 3);
    return 0;
}