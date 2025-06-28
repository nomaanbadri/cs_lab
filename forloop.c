#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number upto which you want to generate numbers \n");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        printf("%d \t", i);
    }
    
}