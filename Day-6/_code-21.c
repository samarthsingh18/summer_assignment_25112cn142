//WAP TO CONVERT DECIMAL TO BINARY
#include<stdio.h>
int main()
{
    int n,bin=0,place=1,rem;

    printf("Enter decimal number:\n");
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%2;
        bin = bin + rem*place;
        place = place*10;
        n = n/2;
    }

    printf("Binary Number = %d\n",bin);

    return 0;
}