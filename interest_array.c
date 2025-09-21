#include <stdio.h>
int main(){
    int size,years,interest_rate,i,j;
    double amount;
    
    size=0;
    printf("Enter original amount: \n");
    scanf("%lf",&amount);
    printf("Enter the number of different interest rates: \n");
    scanf("%d",&size);
    double money[size];
    printf("Enter the minimum interest rate: \n");
    scanf("%d",&interest_rate);
    printf("Enter thr number of years: \n");
    scanf("%d",&years);
    for(i=0;i<size;i++){
        money[i]=amount;
    }
    
    printf("Years \t");
    for (i=0;i<size;i++){
        printf("  %d \t",interest_rate+i);
    }
    printf("\n");
    for (j=1;j<=years;j++) {
        printf("%d \t",j);
        for (i=0;i<size;i++){
            money[i] += (money[i]*(interest_rate+i))/100;
            printf("%0.2lf \t", money[i]);
            
        }
        printf("\n");
    }
    return 0;

}