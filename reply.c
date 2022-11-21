#include  <stdio.h>
#include  <math.h>
int main(void)
{
	/*************** Begin ***************/
    float date1,date2;
    char op;
    char reply;
    do{
        printf("Please enter the expression:\n");
        scanf("%f %c%f",&date1,&op,&date2);
        switch(op)
        {
            case '+' :printf("%f + %f = %f\n",date1,op,date2);break;
            case '-' :printf("%f - %f = %f\n",date1,op,date2);break;
            case '*' :printf("%f * %f = %f\n",date1,op,date2);break;
            case '/' :if(fabs(date2)<=1e-7)
            {
                printf("Division by zero!\n");
            }
            else
            {
                printf("%f / %f = %f\n",date1,op,date2);break;
            }
            default:printf("Unknown operator!\n");
        }
        printf("Do you want to continue(Y/N or y/n)");
        scanf(" %c",&reply);
       }while(reply=='Y'||reply=='y');
       printf("Program is over!\n");

	/*************** End ***************/
    return 0;
}
