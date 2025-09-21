#include <stdio.h>
int main()
{
    int amount,$20_dollar_bills,$10_dollar_bills,$5_dollar_bills,$1_dollar_bills;
    printf("Enter the amount of dollars: ");
    scanf("%d",&amount);
    $20_dollar_bills= amount/20;
    $10_dollar_bills= (amount- ($20_dollar_bills*20))/10;
    $5_dollar_bills= (amount- ($20_dollar_bills*20) -($10_dollar_bills*10))/5;
    $1_dollar_bills= (amount- ($20_dollar_bills*20)-($10_dollar_bills*10)-($5_dollar_bills*5))/1;
    printf("The number of 20 dollar bills is: %d\n",$20_dollar_bills);
    printf("The number of 10 dollar bills is: %d\n",$10_dollar_bills);
    printf("The number of 5 dollar bills is: %d\n",$5_dollar_bills);
    printf("The number of 1 dollar bills is %d\n",$1_dollar_bills);
    return 0;

}