//code for shipment box calculation where user can input
#include <stdio.h>
int main()
#define INCHES_PER_POUND 166
{
    int length,width,height,weight,volume;
    printf("enter the dimensions of the box: ");
    scanf("%d%d%d",&length,&width,&height);
    volume= length*width*height;
    weight= (volume + INCHES_PER_POUND -1)/INCHES_PER_POUND;
    printf("the weight is %d\n",weight);
    return 0;

    
}