/*Modify Programming Project 4 from Chapter 7 so that the program labels its output:
E n t e r p h o n e n u m b e r : 1-800-COL-LECT
In n u m e r i c f o r m : 1-800-265-5328
The program will need to store the phone number (either in its original form or in its
numeric form) in an array of characters until it can be printed. You may assume that the
phone number is no more than 15 characters long.*/
#include <stdio.h>
int main(){
    int i;
    char a[15];
    printf("Enter the phone number: \n");
    for(i=0;i<15;i++){
        pull: a[i]=getchar();
        while (a[i] != '\n') {
            switch (a[i]) {
            case 'A': 
            case 'B':
            case 'C': printf("%d",2);
            goto pull;
            case 'D':
            case 'E':
            case 'F': printf("%d",3);
            goto pull;
            case 'G':
            case 'H':
            case 'I': printf("%d",4);
            goto pull;
            case 'J':
            case 'K':
            case 'L': printf("%d",5);
            goto pull;
            case 'M':
            case 'N':
            case 'O': printf("%d",6);
            goto pull;
            case 'P':
            case 'R':
            case 'S': printf("%d",7);
            goto pull;
            case 'T':
            case 'U':
            case 'V': printf("%d",8);
            goto pull;
            case 'W': 
            case 'X':
            case 'Y':printf("%d",9);
            goto pull;
            default: putchar(a[i]);
            goto pull;
        }
        
    }
    return 0;
    
}}