//WAP TO FIND SECOND LARGEST ELEMENT IN AN ARRAY.
#include <stdio.h>

int main()
{
    int a[5] = {5, 4, 8, 9, 6}, max1 = 0, max2 = 0;

    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i]>max2)
        {
            max2=a[i];
        }
    }
    printf("The second largest element of Array is %d\n",max2);
    return 0;
}