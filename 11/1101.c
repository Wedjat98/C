#include <stdio.h>
#define size 5
int Calc(int *PA, int Num)
{
    int sum = 0;
    int i = 0;
    for (i = 0; i < Num; i++)
    {
        sum = sum + PA[i];
    }
    return sum;
}

int main()
{
    int PArray[size] = {1, 2, 3, 4, 5};
    printf("和：%d", Calc(PArray, size));
    return 0;
}