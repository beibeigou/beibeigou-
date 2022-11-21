 #include<stdio.h>
 typedef struct student
{
    char name[10];
    int age;
    double score;
}STU;

int main()
{
    //一个结构体变量
    struct student stu;
    stu.age = 10;
    strcpy(stu.name,"ccc");
    printf("name = %s,age = %d",stu.name,stu.age);

 struct student stu_array[20]={{'w',2,90},{'b',3,70},{'u',5,100}};
//    for(int i =0;i<3;i++)
//    {
//        scanf("%d%s%lf",&stu_array[i].age,&stu_array[i].name,&stu_array[i].score);
//        //scanf("",);
//        //scanf("%lf",&stu_array[i].score);
//    }
    for(int i =0;i<3;i++)
    {
        printf("name = %s\nage = %d\nscore = %lf\n",stu_array[i].name,stu_array[i].age,stu_array[i].score);
    }
}
