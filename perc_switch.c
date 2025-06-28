#include <stdio.h>
int main()
{
    char ope;
    double num1,num2;
    printf("enter the operator(+,-,*,/)");
    scanf("%c", ope);
    printf("enter the operands");
    scanf("%lf %lf", &num1,&num2);
    switch(ope)
    {
        case'+':
        printf("%lf", num1+num2);
        break;
        case'-':
        printf("%lf", num1-num2);
        break;
        case'*':
        printf("%lf", num1*num2);
        break;
        case'/':
        printf("%lf", num1/num2);
        break;

    }
    
 

return 0;
}
