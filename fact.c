#include<stdio.h>
int main()
{
    int n,fact=1,i;
    printf("enter the num for which fact is to be found: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("facorial not exist for negative");
    }

    else{
        for(i=1;i<=n;i++){
            fact*=i;
        }
        printf("factorial of %d is %d",n,fact);
    }
}