/*
The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, ..., where each number is the sum of the
two preceding numbers. Write a program fragment that declares an array named
fi b numbers of length 40 and fills the array with the first 40 Fibonacci numbers. Hint:
Fill in the first two numbers individually, then use a loop to compute the remaining num-
b e r s .
*/
#include <stdio.h>
int main(){
    int index,row;
    int fib[40]={fib[0]=0,fib[1]=1};
    printf("%d %d ",fib[0],fib[1]);
    for (index=2,row=1;index<40;index++,row++) {
        fib[index]= fib[index-2]+fib[index-1];
        printf("%d ",fib[index]);
        

    }
    return 0;
}