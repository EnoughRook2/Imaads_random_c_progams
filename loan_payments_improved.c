/*
write a program that calculates the
remaining balance on a loan after the first, second, and third monthly payments. Modify the
program so that it also asks the user to enter the number of payments and then displays the
balance remaining after each of these payments.
*/
#include <stdio.h>
int main()
{
    float loan_amount, interest_rate, monthly_payment;
    printf("Enter loan amount: \n");
    scanf("%f", &loan_amount);
    printf("Enter the interest rate: \n");
    scanf("%f",&interest_rate);
    for (;;) {
        printf("Enter the monthly payment: \n");
        scanf("%f",&monthly_payment);
        if (monthly_payment==0) break;
        loan_amount = ((loan_amount-monthly_payment)+((loan_amount*(interest_rate/100))/12));
        if(loan_amount==0) {printf("The loan has been paid off :D");
        break;}
        if (loan_amount<0) {printf("Overpaid, please enter a valid payment");
        break;}
        if(loan_amount>=0) printf("The amount to be paid is %0.2f\n", loan_amount);
        
    }
     
    return 0;
}

