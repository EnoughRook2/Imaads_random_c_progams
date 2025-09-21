/*Write a program that asks the user to enter two integers, then calculates and displays their
greatest common divisor (GCD)
Hint: The classic algorithm for computing the GCD, known as Euclid's algorithm, goes as
follows: Let m and n be variables containing the two numbers. If n is 0, then stop: m con-
tains the GCD. Otherwise, compute the remainder when m is divided by n. Copy n into m
and copy the remainder into n. Then repeat the process, starting with testing whether n is 0.
*/
#include <stdio.h>
int main()
{
    int num1,num2,gcd,copy;
    printf("Enter two integers(num1 > num2): \n");
    scanf("%d %d",&num1,&num2);
    for(;;) {
        num1= ((num2*(num1/num2)) + (num1%num2));
        
        if (num1%num2==0 && num1/num2!=num1) {
            printf("The gcd is %d",num2);
            break;}
            else num2= num1%num2;
            if (num1/num2==num1) {printf("The gcd is 1");
                break;
            }
        }
        return 0;
}
    
   
        
