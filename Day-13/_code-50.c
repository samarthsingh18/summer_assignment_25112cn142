//WAP TO FIND SUM AND AVRAGE OF ARRAY .
#include<stdio.h>

int main(){
    int A[5],sum=0;
    float Avg;
    printf("Enter the array :\n");
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&A[i]);
    }
    for (int i = 0; i <5; i++)
    {
        sum+=A[i];
    }
    Avg=sum/5.0;
    printf("The sum and average of entered number is %d and %f\n",sum,Avg);
    
    return 0;
}