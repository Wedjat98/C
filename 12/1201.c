#include <stdio.h>
int main(){
    struct{
        char *name;  
        char *num;  
        int age;  
        char group;  
        float score;  
    } stu1 = { "電大太郎", "19EC999", 18, 'A', 136.5 }, *pstu = &stu1;
    printf("%sの学籍番号は%s，年龄は%d，%c組に所属する、成績は%.1f！\n", (*pstu).name, (*pstu).num, (*pstu).age, (*pstu).group, (*pstu).score);
    printf("%sの学籍番号は%s，年龄は%d，%c組に所属する、成績は%.1f！\n", pstu->name, pstu->num, pstu->age, pstu->group, pstu->score);
    return 0;
}