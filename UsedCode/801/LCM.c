#include <stdio.h>
int LCM(int m, int n)
{
    int temp;
    if (m < n)
    { 
        temp = m;
        m = n;
        n = temp;
    }
    for (int i = n; i > 0; i++) 
        if (i % m == 0 && i % n == 0)
        { 
            printf("最小公倍数は: %d\n",i);
            break;
        }
}
