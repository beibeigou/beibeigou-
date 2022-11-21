
#include<stdio.h>
int jc(int a)
{
if(a==0||a==1)
    return 1;
else
    return a*jc(a-1);
}
int main()
{
    int num=0,sum=0;
    scanf("%d",&num);
    sum=num*jc(num-1);
    printf("%d",sum);
    return 0;
}




























