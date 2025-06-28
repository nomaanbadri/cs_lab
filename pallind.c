#include<stdio.h>
int main()
{
    int n,rem,rev=0,l;
    printf("enter the number \n");
    scanf("%d",&n);
    l=n;
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (rev==l)
    {
        printf("number is pallindrome");
    }
    else
      {
          printf("number is not pallindrome");
        }
return 0;
    }
    