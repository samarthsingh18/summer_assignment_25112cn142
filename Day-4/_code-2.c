//WAP TO FIND AND PRINT FIBONACHI SERIES .
#include<stdio.h>
int main()
{
    int n,i,j,first,second,next;
    first=0,second=1;

    printf("enter the number:");
    scanf("%d", &n);
    if(n<=0)
    {
        printf("Invalid Output");
    }
    else if(n==1)
    {
        printf("The Nth term = %d",first);
    }
    else if(n==2)
    {
        printf("The Nth term = %d",second);
    }
    else
    {
    for(i=3;i<=n;i++) 
    {
        
        next=first+second;
        first=second;
        second = next;
        

    }
    printf("%d",next);
    }
    return 0;
}