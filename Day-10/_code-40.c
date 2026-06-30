//WAP TO PRINT STAR CHARACTER PRAYMID PATTERN.
/*
        A 
      A B A 
    A B C B A 
  A B C D C B A 
A B C D E D C B A  
*/
#include <stdio.h>
int main()
{
    int i, j, n = 5;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("%c ",j+64);
        }
        for(j = i - 1; j >= 1; j--)
        {
            printf("%c ", j+64);
        }


        printf("\n");
    }

    return 0;
}