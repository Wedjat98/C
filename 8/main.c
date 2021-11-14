#include <stdio.h>
#include "GCD.h"

int main(void)
{
   int x, y, z;

   x = input_data();
   y = input_data();
   fprintf(stderr, "Inputed Data are %d and %d\n", x, y);

   z = GCD(x, y);

   return 0;
}