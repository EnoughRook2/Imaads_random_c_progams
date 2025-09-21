//converts dd/mm/yyyy into different format
#include <stdio.h>
int main()

{
    int month,year,day;
    int selection;
    printf("Please enter your planet(according from distance of sun like mercury is 1); ");
    scanf("%d", &selection);
    if (selection == 3) {
    printf("Enter date in (dd/mm/yyyy) format: \n");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("Dated this %d",day);
    switch (day) {
        case 1: case 21: case 31:
        printf("st"); break;
        case 2: case 22: 
        printf("nd"); break;
        case 3: case 23:
        printf("rd"); break;
        default: printf("th"); break;
    }
    printf(" day of ");
    switch(month){
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("march"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("august"); break;
        case 9: printf("september"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
    
    }
    printf(", %d. \n",year);}
    else printf("Your not on earth bro wtf");
    return 0;
}