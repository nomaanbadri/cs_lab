#include<stdio.h>
int main(){
    int n1,n2;
    char op,j;
    printf("Enter the first number: \n");
    scanf("%d", &n1);
    printf("Enter the 2nd number: \n");
    scanf("%d", &n2);
    printf("Enter the operation you want to do (+,-,*,/)\n");
    scanf(" %c", &op);
   
        if(op=='+')
        {
            printf("%d + %d = %d\n", n1,n2,n1+n2);        
        }
        else if(op=='-')
        {
            printf("%d - %d = %d\n", n1,n2,n1-n2);        
        }
        else if(op=='*')
        {
            printf("%d * %d = %d\n", n1,n2,n1*n2);        
        }
        else if(op=='/')
        {
            printf("%d / %d = %d\n", n1,n2,n1/n2);        
        }
        else
        {
            printf("You have entered wrong input! Please try again");
        }
    printf("Do you want to do something else: ");
    
    return 0;
    }
        