//calculate bank loan after couple months
//we need to divide the loan amount*interest by 12 for some reason, idk ask a stats student
#include <stdio.h>
int main()
{
    float loan_amount, interest_rate, monthly_payment,month1,month2,month3;
    printf("Enter loan amount: \n");
    scanf("%f", &loan_amount);
    printf("Enter the interest rate: \n");
    scanf("%f",&interest_rate);
    printf("Enter monthly payment: \n");
    scanf("%f",&monthly_payment);
    month1= ((loan_amount-monthly_payment)+((loan_amount*0.06)/12));
    month2=((month1-monthly_payment)+((month1*0.06)/12));
    month3=((month2-monthly_payment)+((month2*0.06)/12));
    printf("Balance after first payment: %.2f\n",month1);
    printf("Balance after second payment: %.2f\n",month2);
    printf("Balance after third payment: %.2f\n",month3);
    return 0;


    
}