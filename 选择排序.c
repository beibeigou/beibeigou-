#include<stdio.h>
int main()
{
    int a=12,b=24,tmp,num1,num2;
    if(a<b)//aΪ���ֵ
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
    printf("���Լ����%d",b);
    printf("��С��������%d",num1*num2/b);
}
