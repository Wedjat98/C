#include <stdio.h>

int input_data()
{
   int i;

   fprintf(stderr, "数字を入力してください ");
   scanf("%d", &i);
   return i;
}
