#include <stdio.h>
int num(int x,int check);
int main(){
    int i;
    printf("Enter a number: \n");
    scanf("%d",&i);
    int digits=num(i,0);
    printf("%d",digits);
    return 0;
}
int num(int x,int check){
    int y=check;
    if (x==0) return y;
    else {

        x=x/10;
     return num(x,y+1);
    }
}