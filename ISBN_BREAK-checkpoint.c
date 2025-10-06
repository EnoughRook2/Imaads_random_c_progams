#include <stdio.h>
int main()
{
    int gsi,group,code,item_number,digit;
    printf("Enter the ISBN number: ");
    scanf("%d-%d-%d-%d-%d",&gsi,&group,&code,&item_number,&digit);
    printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d",gsi,group,code,item_number,digit);
    return 0;
}