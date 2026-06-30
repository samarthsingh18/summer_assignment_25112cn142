//WAP to find Factorial of a Number
#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter No to Find Factorial\n");
    scanf("%d", &n);
    if(n<0)
    {
        printf("ERROR");
    }
    else if((n==0)&&(n==1))
    {
        printf("factorial is:%d\n",fact);
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        
    }
    printf("Factorial is:%d\n",fact);
    return 0;
}