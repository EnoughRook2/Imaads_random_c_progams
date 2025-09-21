//reverses the digits for n digit integer
#include <stdio.h>
#include <math.h>
int main()
{
    int num,div,sum,count,copy,rev,check;
    printf("Enter a number to be reversed: ");
    scanf("%d",&num);
    copy=num;
    check=0;
    count=1;
    rev=0;
    while (copy!=0) {copy=copy/(10);
    check++;
    ;}
    for (sum=0,div=1;num>0;check--){
        sum = (num%(10));
        num /=10;
        rev+= pow(10,check-1)*sum;
    
    } 
    printf("%d\n",rev);
    return 0;
    
}