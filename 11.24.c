#include<stdio.h>
#include<string.h>
/*void print(int n)
{
    //printf("%d ",n%10);
    if(n>9)
    {
        print(n/10);
    }
    printf("%d ",n%10);

}

int main()
{
   unsigned int num=0;
   scanf("%d",&num);
   print(num);
   return 0;

}*/
/*int my_strlen(char* str)
{
  //计算字符穿的长度
  int count=0;
    while(*str!=0)
    {
        count++;
        str++;
    }
    return count;
}*/
/*int my_strlen(char* str)
{
    if(*str!='\0')
        return 1+my_strlen(str+1);
    else
        return 0;
}

int main()
{
    char arr[]="bit";
    int len=my_strlen(arr);//传首元素地址
    printf("%d",len);

}*/
/*int Fac1(int n)
{
    int ret=1;
    for(int i=1;i<=n;i++)
    {
        ret=ret*i;
    }return ret;
}*/
/*int Fac2(int n)
{
    if(n<=1)
        return 1;
    else
         return n*Fac2(n-1);
}
int main()
{
    int n;
    int ret=0;

    scanf("%d",&n);

    ret=Fac2(n);
    printf("%d",ret);
}*/
/*int Fib(int n)
{
    if(n<=2)
        return 1;
    else
        return Fib(n-1)+Fib(n-2);
}*/
/*int Fib(int n);

int main()
{
    int n=0;
    scanf("%d",&n);
    int ret=Fib(n);
    printf("%d",ret);//printf("%d",Fib(n));
    return 0;
}
int Fib(int n)
{
        int a=1;
        int b=1;
        int c=1;

    while(n>2)
    {
        c=a+b;

        a=b;
        b=c;
        n--;

    }return c;
}*/
/*int main()
{
    int m=0,n=0,r=0;
    scanf("%d%d",&m,&n);
    while(r=m%n)
    {


        r=m%n;
        m=n;
        n=r;
    }
    printf("%d",n);
}*/
/*int main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d*%d=%-3d",i,j,i*j);
        }puts("\n");
    }
}*/
/*int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<sz;i++)
    {
                           //整体变量定义应在外部
        if(arr[i]>max)
      {
        max=arr[i];
      }
    }printf("%d",max);
}*/
/*int main()
{
    int flag=1;
    int i=0;
    double sum=0;
    for(i=1;i<=100;i++)
    {
        sum+=flag*1.0/i;
        flag=-flag;
    }printf("%lf",sum);
}*/
/*int main()
{
    int i=0;
    int count1=0;
    int count2=0;
    for(i=1;i<=100;i++)
    {
    if(i%10==9)
        count1++;
    if(i/10==9)
        count2++;
    }
    printf("%d",count2);
}*/
int main()
{
    int i=0;int n=0;
   for(n=100;n<=200;n++)
   {
       for(i=3;i<n;i++)
       {
           if(n%i==0)
            break;
       }
       if(i==n)
       {
           printf(",%d",n);
       }
   }
}













