//Calculates commission for multiple trades
#include <stdio.h>
int main()
{
    float sum,charge,check;
    do {
    printf("Enter the amount: \n");
    scanf("%f",&sum);
    if (sum<2500 && sum>0) printf("The commission is %0.2f\n", 30.0f + 0.01*sum);
    else if (sum<6500 && sum>=2500) printf("The commission is %0.2f\n ", 40.0f + 0.02*sum);
    else if (sum<10000  && sum>=6500) printf("The commision is %0.2f\n", 100+ 0.05*sum);
    else  if (sum >=10000) printf("Discuss with the manager regarding commission \n");
    else break;
    } while (sum>0);
    return 0;
 }