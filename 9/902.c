#include <stdio.h>
void reverse(int a[], int n)
{
    printf("入力した数字の逆に順は\n");
    int *p;
    for (p = a + n - 1; p >= a; p--)
        printf("%4d", *p);
}
int main(void)
{
    int a[20], n=5;
    int i;
    printf("5つの整数を入力してください:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    reverse(a, n);
}