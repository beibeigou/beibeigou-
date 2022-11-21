
#include  <stdio.h>
#include  <stdlib.h>
#include  <time.h>
//void print(char* str)
//{
//    printf("%s",str);
//}
//
//int main()
//{
//
//   void (*p)(char*)=print;
//   (*p)("hello");
//
//
//}
// typedef struct node
//{
//
//    int date;
//     struct node* next;
//}node;
//

//struct b
//{
//    double weight;
//    int age;
//};
//struct t
//{
//    struct b st;
//};
//
//int main()
//{
//    struct t a = {{66.6,34}};
//    printf("%lf",a.st.weight);
//   return 0;
//}
struct S
{
    int a;
    char c;
    double b;
};
void Init(struct S* ps)
{
    ps->c='w';
}
void print1(struct S temp)
{
    printf("%c",temp.c);
}
void print2(const struct S* ps)
{
    printf("%c",ps->c);
}
int main()
{
//    struct s t;
//    t.a=100;
//    t.c=g;
//    t.b=0.0;
//printf("%",t.a);
    struct S t={0};
    Init(&t);
    print1(t);
    print2(&t);
}





























