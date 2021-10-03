#include <stdio.h>
int main(void)
{
    int A,B;
    printf("2つの整数を入力せよ。\n");
    printf("整数A: ");
    scanf("%d", &A);
    printf("整数B: ");
    scanf("%d", &B);
    if(A>B){
        (A-B>10)?(printf("整数の差は１１以上です。\n")):(printf("整数の差は１０以下です。\n"));
    }else {
        (B-A>10)?(printf("整数の差は１１以上です。\n")):(printf("整数の差は１０以下です。\n"));
    }
    return 0;
}