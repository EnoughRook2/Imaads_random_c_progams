//arranges in a 4x4 matrix
#include <stdio.h>
int main()
{
        int a1,a2,a3,a4,b4,c4,b1,b2,b3,c1,c2,c3,d1,d2,d3,d4,sr1,sr2,sr3,sr4,sc1,sc2,sc3,sc4,sd1,sd2;
        printf("Enter the number from 1 to 16 in any order: \n");
        scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a1,&a2,&a3,&a4,&b1,&b2,&b3,&b4,&c1,&c2,&c3,&c4,&d1,&d2,&d3,&d4);
        printf("%d\t%d\t%d\t%d\n",a1,a2,a3,a4);
        printf("%d\t%d\t%d\t%d\n",b1,b2,b3,b4);
        printf("%d\t%d\t%d\t%d\n",c1,c2,c3,c4);
        printf("%d\t%d\t%d\t%d\n",d1,d2,d3,d4);
        sr1= a1+a2+a3+a4;
        sr2 =b1+b2+b3+b4;
        sr3 =c1+c2+c3+c4;
        sr4 =d1+d2+d3+d4;
        sc1 =a1+b1+c1+d1;
        sc2 =a2+b2+c2+d2;
        sc3 =a3+b3+c3+d3;
        sc4 =a4+b4+c4+d4;
        sd1 =a1 + b2+c3+d4;
        sd2=a4+b3+c2+d1;
        printf("The sum of rows are: %d %d %d\n",sr1,sr2,sr3);
        printf("The sum of coloumns are: %d %d %d\n15",sc1,sc2,sc3);
        printf("The sum of diagonals are: %d %d",sd1,sd2);
        return 0;

}