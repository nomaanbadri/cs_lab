#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number upto which you want to generate table \n");
    scanf("%d", &n);
    for ( i = 1; i <= 10; i++)
    {
        printf("%dx%d=%d \n",n,i,n*i);
    }
    
}