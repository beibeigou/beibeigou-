#include<stdio.h>
//1 2 3
//4 5 6
//7 8 9

//1 2 3
//2 3 4
//3 4 5
/*int FindNum(int arr[3][3],int k,int* row,int* col)
{
    int x=0;
    int y=*col-1;
    while(x<=*row-1&&y>=0)//死循环，直到所有的数被查到
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
    {
        *row=x;
        *col=y;

        return 1;//刚好相等（经过重复的x++和y--改变数组坐标）

    }

    }
    return 0;

}






int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int k=7;
    int x=3;
    int y=3;
    int ret =FindNum(arr,k,&x,&y);
    if(ret==1)
       printf("%d %d",x,y);
    else
        printf("zhaobudao");
    return 0;
}*/

int main()
{

    int i,j,t,N,M;
       int a[N];
    scanf("%d %d",&N,&M);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
               t=a[j+1];
               a[j+1]=a[j];
               a[j]=t;
            }
        }
    }

    printf("排列好的数列是：\n");
    for(i=0;i<N;i++)
    {

        printf("%d ",a[i]);
    }
    return 0;
}
