//WAP TO WRITE A FUNCTION TO FIND FACTORIAL.
#include <stdio.h>
void Fact(int);  // Function Prototype
void Fact(int x) // Function Definition
{
    int fact = 1;
    if (x == 0 || x == 1)
    {
        printf("The Factorial of a number is 1\n");
    }
    else if(x<0){
        printf("The Factorial of negative number are undefined.\n");
    }
    else
    {
        for (int i = 1; i <= x; i++)
        {

            fact = fact * i;
        }
        printf("The Factorial of a number is %d\n", fact);
    }
}
int main()
{
    int x;
    printf("ENter the number \n");
    scanf("%d", &x);
    Fact(x);
    return 0;
}