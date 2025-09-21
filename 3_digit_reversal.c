//multiples combinations of a 3-digit number
#include <stdio.h>
int main()
{
    int num,n1,n2,n3,temp1;
    printf("Enter the 3-digit number: \n");
    scanf("%d",&num);
    n3=num/100;
    temp1= num- (100*n3);
    n2= temp1/10;
    n1=temp1%10;
    printf("The different iterations of %d is \n %d%d%d \n %d%d%d \n %d%d%d \n %d%d%d \n %d%d%d \n ",num,n1,n2,n3,n1,n3,n2,n2,n3,n1,n2,n1,n3,n3,n1,n2);
    return 0;
}