/*
Modify Programming Project 8 from Chapter 5 so that the departure times are stored in an
array and the arrival times are stored in a second array. (The times are integers, representing
the number of minutes since midnight.) The program will use a loop to search the array of
departure times for the one closest to the time entered by the user.
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
int main(){
    int arrival[8], departure[8];
    int hour,minutes,sum,i,flight,closest,count;
    for (i=0; i<8;i++) {
        printf("Enter arrival time(24 hour standard) for the day: \n");
        scanf("%d:%d",&hour,&minutes);
        sum= (hour*60) + minutes;
        arrival[i]=sum;
        printf("Enter departure time(24 hour standard) for the day: \n");
        scanf("%d:%d",&hour,&minutes);
        sum= (hour*60) + minutes;
        departure[i]=sum;
    }
    closest = arrival[0];
    printf("Enter your arrival flight time(24 hour standard): \n");
    scanf("%d:%d",&hour,&minutes);
    flight = (hour*60)+minutes;
    for (i=0;i<8;i++){
        if (flight > arrival[i]) continue;
        else {closest = arrival[i];
            count =i;
            break;}
        
    
        }
    

    printf("The closest flight is at %d:%0.2d and departure is %d:%0.2d", arrival[count]/60,arrival[count]%60,departure[count]/60,departure[count]%60);
    return 0;
}


    