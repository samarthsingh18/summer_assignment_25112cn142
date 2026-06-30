//WAP TO PRINT ALL ARMSTRONG NO WITHIN A RANGE 
#include<stdio.h>
int main()
{
    int start,end,i,j,num,temp,rem,sum;
    printf("Enter The Range :\n");
    scanf("%d%d", &start,&end);
    printf("The Armstrong No From %d to %d : ",start,end);
    for(num=start;num<=end;num++)
    {
        temp = num;
        sum = 0;

        while(temp>0)
        {
            rem = temp % 10;
            sum = sum +(rem*rem*rem);
            temp = temp/10;
        }
        if(num==sum)
        {

            printf("%d,",num);
        }
    }

    return 0;
}