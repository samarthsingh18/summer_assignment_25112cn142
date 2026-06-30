//WAP TO CHECK WHETHER NO IS PALINDROME OR NOT
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
     if(temp==rev)
     {
        printf("The No Is Palinndrome ");
     }
     else 
     {
        printf("The No Is NOT Palindrome");
     }
     return 0;
}