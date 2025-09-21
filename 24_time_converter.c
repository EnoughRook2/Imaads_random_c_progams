//converts 24_hour_time.c
/*
Write a program that asks the user for a 24-hour time, then displays the time in 12-hour
form:
*/
#include <stdio.h>
int main()
{
int hour,minute;

{
    /* data */
};

printf("Enter the 24 hour standard time: ");
scanf("%d:%d",&hour,&minute);
switch (hour) {
    case 0: printf("12:"); break;
    case 13: printf("1:"); break;
    case 14: printf("2:"); break;
    case 15: printf("3:"); break;
    case 16: printf("4:"); break;
    case 17: printf("5:"); break;
    case 18: printf("6:"); break;
    case 19: printf("7:"); break;
    case 20: printf("8:"); break;
    case 21: printf("9:"); break;
    case 22: printf("10:");break;
    case 23: printf("11:"); break;
    default: printf("%d:",hour);
    break;

}

printf("%0.2d",minute);
if (hour>=12) printf(" PM");
else printf(" AM");
return 0;

}