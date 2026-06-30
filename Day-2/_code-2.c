//WAP TO FIND REVERSE OF A NUMBER 
#include<stdio.h>
int main()
{
    int num,d,rev=0,temp;
    printf("enter the no : ");
    scanf("%d", &num);
    temp=num;
     while(num>0)
     {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
     }
     printf("The REVERSE  of no of %d is %d ",temp,rev);
     return 0;
}