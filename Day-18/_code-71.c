//WAP TOP FIND AN ELEMENT USING BINARY SEARCH
#include <stdio.h>
int main()
{
    int a[100], n, i;
    int low, high, mid, item;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted array:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &item);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == item)
    {
        printf("Element found.");
        return 0;
    }

    if(item > a[mid])
    {
        low = mid + 1;
    }
    else
    {
        high = mid - 1;
    }
    }

    printf("Element not found.");

    return 0;
}