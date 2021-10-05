#include <stdio.h>
int main(void){
    char a,b,c;
    printf("３つの小文字アルファベットを入力してください\n");
    scanf("%c %c %c",&a,&b,&c);
    printf("%c,%c,%c\n",a-32,b-32,c-32);
    return 0;
}