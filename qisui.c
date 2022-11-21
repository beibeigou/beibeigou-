#include<stdio.h>
int main()
{
    int money;
    scanf("%d",&money);
    int total;
    int empty;
    empty=money;
    total=money;
    while(empty>=2)
    {
        total+=empty/2;
        empty=empty/2+empty%2;

    }
    printf("%d",total);

}
