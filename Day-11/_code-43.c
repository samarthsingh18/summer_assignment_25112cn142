// WAP TO WRITE A FUNCTION TO CHECK PRIME NUMBER.
#include <stdio.h>
void Prime(int);  // Function Prototype
void Prime(int x) // Function Definition
{
    int count = 0, r;
    if (x <= 0)
    {
        printf("Negative number and Zero are not Prime.\n");
    }
    else if (x == 1)
    {
        printf("1 is not a Prime number.\n");
    }
    else
    {
        for (int i = 2; i < x; i++)
        {
            r = x % i;
            if (r == 0)
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            printf("The number is prime.\n");
        }
        else
        {
            printf("The number is not prime.\n");
        }
    }
}
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d", &x);
    Prime(x);
    return 0;
}