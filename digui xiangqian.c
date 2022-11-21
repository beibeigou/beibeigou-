
#include<stdio.h>
int jc(int a)
{
    if(a==0||a==1)
        return 1;
    else
        return a*jc(a-1);
}
int jcsum(int b)
{
    if(b==0||b==1)
        return 1;
    else
        return jc(b)+jcsum(b-1);
}

int main()
{
    int num=0,sum=0;
    scanf("%d",&num);
    sum=jcsum(num);

    printf("%d",sum);
    return 0;
}

































