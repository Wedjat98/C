#include <stdio.h>

int main()
{
    int x, y, z, t;/*４つの変数を与える*/
    printf("\n３つの整数を入力してください:\n");
    scanf("%d%d%d", &x, &y, &z);
    if (x > y)
    { /*x,yの値を交換する*/
        t = x;
        x = y;
        y = t;
    }
    if (x > z)
    { /*x,zの値を交換する*/
        t = z;
        z = x;
        x = t;
    }
    if (y > z)
    { /*z,yの値を交換する*/
        t = y;
        y = z;
        z = t;
    }
    printf("３つの整数を昇順には: %d %d %d\n", x, y, z);
    return 0;
}