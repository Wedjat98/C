#include <stdio.h>
int main()
{
    int m, n, temp, i;
    printf("二つの自然数を入力してください:\n");
    scanf("%d", &n); //入力を保存
    scanf("%d", &m); //入力を保存
    if (m < n)       //ｍとｎの値を比較する、ｍはｎより大きいにする。
    {                //*mとnの値を交換する
        temp = m;
        m = n;
        n = temp;
    }
    i = n;
    while (i > 0)
    {
        if (m % i == 0 && n % i == 0)
        { //条件を満足したら、ループを終了する
            printf(" %d と %d 最大公約数は: %d\n", m, n, i);
            break;
        }
        i--;
    } //大きいから小さいの値から公約数を探す
    return 0;
}