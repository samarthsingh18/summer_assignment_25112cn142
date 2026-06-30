//WAP TO CONVERT BINARY TO DECIMAL
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0,rem,dec=0;

    printf("Enter binary number:\n");//binary to decimal
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%10;
        dec = dec + rem*pow(2,i);
        n=n/10;
        i++;
    }

    printf("Decimal Number  = %d\n",dec);

    return 0;
}