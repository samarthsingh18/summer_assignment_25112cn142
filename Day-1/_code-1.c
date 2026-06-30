//Write a program to Calculate sum of first N natural numbers. 
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a Natural No:");
    scanf("%d", &n);
    if(n>0){
    for(i=1;i<=n;i++)
    {
    sum=sum+i;
    }
    printf("The Sum of Natural No From 1 to %d is: %d \n",n,sum);
   }
   else{
    printf("Not A Natural No");
   }
   
   return 0;
}