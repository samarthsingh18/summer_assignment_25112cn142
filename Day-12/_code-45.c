//WAP TO WRITE A FUNCTION TO CHECK NUMBER IS PALINDROME.
#include <stdio.h>
void palindrome(int);  // Function Prototype
void palindrome(int x) // Function Definition
{
    int palin = 0, temp = x;
    for (int i = 0; temp != 0; i++)
    {

        palin = palin * 10 + (temp % 10);
        temp = temp / 10;
    }
    if (x == palin)
    {
        printf("The number is Palindrome.\n");
    }
    else
    {
        printf("The number is not Palindrome.\n");
    }
}
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    palindrome(a); // Function Call
    return 0;
}