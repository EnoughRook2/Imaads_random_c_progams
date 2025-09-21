#include <stdio.h>
int main()
{
    int month,day,year;
    printf("Enter your dob in the format of mm/dd/yyyy: ");
    scanf("%d/%d/%d", &month,&day,&year);
    printf("You entered the date %d/%d/%d",month,day,year);
    return 0;
}