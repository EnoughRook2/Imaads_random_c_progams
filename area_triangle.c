#include <stdio.h>
int area(int a,int b){
    return printf("%d",(a*b)/2);
}
int main(){
    printf("Enter base and height respectively: ");
    int a,b;
    scanf("%d%d",&a,&b);
    area(a,b);
    return 0;
}