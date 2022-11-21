#include<stdio.h>
struct student
{
    long  id;
    char  name[10];

    float score;
    char sex;
};

int main(void)
{
    struct student stu = {10,"ken",12.0,'m'};
    printf("%d,%s,%c,%lf",stu.id,stu.name,stu.sex,stu.score);



}




























