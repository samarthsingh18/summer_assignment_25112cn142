//WAP TO LINEAR SEARCH A ELEMENT IN AN ARRAY.
#include <stdio.h>

int main()
{
    int a[5] = {0, 1, 2, 3, 4}, b, search = 0;
    printf("Enter the search number :\n");
    scanf("%d", &b);
    for (int i = 0; i < 5; i++)
    {
        if (b == a[i])
        {
            printf("Entered number is present  \n");
            search++;
            break;
        }
    }
    if (search == 0)
    {
        printf("Entered number is not present in array\n");
    }
    return 0;
}