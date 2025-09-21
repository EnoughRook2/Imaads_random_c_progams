/*
Write a program that asks user to enter a time (expressed in hours and minutes, using the 24-
hour clock). The program then displays the departure and arrival times for the flight whose
departure time is closest to that entered by the user: 
Departure time Arrival time
8:00 a.m. 10:16 a.m.
9:43 a.m. 11:52 a.m.
11:19 a.m. 1:31 p.m.
12:47 p.m. 3:00 p.m.
2:00 p.m. 4:08 p.m.
3:45 p.m. 5:55 p.m.
7:00 p.m. 9:20 p.m.
9:45 p.m. 11:58 p.m.
*/

#include <stdio.h>
int main()
{
    int hour,minute,sum;
    printf("Enter the time in 24-hour standard: \n");
    scanf("%d:%d",&hour,&minute);
    sum= (hour*60) + minute;
    if (sum < 480) printf("The closest departure time is 8:00am and arrives at 10:16am");
    else if (sum < 583) printf("The closest departure time is 9:43am and arrives at 11:52am");
    else if (sum < 679) printf("The closest departure time is 11:19am and arrives at 1:31pm");
    else if (sum < 767) printf("The closest departure time is 12:47pm and arrives at 3:00pm");
    else if (sum < 840) printf("The closest departure time is 2:00pm and arrives at 9:20");
    else if (sum < 945) printf("The closest departure time is 3:45pm and arrives at 5:55");
    else if (sum < 1140) printf("The closest departure time is 7:00pm and arrives at 9:20pm");
    else if (sum < 1305) printf("The closest departure time is 9:45pm and arrives at 11:58pm");
    else printf("There are no flights that match your schedule");
    return 0;

}