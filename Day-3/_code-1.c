//WAP TO FIND NO IS PRIME OR NOT
#include<stdio.h>
int main()
{
    int n,i,flag=1;

    printf("Enter The No To Be Checked");
    scanf("%d", &n);
    
    if(n<=1)
    {
        printf("The No is Not Prime ");
    }
    else
    {
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                flag =0;
                break;
            }
        }
        if(flag==1)
        {
            printf("The No Is Prime");
        }
        else
        {
            printf("The No Is NOT Prime");
        }

    }
    return 0;
}