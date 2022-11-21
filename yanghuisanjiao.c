#include <stdio.h>
#include <stdlib.h>
//#define M 10
//int main()
//{
//    int a[M][M]={0};
//    int i=0,j=0,k=0;
//    for(i=0;i<M;i++)
//    {
//        a[i][0]=a[i][i]=1;
//        for(j=1;j<i;j++)
//        {
//            a[i][j]=a[i-1][j-1]+a[i-1][j];
//        }
//    }
//    for(i=0;i<M;i++)
//    {
//
//
//        for(j=0;j<=i;j++)
//        {
//            printf("%-5d",a[i][j]);
//        }
//        putchar('\n');
//    }
//}
//int main()
//{
//    int i=0,n;
//    scanf("%d",&n);
//    int arr[n];
//
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//
//    for(i=0;i<n;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}

int main()
{
    int a[10][10],i,j,k;
    for(i=0;i<10;i++)
    {
        a[i][0]=a[i][i]=1;
        for(j=1;j<i;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
//    for(i=0;i<10;i++)
//    {
//        for(k=0;k<i;k++)
//        {
//            printf("");
//        }

//        for(j=0;j<=10-i-1;j++)
//        {
//            printf("%4d",a[10-i-1][j]);
//        }
//        putchar('\n');
//    }
    for(i=0;i<10;i++)
    {
        for(k=0;k<=10-i;k++)
        {
            printf("$");
        }

    for(j=0;j<=i;j++)
    {
        printf("%5d",a[i][j]);
    }
   printf("\n");
    }
}































