#include <stdio.h>
int *max_element(int *ptr, int n)
{
    int i, *max;
    *max = ptr[0];
    for (i = 1; i < n; i++)
    {
        if (ptr[i] > *max)
        {
            *max = ptr[i];
        }
    }
    return max;
}
int main(void)
{
    int x[10] = {4, 5, 6, 7, 8, 9, 555, 22, 11, 10};
    int *ptr;
    ptr = max_element(x, 10);
    printf("%d\n", *ptr);
    return 0;
}
