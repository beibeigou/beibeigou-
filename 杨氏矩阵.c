#include<stdio.h>
//1 2 3
//4 5 6
//7 8 9

//1 2 3
//2 3 4
//3 4 5
int FindNum(int arr[3][3],int k,int row,int col)
{
    int x=0;
    int y=col-1;
    while(x<=row-1&&y>=0)
    {
        if(arr[x][y]>k)
    {
        y--;
    }
    else if(arr[x][y]<k)
    {
        x++;
    }
    else
        return 1;
    }
    return 0;

}
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int k=7;
    int ret =FindNum(arr,k,3,3);
    if(ret==1)
        printf("zhaodaole");
    else
        printf("zhaobudao");
    return 0;
}
