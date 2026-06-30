//WAP TO FIND FIBONACHI SERIES UP TERM ENTER BY USER.
#include<stdio.h>
int main()
{
    int num,i,next;
    int first=0,second=1;

    printf("enter the number:");
    scanf("%d", &num);

    printf("fibonaichi Series Up To %d term:  ",num);

    for(i=1;i<=num;i++) 
    {
        printf("%d,",next);
        first=second;
        second = next;
        next=first+second;

    }
    return 0;
}