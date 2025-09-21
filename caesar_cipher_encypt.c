/*
One of the oldest known encryption techniques is the Caesar cipher, attributed to Julius Cae-
sar. It involves replacing each letter in a message with another letter that is a fixed number of positions later in the alphabet. 
(If the replacement would go past the letter Z, the cipher
"wraps around" to the beginning of the alphabet. For example, if each letter is replaced by
the letter two positions after it, then Y would be replaced by A, and Z would be replaced by
B.) Write a program that encrypts a message using a Caesar cipher. The user will enter the
message to be encrypted and the shift amount (the number of positions by which letters
should be shifted):
Enter message t o b e encrypted: Go a h e a d , make my day.
E n t e r s h i f t amount ( 1 - 2 5 ) : 3
Encrypted message: J r dkhdg, panh pb gdb.
Notice that the program can decrypt a message if the user enters 26 minus the original key:
Enter message to be encrypted: J r akhag, panh pb gab.
E n t e r s h i f t a m o u n t ( 1 - 2 5 : 2 3
E n c r y p t e d message: Go a h e a d , make my day.
You may assume that the message does not exceed 100 characters. Characters other than let-
ters should be left unchanged. Lower-case letters remain lower-case when encrypted, and
upper-case letters remain upper-case. Hint: To handle the wrap-around problem, use the
expression ( (ch - 'A') + n) % 26) + 'A' to calculate the encrypted version of an upper-
case letter, where ch stores the letter and n stores the shift amount. (You'll need a similar
expression for lower-case letters.)
*/
#include <stdio.h>
int main(){
    int position,i;
    char text[100];
    char letter;
    for (i=0;i<100;i++) text[i]='~';
    i=0;
    printf("Enter sentence to be encrypted: \n");
    test: letter= getchar();
    while (letter != '\n') {
        text[i] = letter;
        i++;
        goto test;
    }
    printf("Enter number of spaces to move for encryption:(1-25) \n");
    scanf("%d",&position);
    for (i=0;i<100;i++){if (text[i]=='~') break;
        if (text[i]==','||text[i]=='.'||text[i]=='?'||text[i]=='!'||text[i]=='@'||text[i]==' ') continue; 
        if (text[i] <=90 && text[i] >=65){
        text[i] =  (((text[i] - 'A') + position) % 26) + 'A';}
        if (text[i] <=122 && text[i] >=97){
        text[i] =  (((text[i] - 'a') + position) % 26) + 'a';}

    }
    printf("The encrypted code is:\n");
    for(i=0;i<100;i++) {
        if (text[i]=='~') break;
        else printf("%c",text[i]);}
    return 0;


}