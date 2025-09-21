#include <stdio.h>
int main(){
    int row,column,day;
    float temp[30][8];
    day=0;

    for (row=0;row<30;row++,day++){
        for (column=0;column<8;column++){
            if (column==0) temp[row][0]=day+1;
            else {printf("Enter temp: \n");
            scanf("%f",&temp[row][column]);}
    } 
} 
printf("Days\tMonday\ttuesday\twednesday    thursday   friday  saturday  sunday \n");
for (row=0;row<30;row++){
        for (column=0;column<8;column++){
            printf("%.2f\t",temp[row][column]);
} printf("\n");
}
return 0;
}
