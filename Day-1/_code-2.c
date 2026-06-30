///WAP To Print Table Of A No
#include<Stdio.h>
int main()
{
    int num,i,result;
    printf("Enter the number the which table you want\n ");
    scanf("%d", &num);
    printf("Table of %d \n",num);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d \n",num,i,num*i);
    }
    
}