/*
Modify Programming Project 11 from Chapter 7 so that the program labels its output:
Enter a fi r s t and l a s t name: Lloyd Fosdick
You e n t e r e d the name: Fosdick, L.
The program will need to store the last name (but not the first name) in an array of characters
until it can be printed. You may assume that the last name is no more than 20 characters long.
*/
#include <stdio.h>
int main(){
    char last[20]={'0'},first[1];
    char letter;
    int i=0,count=0;
    printf("Enter the first and last name: \n");
    test1: letter = getchar();
    while (letter !=' '){
    if (count ==0) {first[0]=letter;
        count++;}
    else goto test1;}
    test2: letter = getchar();
    while (letter != '\n'){
        last[i]=letter;
        i++;
        goto test2;
    }
    for (i=0;i<20;i++){
        if (last[i]== '0') break;
        else printf("%c",last[i]);
    }
    printf(",%c",first[0]);
    return 0;
}
    
    
    
        

