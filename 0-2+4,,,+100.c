
#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=0;i<=50;i++)
    {
        if(i%2==0)
        {
            sum=sum+2*i;
        }
        else
        {
            sum=sum-2*i;
        }
    }


    printf("%d",sum);

}





























