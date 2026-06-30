//WAP TO CHECK WEATHER NO IS ARMSTRONG OR NOT.
#include<stdio.h>
int main()
{
    int num,i,temp,rem,sum=0;
    printf("Enter the No: \n");
    scanf("%d",&num);

    temp=num;

    for(i=1;i<=num;i++)
    {
        rem = temp%10;
        sum = sum+(rem*rem*rem);
        temp = temp/10;
    }
    if(sum == num)
    {
        printf("Enter NO Is an Armstrong NO");
    }
    else
    {
        printf("Enter NO Is NOT an Armstrong NO");
    }
}