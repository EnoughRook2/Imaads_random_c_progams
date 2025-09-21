/*
Write a program that reads a 5 x 5 array of integers and then prints the row sums and the
column sums:
*/
#include <stdio.h>
int main(){
    int array[5][5];
    int row,column,count,sum1,sum2;
    printf("enter elements of array:\n");
    for (row=0;row<5;row++) {
        for (column=0;column <5;column++) {
            scanf("%d",&array[row][column]);
        }
    }
    for (row=0,count=1;row<5;row++) {
        for (column=0;column <5;column++,count++) {
            printf("%d\t",array[row][column]);
            if (count%5==0) printf("\n");
        }
    
    }
    printf("Sum of rows:");
    for (row=0;row<5;row++) {
        for (column=0,sum1=0;column <5;column++) {
            
            sum1 += array[row][column];
        }printf("%d\t",sum1);
    
    }
    printf("\n");
    printf("Sum of columns:");
    for (column=0;column<5;column++) {
        for (row=0,sum2=0;row <5;row++) {
            
            sum2 += array[row][column];
        }printf("%d\t",sum2);
    
    }
    return 0;
}