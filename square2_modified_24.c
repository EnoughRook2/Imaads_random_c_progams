/*
Modify the square2. c program of Section 6.3 so that it pauses after every 24 squares and
displays the following message:
P r e s s E n t e r t o c o n t i n u e . . .
After displaying the message, the program should use getchar to read a character.
getchar won't allow the program to continue until the user presses the Enter key.
*/
#include <stdio.h>
int main(){
    long num,square;
    int count;
    char check;
    for (num=1,count=1;;count++,num++){
        square= num*num;
        printf("The square of %ld is %ld \n",num,square);
        if(count%24==0) {
            printf("Press enter to continue");
            check= getchar();
            if (check == '\n') continue;
            else break;
            
        }
    }

}