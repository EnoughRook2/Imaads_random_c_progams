#include <stdio.h>
int main(){
    int size,num,num2,copy;
    printf("Enter the size of array: \n");
    scanf("%d", &size);
    int a[size];
    printf("Enter values into array: \n");
    for (num=0;num<size;num++) {
        scanf("%d",&a[num]);
    }
    for (num=0;num<size;num++){
        printf("%d \t",a[num]);
    }
    printf("\n");
    
    for (num=9;num>=0;num--){
        printf("%d \t",a[num]);
    }
    return 0;
}