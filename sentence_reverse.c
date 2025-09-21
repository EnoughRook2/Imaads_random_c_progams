/*
Write a program that reverses the words in a sentence:
E n t e r a sentence: you can c a g e a s w a l l o w c a n ' t you?
R e v e r s a l of s e n t e n c e : you can't swallow a cage can you?
Hint: Use a loop to read the characters one by one and store them in a one-dimensional
char array. Have the loop stop at a period, question mark, or exclamation point (the "termi-
nating character"), which is saved in a separate char variable. Then use a second loop to
search backward through the array for the beginning of the last word. Print the last word,
then search backward for the next-to-last word. Repeat until the beginning of the array is
reached. Finally, print the terminating character.
*/
#include <stdio.h>
int main(){
    int i=0,j=0;
    char character;
    char letter[20]={'~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~'};
    char expression;
    printf("Enter the statement to be reversed: \n");
    test: character = getchar();
    while (character !='\n' && character != '!' && character!= '?'&& character != '.'){
        letter[i]=character;
        i++;
        goto test;
    }
    expression = character;
    for (i=18;i>-1;i--){
        if (letter[i]== ' ') {j=i+1;
            while (letter[j]!= ' '|| letter[j]!= '~') {printf("%c",letter[j]);
            j++;
            if (letter[j]== '~'|| letter[j]== ' ')  {printf(" ");
            break;}}

            
                
            }
            
        }
        i=0;
        for(;;i++){
            if (letter[i] == ' ') break;
            printf("%c",letter[i]);
            
        }

    
    
    printf("%c",expression);
    return 0;
}