//WAP TO FIND LARGEST AND SMALLEST ELEMENT.
#include <stdio.h>
void max(int[], int);    // Function Prototype
void max(int A[], int x) // Function Definition
{
    int max = A[0];
    for (int i = 0; i < x; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    printf("The largest element in Array is %d.\n", max);
}
void min(int[], int);    // Function Prototype
void min(int A[], int x) // Function Definition
{
    int min = A[0];
    for (int i = 0; i < x; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    printf("The smallest element in Array is %d.\n", min);
}
int main()
{
    int A[5];
    printf("Enter the array :\n");
    for (int i = 0; i < 5; i++)
    {

        scanf("%d", &A[i]);
    }
    max(A, 5);
    min(A, 5);

    return 0;
}