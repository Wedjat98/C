#include <stdio.h>
int main()
{
    int i, n;//int型の変数i, nを定義する
    double sum = 1;// double 型の変数sumを定義する,FORループで掛け算をするので、ここが１を与える
    printf("数字を入力してください。\n");//入力に提示文
    scanf("%d", &n);//入力した数字をnに保存
    for (i = 1; i <= n; i++)//FORループ、毎回のループでは、和sumがiと掛け算して、保存する。iは入力した数字と同じ
        sum = sum * i;
    printf("%d!=%lf", n, sum);//結果を出力
    return 0;
}