/*
Write a program that prints an n X n magic square (a square arrangement of the numbers
1, 2, ..., n^2 in which the sums of the rows, columns, and diagonals are all the same). The
user will specify the value of n:
*/
#include <stdio.h>
int main(){
    int size;
    int num,i=0,j,count=1,copyx,copyy;
    printf("Enter size of the magic square(odd number from 1-99): \n");
    scanf("%d",&size);
    
    int magic[size][size];
    
    for (i=0;i<size;i++){
        for(j=0;j<size;j++) magic[i][j]=0;
    }
    j=size/2;
    i=0;
    magic[i][j]=1;
    count++;
    
    
    for (;count<=size*size;count++){
        copyx=i;
        copyy=j;
        i--;
        j++;
        if (i<0) i=size-1;
        if(j == size) j=0;
        if (magic[i][j] == 0) magic[i][j] = count;
        else {i=copyx;
            j=copyy;
            i++;
        
            
        magic[i][j]= count;
    }
    }

    for (i=0;i<size;i++){
        for(j=0;j<size;j++) printf("%d\t",magic[i][j]);
    printf("\n");}
    return 0;
}