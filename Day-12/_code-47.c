//WAP TO WRITE A FUNCTION TO FIND FIBONACHI.
#include <stdio.h>
void fibonacii(int);  // Function Prototype
void fibonacci(int F) // Function Definition
{
    int a = 0, b = 1, x, y, z;
    if (F == 1)
    {
        printf("The Fibonacci Series at this number %d is %d\n", F, 0);
    }
    else if (F == 2)
    {
        printf("The Fibonacci Series at this number %d is %d\n", F, 1);
    }
    else
    {
        for (int i = 3; i <= F; i++)
        {
            x = a;
            y = b;
            z = x + y;
            a = y;
            b = z;
            if (F == i)
            {
                printf("The Fibonacci Series at this number %d is %d\n", F, z);
            }
        }
    }
}
int main()
{
    int F;
    printf("Enter the number\n");
    scanf("%d", &F);
    fibonacci(F); // Function Call
    return 0;
}