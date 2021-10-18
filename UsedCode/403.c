#include <stdio.h>
int main()
{
    int w , l ;//横幅と高さの変数
    int i, j;//ループ用変数
    printf("横幅：");
    scanf("%d",&w);//入力を保存
    printf("高さ：");
    scanf("%d",&l);//入力を保存
    for (j = 0; j < l; j++)//外部ループが長さを決める
    {
        for (i = 0; i < w; i++)//内部ループが横幅を決める
        {
            printf("*");
        }
        printf("\n");//改行
    }
}