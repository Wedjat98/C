#include <stdio.h>
#include "LCM.h"

int main(void)
{
   int x, y, z;

   x = input_data();
   y = input_data();
   fprintf(stderr, "入力した数字は%d と %d\n", x, y);

   z = LCM(x, y);

   return 0;
}