#include <stdio.h>
int main(void)
{
    int max(int num1, int num2)
    {
        int result;

        if (num1 > num2)
            result = num1;
        else
            result = num2;

        return result;
    }
    printf("result is %n",result)
}