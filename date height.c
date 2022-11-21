#include<stdio.h>

int main()
{
    int n;
    char a[n];
    double b[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    scanf("%c",&a[i]);
    scanf("%f",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]=='M')
    {
        printf("%.2f",a[i]/1.09);
    }
    else
    {
        printf("%.2f",a[i]*1.09);
    }
    }
    return 0;
}
