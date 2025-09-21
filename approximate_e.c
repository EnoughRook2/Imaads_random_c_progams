/*
write a program that approximates the value of e
*/
# include <stdio.h>
int main()
{
    float factorial,limit,check;
    float sum;
    printf("Enter the limit of factorial: \n");
    scanf("%f",&limit);
    sum=0;
    factorial=1;
    check=1;
    while (check<=limit) {
        factorial *=check;
        sum += 1/factorial;
        check++;
        if (check == limit) {sum = sum+1;
            printf("The value of e is %f",sum);}

    }
    return 0;

}