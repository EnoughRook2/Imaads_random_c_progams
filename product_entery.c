#include <stdio.h>
int main()
{
    int item_number,date,day,month,year;
    float unit_price;
    printf("Enter item number: ");
    scanf("%d",&item_number);
    printf("Enter the unit price of item %d: ",item_number);
    scanf("%f",&unit_price);
    printf("date of purchase IN DD/MM/YYYY: ");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%.2f\t\t%d/%d/%d",item_number,unit_price,day,month,year);
    return 0;
}