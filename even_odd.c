#include <stdio.h>
int main()
{
int a , c ;
printf ("enter number");
scanf("%d", &a);
c = a%2 ;
if (c == 0)
{
    printf("Number is even");
}
else
{
    printf("number is odd");
}
return 0;

}