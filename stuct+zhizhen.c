#include<stdio.h>
struct stu
{
    int num;
    char name[50];
    int age;

};
void fun(struct stu *p)
{
    printf("%s",(*p).name);
}
int main()
{
    struct stu students[3]={{1,'w',12},{2,'e',23}};;
    fun(students+1);
    return 0;
}
