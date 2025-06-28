#include <stdio.h>
int main()
{
    double a,b,c,d,f,g;
    char e[100];
    printf("Enter your name \n");
    scanf("%s",&e);
    printf("Enter your marks in math \n");
    scanf("%lf",&a);
    printf("Enter your marks in english \n");
    scanf("%lf",&b);
    printf("Enter your marks in physics \n");
    scanf("%lf",&c);
    printf("Enter your marks in chemistry \n");
    scanf("%lf",&d);
    f=a+b+c+d;
    g=f*100/400;
    if (g>50) 
    {
        printf("%s has passed with %lf percent",e , g);
    }
    else
    {
        printf("%s has failed",e);
    }

return 0;
}
