#include<stdio.h>
int main()
{
    int i,j,result;
    for (i=1;i<10;i++)//int型の変数iを９回ループする
    {
        for(j=1;j<=i;j++)//毎回のループではループ回数の掛け算もループする
        {
            result=i*j;
            printf("%d*%d=%-3d",i,j,result); //-3dはスペースを３つを与える意味している
        }
    printf("\n"); //改行
    }
}