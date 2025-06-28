#include <stdio.h>
int main()
{
    int am, n500, n200, n100, n50, n20, n10, n5, n2, n1;
    n500=n200=n100=n50=n20=n10=n5=n2=n1=0;
    printf("enter the amount \n");
    scanf("%d", &am);
    if(am>=500)
    {
        n500=am/500;
        am-=n500*500;
    }
    if(am>=200)
    {
        n200=am/200;
        am-=n200*200;
    }
    if(am>=100)
    {
        n100=am/100;
        am-=n100*100;
    }
    if(am>=50)
    {
        n50=am/50;
        am-=n50*50;
    }
    if(am>=20)
    {
        n20=am/20;
        am-=n20*20;
    }
    if(am>=10)
    {
        n10=am/10;
        am-=n10*10;
    }
    if(am>=5)
    {
        n5=am/5;
        am-=n5*5;
    }
    if(am>=2)
    {
        n2=am/2;
        am-=n2*2;
    }
    if(am>=1)
    {
        n1=am;
        am-=n1;
    }
    printf("total no of notes= \n");
    printf("500=%d \n",n500 );
    printf("200=%d \n",n200 );
    printf("100=%d \n",n100 );
    printf("50=%d \n",n50 );
    printf("20=%d \n",n20 );
    printf("10=%d \n",n10 );
    printf("5=%d \n",n5 );
    printf("2=%d \n",n2 );
    printf("1=%d \n",n1);
    return 0;
    
}