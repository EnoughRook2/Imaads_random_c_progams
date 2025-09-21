/*
Write a program that finds the largest and smallest of four integers entered by the user
*/
#include <stdio.h>
int main()
{
    int a,b,c,d,temp1,temp2,temp3,temp4;
    printf("Enter 4 integers: \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    temp1 = a;
    temp2= c;
    
    if (a>b) {a=b; b=temp1;}
    if (c>d) {c=d; d=temp2;}
    temp3=a;
     if (a>c) {a=c;c=temp3;}
     temp4=d;
    if (d>b) {d=b;b=temp4;};
    printf("largest: %d smallest: %d",b,a);
    return 0;
 

}