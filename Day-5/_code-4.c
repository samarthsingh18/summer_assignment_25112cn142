//WAP TO FIND LARGEST PRIME FACTOR OF A NUMBER
#include <stdio.h>

int main()
{
    int num, i, j, Prime, largestfactor = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++) 
    {
        if(num % i == 0) 
        {   

            Prime = 1;

            for(j = 2; j < i; j++) 
            {
                if(i % j == 0) 
                {
                    Prime = 0;
                    break;
                }
            }

            if(Prime == 1) 
            {
                largestfactor = i;
            }
        }
    }

    printf("Largest Prime Factor = %d", largestfactor);

    return 0;
}