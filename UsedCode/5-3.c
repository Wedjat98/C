#include <stdio.h>

int main(void){
    int str1[]={11,22,33,44,55};
    int str2[]={12,23,34,45,56};//str1とstr2が定義した。
    int tmp;//一時保存用変数
    for ( int i = 0; i < 5; i++)
    {
        printf("str1[%d]:%d,",i,str1[i]);  
    }
    printf("\n");
    for ( int i = 0; i < 5; i++)
    {
        printf("str2[%d]:%d,",i,str2[i]);
    }//str1とstr2の値をプリントする。
    printf("\n数値を交換します。\n");
    for (int j = 0; j < 5; j++)
    {
        tmp = str1[j];//一時保存用変数にstr1[j]の値を保存する。
        str1[j] = str2[j];//一時保存用変数にstr1[j]の値を保存したので、str1[j]にstr2[j]の値を上書きする。
        str2[j] = tmp;//str2[j]の値が既にstr1[j]の値を保存したので、str2[j]にtmpの値を上書きする。
    }
    for ( int i = 0; i < 5; i++)
    {
        printf("str1[%d]:%d,",i,str1[i]);  
    }
    printf("\n");
    for ( int i = 0; i < 5; i++)
    {
        printf("str2[%d]:%d,",i,str2[i]);
    }//str1とstr2の値をプリントする。
    return 0;
}