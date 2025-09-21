/*
Write a program that translates an alphabetic phone number into numeric form:
E n t e r phone number: CALLATT
2 2 5 5 2 8 8
(In case you don't have a telephone nearby, here are the letters on the keys: 2=ABC, 3=DEF,
4=GHI, 5-JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) If the original phone number contains
nonalphabetic characters (digits or punctuation, for example), leave them unchanged:
Enter phone number: 1-800-COL-LECT
1 - 8 0 0 - 2 6 5 - 5 3 2 8
You may assume that any letters entered by the user are upper case.
*/
#include <stdio.h>
int main(){
    int num,conversion;
    char alphabet;
    printf("Enter the phone number: \n");
    check: alphabet = getchar();
    while (alphabet != '\n') {
        switch (alphabet) {
            case 'A': 
            case 'B':
            case 'C': printf("%d",2);
            goto check;
            case 'D':
            case 'E':
            case 'F': printf("%d",3);
            goto check;
            case 'G':
            case 'H':
            case 'I': printf("%d",4);
            goto check;
            case 'J':
            case 'K':
            case 'L': printf("%d",5);
            goto check;
            case 'M':
            case 'N':
            case 'O': printf("%d",6);
            goto check;
            case 'P':
            case 'R':
            case 'S': printf("%d",7);
            goto check;
            case 'T':
            case 'U':
            case 'V': printf("%d",8);
            goto check;
            case 'W': 
            case 'X':
            case 'Y':printf("%d",9);
            goto check;
            default: putchar(alphabet);
            goto check;

        } 
    }
    return 0;
}