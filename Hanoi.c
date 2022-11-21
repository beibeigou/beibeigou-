#include<stdio.h>
void move(char past1,char past2)
{
printf(" %c--->%c",past1,past2);
}
void Hanoi(int n,char past1,char past2,char past3)
{
   if(n==1)
        move(past1,past3);
        else
        {
            Hanoi(n-1,past1,past3,past2);
            move(past1,past3);
            Hanoi(n-1,past2,past1,past3);
        }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        Hanoi(i,'A','B','C');
        printf("\n");
    }


}
