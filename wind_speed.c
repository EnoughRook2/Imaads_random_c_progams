//based on wind speed, mentions the wind conditions
#include <stdio.h>
int main()
{
    float speed;
    printf("Enter the speed of the wind: ");
    scanf("%f", &speed);
    if (speed <= 1) printf("calm");
    else if (speed <=3) printf("Light air");
    else if (speed <= 27) printf("Breeze");
    else if (speed <= 47) printf("Gale");
    else if (speed <= 63) printf("Storm");
    else if (speed>63) printf("Hurricane");
    return 0;
}