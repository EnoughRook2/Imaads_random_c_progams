/*
Write a program that prompts the user to enter two dates and then indicates which date
comes earlier on the calendar:
*/
#include <stdio.h>
int main()
{
    int d1,d2,m1,m2,y1,y2,fd1,fd2,fm1,fm2,fy1,fy2;
    printf("Enter the first date in dd/mm/yyyy format:  \n");
    scanf("%d/%d/%d",&d1,&m1,&y1);
    printf("Enter the second date in similar format: \n");
    scanf("%d/%d/%d",&d2,&m2,&y2);
    if (y1<y2) printf(" %d/%d/%d is earlier than %d/%d/%d", d1,m1,y1,d2,m2,y2); 
    else if (y1>y2) printf("%d/%d/%d is earler than %d/%d/%d", d2,m2,y2,d1,m1,y1);
    else if (m1<m2) printf(" %d/%d/%d is earlier than %d/%d/%d", d1,m1,y1,d2,m2,y2);
    else if (m1>m2) printf(" %d/%d/%d is earlier than %d/%d/%d", d2,m2,y2,d1,m1,y1);
    else if (d1<d2) printf(" %d/%d/%d is earlier than %d/%d/%d", d1,m1,y1,d2,m2,y2);
    else if (d1>d2) printf(" %d/%d/%d is earlier than %d/%d/%d", d2,m2,y2,d1,m1,y1);
    else if (d1 == d2) printf("The inputs are the same");
    return 0;


}