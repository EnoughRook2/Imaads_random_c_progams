//program to put volume of a sphere
#include <stdio.h>
#define RATIO (4.0f/3.0f)
#define PI 3.14f
int main()
{float radius,volume;
    printf("Enter the radius of sphere:");
    scanf("%f",&radius);
    volume= RATIO*PI*radius*radius*radius;
    printf("The volume of the sphere with radius %.2fm is \n%.2fmetre cube",radius,volume );
    return 0;
    
}