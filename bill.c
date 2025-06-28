#include <stdio.h>
int main()
{
    int units;
    float bill;
    float interest;
    float total_bill;
    printf("Enter the number of units consumed:");
    scanf("%d", &units);
    if (units<=50)
    {
        bill=units*0.50;
    }
    else if (units<=100)
    {
        bill=25 + (units - 50)*1.00;
    }
    else if (units<=150)
    {
        bill=(25 + 50) + (units-100) * 1.50;
    }
    else if (units<=200)
    {
        bill = (25+50+75)+(units-150)*2.00;
    }
    else
    {
        bill = (25+50+75+100)+(units-200)*5.00;
    }
    
    interest=0.20*bill;
    total_bill=bill+interest;
    printf("the total bill is %f",total_bill);
    return 0;
}