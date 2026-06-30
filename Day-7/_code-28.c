//WAP TO FIND REVERSE OF A NO USING RECURSION
#include <stdio.h>
void reverse(int);  // function prototype
void reverse(int a) // function definition
{
    int d;
    int r = 0;
    while (a > 0)
    {
        d = a % 10;
        r = r * 10 + d;
        a=a/10;
    }
    printf("%d\n", r);
}
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    reverse(a);
    return 0;
}