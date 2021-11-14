#include <stdio.h>
#include "PrimeNumber.h"
int main(void)
{
    int x, y;

    x = input_data();

    fprintf(stderr, "入力した数字は%d\n", x);

    y = PrimeNumber(x);
    fprintf(stderr,"返却値は%d", y);
    return 0;
}