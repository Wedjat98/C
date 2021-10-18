#include <stdio.h>
void main()
{
    int i, j, k;//ループ用変数
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int c[3][3];//和保存用行列
    int d[3][3];//積保存用行列
    printf("和:\n");
    for (i = 0; i < 3; i++)//3行にループする
    {
        for (j = 0; j < 3; j++)//3列にループする
        {
            c[i][j] = a[i][j] + b[i][j];//毎行毎列の和を計算する。
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    printf("積:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            d[i][j] = 0;
            for (k = 0; k < 3; k++)
                d[i][j] += a[i][k] * b[k][j];
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }
}