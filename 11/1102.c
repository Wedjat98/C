#include <stdio.h>
void bubble(int *arr, int len)
{
    int flag = 1;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                flag = 0;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (flag)
            return;
        flag = 1;
    }
}
int main()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 7, 4, 6, 0};
    bubble(arr, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
}