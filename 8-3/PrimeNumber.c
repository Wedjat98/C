#include <stdio.h>
#include <math.h>
int PrimeNumber(int m){
    int i;  
    int k;   
    k=(int)sqrt( (double)m );
    for(i=2;i<=k;i++)
        if(m%i==0)
            break;
    return i>k;
}
