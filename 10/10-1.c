#include<stdio.h>
void prnum(int *x){ 
    for (int i = *x; i >= 0; i--)
    {
        printf("%3d",i);   
    }      
}
int main(void){
    int z=12;
    prnum(&z);
}