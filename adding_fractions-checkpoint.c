//code to add numbers zzzzzzzzzzzzzzz
#include <stdio.h>
int main()
{
    int num1,dem1,num2,dem2,resnum,resdem;
    printf("Enter the first fraction: \n");
    scanf("%d/%d",&num1,&dem1);
    printf("Enter the second fraction: \n");
    scanf("%d/%d",&num2,&dem2);
    resnum= (num1*dem2 + num2*dem1);
    resdem= dem1*dem2;
    printf("The sum is: %d/%d\n",resnum,resdem);
    return 0;
}