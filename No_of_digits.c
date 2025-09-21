//counts the number of digits upto 3
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if (num<=9) printf("The number has 1 digits");
    else if (num<=99) printf("The number has 2 digits");
    else if (num<=999) printf("The number as 3 digits");
    else printf("Input a number that is 3 digits and below");
    return 0;
}