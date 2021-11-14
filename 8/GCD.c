#include <stdio.h>
int GCD(int m, int n)
{
    int temp;
    if (m < n)
    { 
        temp = m;
        m = n;
        n = temp;
    }
    for (int i = n; i > 0; i--) 
        if (m % i == 0 && n % i == 0)
        { 
            printf("The GCD of %d and %d is: %d\n", m, n, i);
            break;
        }
}
