//WAP TO PRINT FIBONACHI SERIES USING RECURSION 
#include <stdio.h>
int fib(int);  // function prototype
int fib(int x) // function definition
{
    if (x == 1)
    {
        return 0;
    }
    else if (x == 2)
    {
        return 1;
    }
    else
    {
        return fib(x - 1) + fib(x - 2);
    }
}
int main()
{
    int x;
    printf("enter the number\n");
    scanf("%d", &x);
    
    for (int i = 1; i <= x; i++)
    {
         printf("%d,", fib(i));
    }
    
       
    
    return 0;
}