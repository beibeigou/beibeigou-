#include<stdio.h>
int main()
{
    int a=0,n=0,i=0,ret=0,sum=0;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        ret=ret*10+a;
        sum+=ret;
    }printf("%d",sum);

}

