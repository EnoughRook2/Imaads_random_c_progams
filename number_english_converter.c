/*
Write a program that asks the user for a two-digit number, then prints the English word for
the number:

Hint: Break the number into two digits. Use one switch statement to print the word for the
first digit ("twenty," "thirty," and so forth). Use a second switch statement to print the
word for the second digit. Don't forget that the numbers between 11 and 19 require special
treatment.
*/
#include <stdio.h>
int main()
{
    int tens,ones,weird;
    printf("Enter the 2 digit number: \n");
    scanf("%1d%1d", &tens,&ones);
    if (tens!=1){ 
    switch (tens){
        case 0: printf(" ");
        break;
        case 2: printf("twenty-");
        break;
        case 3: printf("thirty-");
        break;
        case 4: printf("fourty-");
        break;
        case 5: printf("fifty-");
        break;
        case 6: printf("sixty-");
        break;
        case 7: printf("seventy-");
        break;
        case 8: printf("eighty");
        break;
        case 9: printf("ninety");
        break;

    }
    switch (ones){
        case 0: printf("");
        break;
        case 1: printf("one");
        break;
        case 2: printf("two");
        break;
        case 3: printf("three");
        break;
        case 4: printf("four");
        break;
        case 5: printf("five");
        break;
        case 6: printf("six");
        break;
        case 7: printf("seven");
        break;
        case 8: printf("eight");
        break;
        case 9: printf("nine");
        break;
        
    }
    } else switch (ones){
        case 0: printf("ten");
        break;
        case 1: printf("eleven");
        break;
        case 2: printf("twelve)");
        break;
        case 3: printf("thirtheen");
        break;
        case 4: printf("fourteen");
        break;
        case 5: printf("fifteen");
        break;
        case 6: printf("sxteen");
        break;
        case 7: printf("seventeen");
        break;
        case 8: printf("eighteen");
        break;
        case 9: printf("nineteen");
        break;
    }
    return 0;

}