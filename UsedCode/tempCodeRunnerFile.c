#include <stdio.h>
 
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
 
    printf("何項まで？: ");
    scanf("%d", &n);
 
    printf("フィボナッチ数列: ");
 
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}