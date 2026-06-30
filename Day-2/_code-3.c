//WAP TO FIND PRODUCT OF A DIGITS OF A NUMBER 
#include<stdio.h>
int main()
{
    int n,d,product=1;
    printf("Enter the no  ");
    scanf("%d", &n);
    if(n>0)
    {
    while(n>0)
    {
        d=n%10;
        product=product*d;
        n=n/10;
    }
        printf("the product of the digit is : %d",product);
    }
    else if(n<0)
    {
        n=-n;
        d=n%10;
        product=product*d;
        n=n/10;
        printf("the product of the digit is : %d",product);
    }
    else
    {
        printf("the product of the digit is : 0 ");
    }
    return 0;
}