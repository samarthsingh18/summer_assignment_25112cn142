//WAP TO WRITE A FUNCTION FOR PERFECT NUMBER.
#include <stdio.h>
void Perfect(int);  // Function Prototypr
void Perfect(int x) // Functiom Definition
{
    int sum = 0;
    for (int i = 1; i < x; i++)
    {

        if (x % i == 0)
        {
            sum += i;
        }
    }
    if (x == sum)
    {
        printf("The Number is Perfect number.\n");
    }
    else
    {
        printf("The Number is not Perfect number.\n");
    }
}
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d", &x);
    Perfect(x); // Function Call
    return 0;
}