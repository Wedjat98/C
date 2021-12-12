#include <stdio.h>
struct stu{
    char *name;  
    char *num;  
    int age; 
    char group;  
    float score;  
}stus[] = {
    {"電大A太郎", "19EC995", 18, 'C', 145.0},
    {"電大B太郎", "19EC994", 19, 'A', 130.5},
    {"電大C太郎", "19EC991", 18, 'A', 148.5},
    {"電大D太郎", "19EC992", 17, 'F', 139.0},
    {"電大E太郎", "19EC993", 17, 'B', 144.5}
};
void average(struct stu *ps, int len);
int main(){
    int len = sizeof(stus) / sizeof(struct stu);
    average(stus, len);
    return 0;
}
void average(struct stu *ps, int len){
    int i, num_140 = 0;
    float average, sum = 0;
    for(i=0; i<len; i++){
        sum += (ps + i) -> score;
        if((ps + i)->score < 140) num_140++;
    }
    printf("成績の和:%.2f\n平均値：%.2f\n140 点以下の人数%d\n", sum, sum/5, num_140);
}