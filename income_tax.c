//income tax calculator
#include <stdio.h>
int main()
{
    float income,tax;
    printf("enter your income: ");
    scanf("%f",&income);
    if (income <=750) {tax= 0.01*income; printf("income tax is %0.2f",tax);}
    else if (income <= 2250) {tax= 7.5 + (0.02*income); printf("income tax is %0.2f",tax);}
    else if (income <= 3750) {tax= 37.5 + (0.03*income); printf("income tax is %0.2f",tax);}
    else if (income <= 5250) {tax= 82.5 + (0.04*income); printf("income tax is %0.2f",tax);}
    else if (income <= 7000) {tax= 142.5 + (0.05*income);printf("income tax is %0.2f",tax);}
    else if (income < 10000) {tax= 230 + (0.06*income);printf("income tax is %0.2f",tax);}
    else printf("Visit the manager for more information on your income tax");
    
    return 0;

}