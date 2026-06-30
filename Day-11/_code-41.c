//WAP A PROGRAM TO WRITE FUNCTION TO FIND SUM OF TWO NUMBER.
#include<stdio.h>
int SUM (int,int);//function prototype
int SUM (int x,int y)//function definition
{
    
    return x+y;
}
int main()
{
    int a,b,sum;
    printf("Enter the Number\n");
    scanf("%d %d" ,&a,&b);
    sum=SUM(a,b);
    printf("The sum of given number is %d\n",sum);
    return 0;
}