#include <stdio.h>
int main(void)
{
    int day;
    printf("2020年11月の日にちを入力せよ\n");
    printf("日にち: ");
    scanf("%d", &day);
    if (day == 0 || day > 30|| day < 0)
    {
        printf("11月%d日はありません。", day);
    }
    else if (day == 1 || day % 7 == 1)
    {
        printf("11月%d日は日曜日です。", day);
    }
    else if (day == 2 || day % 7 == 2)
    {
        printf("11月%d日は月曜日です。", day);
    }
    else if (day == 3 || day % 7 == 3)
    {
        printf("11月%d日は火曜日です。", day);
    }
    else if (day == 4 || day % 7 == 4)
    {
        printf("11月%d日は水曜日です。", day);
    }
    else if (day == 5 || day % 7 == 5)
    {
        printf("11月%d日は木曜日です。", day);
    }
    else if (day == 6 || day % 7 == 6)
    {
        printf("11月%d日は金曜日です。", day);
    }
    else if (day == 7 || day % 7 == 0)
    {
        printf("11月%d日は土曜日です。", day);
    }
    return 0;
}