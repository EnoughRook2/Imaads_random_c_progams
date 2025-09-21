/*
Write a program that tests whether two words are anagrams (permutations of the same let-
ters):
E n t e r The E n t e r fi r s t w o r d : s m a r t e s t
s e c o n d w o r d : m a t t r e s s
w o r d s a r e a n a g r a m s .
E n t e r fi r s t w o r d : d u m b e s t
E n t e r s e c o n d w o r d : s t u m b l e
T h e w o r d s a r e n o t a n a g r a m s .
Write a loop that reads the first word, character by character, using an array of 26 integers to
keep track of how many times each letter has been seen. (For example, after the word smart-
est has been read, the array should contain the values 1 0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 1 2 2 0
0 0 0 0 0, reflecting the fact that smartest contains one a, one e, one m, one r, two s's and
two t's.) Use another loop to read the second word, except this time decrementing the corre-
sponding array element as each letter is read. Both loops should ignore any characters that
aren't letters, and both should treat upper-case letters in the same way as lower-case letters.
After the second word has been read, use a third loop to check whether all the elements in
the array are zero. If so, the words are anagrams. Hint: You may wish to use functions from
<ctype.h>, such as i s a l p h a and tolower.
*/
#include <stdio.h>
int main(){
    const char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int counter1[26]= {0};
    int counter2[26]={0};
    char character;
    printf("Enter first word: \n");
    test1: character = getchar();
    while (character != '\n'){
        for(int i=0;i<26;i++){
                  if (character == alphabets[i]) counter1[i]++;}
                goto test1;}
    printf("Enter second word: \n");
    test2: character = getchar();
    while (character != '\n'){
        for(int i=0;i<26;i++){
                  if (character == alphabets[i]) counter2[i]++;}
                goto test2;}
    for (int i=0;i<26;i++) {
        if (counter1[i] == counter2[i]) continue;
        else {printf("The words are not anagram");
              goto end;}
    }
    printf("The words are anagram");
    end: return 0;
}