#include<stdio.h>
int main(void){
    int n,abs;//n,absはint型の変数
    printf ("整数を入力せよ:");//ユーザーに入力の提示文
    scanf ("%d",&n);//ユーザーの入力を保存
    (n>=0)?(abs=n):(abs=-n);//n>=0に対して判断する、つまり数字が正数の時がそのまま、負数の時がマイナスに演算する
    printf ("%d の的絶対値は：%d\n",n,abs);//絶対値を出力
    return 0;
}