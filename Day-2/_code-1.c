//WAP A PROGRAM TO FIND SUM OF DIGIT OF A NUMBER 
#include<stdio.h>
int main()
{
    int n,d,sum=0;
    printf("Enter the no  ");
    scanf("%d", &n);
    if(n>0)
    {   
        while(n>0)
        {
            d=n%10;
            sum=sum+d;
            n=n/10;
        }
        printf("the sum of the digit is : %d",sum);
    }
    else if(n<0)
    {
        
        while(n<0)
        {
            n=-n;
            d=n%10;
            sum=sum+d;
            n=n/10;
        }
        printf("the sum of the digit is : %d",sum);
    }
    else
    {    
    printf("the sum of the digit is : 0");  
    }
    return 0;
}