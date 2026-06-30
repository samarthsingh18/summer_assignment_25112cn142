//WAP TO WRITE A FUNCTION TO FIND MAXMINUM.
#include <stdio.h>
void maximum(int, int, int);      // Function Prototype
void maximum(int x, int y, int z) // Function Deinition
{
    if (x > y && x > z)
    {
        printf("The maximum of three number is %d\n", x);
    }
    else if (y > x && y > z)
    {
        printf("The maximum of three number is %d\n", y);
    }
    else
    {
        printf("The maximum of three number is %d\n", z);
    }
    
}
    int main()
    {
        int x, y, z;
        printf("Enter the three number :\n");
        scanf("%d%d%d", &x, &y, &z);
        maximum(x,y,z);
        return 0;
    }