//WAP A PROIGRAM TO COUNT ODD AND EVEN NUMBER.
#include<stdio.h>

int main(){
    int A[5],counteven=0,countodd=0;
    printf("Enter the array :\n");
    for (int i = 0; i < 5; i++)
    {

        scanf("%d", &A[i]);
    }
    printf("The Entered Array is :\n");
    for (int i = 0; i < 5; i++)
    {
        if (A[i]%2==0)
        {
            counteven++;
        }
        else{
            countodd++;
        }
    }
    printf("The number of odd and even is %d and %d.\n",countodd,counteven);
    return 0;
}