//reverse the 2- digit input number
#include <stdio.h>
int main()
{
    int num,n1,n2;
    printf("Enter the 2-digit number: ");
    scanf("%d",&num);
    n1= num%10;
    n2= num/10;
    printf("The reversal of %d is %d%d",num,n1,n2);
    return 0;

}