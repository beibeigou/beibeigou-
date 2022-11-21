#include<stdio.h>
int main()
{
    int a=12,b=24,tmp,num1,num2;
    if(a<b)//a为最大值
    {
        tmp=a;
       a=b;
       b=tmp;
    }
    num1=a;
    num2=b;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("最大公约数：%d",b);
    printf("最小公倍数：%d",num1*num2/b);
}
