/*
Write a program that generates a "random walk" across a 10 x 10 array. The array will con-
tain characters (all '. ' initially). The program must randomly "walk" from element to ele-
ment, always going up, down, left, or right by one element. The elements visited by the
program will be labeled with the letters A through Z, in the order visited. Here's an example
of the desired output:
Use the s r a n d and r a n d functions (see d e a l . c ) to generate random numbers.
After generating a number, look at its remainder when divided by 4. There are four possible
values for the remainder—0, 1, 2, and 3—indicating the direction of the next move. Before
performing a move, check that (a) it won't go outside the array, and (b) it doesn't take us to
an element that already has a letter assigned. If either condition is violated, try moving in
another direction. If all four directions are blocked, the program must terminate.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    typedef int Bool;
    int counter=0;
    int i,j;
    int x=0;
    int y=0;
    char map[10][10];
    Bool checker[10][10]={0};
    
    
    for(i=0;i<10;i++){
        for(j=0;j<10;j++) map[i][j]= '.';
    }
    srand(time(NULL));
    map[x][y] ='A';
    checker[x][y]=1;
    counter++;

    while (counter<26){
        int block =0;
        if (y+1>9 || checker[x][y+1]) block++;
        if (x+1>9|| checker[x+1][y]) block++;
        if (y - 1 < 0 || checker[x][y - 1]) block++;
        if (x - 1 < 0 || checker[x - 1][y]) block++;
        if (block==4) break;
        int direction = rand()%4;
        int new_x=x;
        int new_y=y;
        switch (direction){
            case 0: new_y +=1; break;
            case 1: new_x +=1; break;
            case 2: new_y -=1; break;
            case 3: new_x -=1; break;
        }
        if ( new_y >9 || new_y<0|| new_x>9|| new_x <0|| checker[new_x][new_y]) 
        continue;
        x= new_x;
        y=new_y;
        map[x][y]= 'A'+ counter;
        checker[x][y]=1;
        counter++;

        }
    

    
    for (i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%c",map[i][j]);}
         printf("\n"); 
    }
    return 0;
}