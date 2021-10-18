#include <stdio.h>
int main()
{
    int i, j, a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int row[3] = {0}, col[3] = {0};
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            row[i] += a[i][j];
    for (j = 0; j < 3; j++)
        for (i = 0; i < 3; i++)
            col[j] += a[i][j];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%2d ", a[i][j]);
        printf("%2d", col[i]);
        printf("\n");
    }
    for (i = 0; i < 3; i++)
        printf("%2d ", col[i]);
    printf("\n");
    return 0;
}