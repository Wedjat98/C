#include <stdio.h>
#include <math.h>//sqrt関数を使うので、ライブラリ<math.h>を導入
int main()
{
    float a,b,c;//float型の変数a,b,cは三角形の長さ
    float s,area;//s,areaは三角形の面積に使う変数
    printf("三角形の三辺の長さを入力してください:\n");//入力の提示文
    scanf("%f,%f,%f",&a,&b,&c);//入力を保存
    if(a+b>c&&b+c>a&&a+c>b)//三角形に成れる条件
    {
        s=(a+b+c)/2;//ヘロンの公式により3辺の長さ a,b,c が分かっている場合、その三角形の面積は求める。
        area=(float)sqrt(s*(s-a)*(s-b)*(s-c));//面積をfloatに変換し、areaに保存
        printf("三角形の面積は：%f\n" ,area);//出力文
    }
    else//以外の場合
        printf("三角形にならない\n");//出力文
    return 0;
}