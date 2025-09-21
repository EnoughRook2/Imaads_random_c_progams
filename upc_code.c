//F=calculating the check digit of a UPC code
#include <stdio.h>
int main()
{
    int d,a1,a2,a3,a4,a5,b1,b2,b3,b4,b5,check_digit,s1,s2;
    printf("Enter the 11 digit code: \n");
    scanf("%1d %1d%1d%1d%1d%1d %1d%1d%1d%1d%1d",&d,&a1,&a2,&a3,&a4,&a5,&b1,&b2,&b3,&b4,&b5);
    s1=d+a2+a4+b1+b3+b5;
    s2=a1+a3+a5+b2+b4;
    printf("The check digit is: %d\n",check_digit= (9-((((3*s1)+s2)-1)%10)));
    return 0;
    

}