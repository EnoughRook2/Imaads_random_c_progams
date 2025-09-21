//just a fahrenheit to celsius converter
#include <stdio.h>
#define FAHRENHEIT_FP 32
#define SCALE_FACTOR (5.0f/9.0f)
int main()
{
    float F, Celsius;
    printf("Enter the fahrenheit value:");
    scanf("%f",&F);
    Celsius= (F-FAHRENHEIT_FP)*SCALE_FACTOR;
    printf("The value of %.2f in celsius is %.2f\n",F,Celsius);
    return 0;
}