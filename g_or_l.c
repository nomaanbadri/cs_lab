#include <stdio.h>
int main()
{
int a,b;
printf("enter two numbers");
scanf("%d", &a);
scanf("%d", &b);
if(a==b)
{
    printf("numbers are equal");
}
else if(a>b)
{
    printf("%d is greater", a);
}
else
{
    printf("%d is greater", b);
}
return 0;

}