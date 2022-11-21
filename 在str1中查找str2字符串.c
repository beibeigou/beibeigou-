#include<stdio.h>
#include<string.h>

int is_left_move(char* str1,char* str2)
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    if(len1!=len2)
        return 0;

    //1.在str1字符串中追加一个str1字符串
    //strcat
    //strncat
   //(\0)被替换，不会停止 strcat(str1,str1);//将右边的追加到左边
      strncat(str1,str1,6);//abcdefabcdef
    //2.判断str2指向的字符串是否是str1指向的
    char* ret=strstr(str1,str2);//在str1中找str2
    if(ret==NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    char arr1[30]="abcder";
    char arr2[]="cdefab";
    int ret=is_left_move(arr1,arr2);
    if(ret==1)

    return 0;

}
