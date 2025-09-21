/*
Using the switch statement, write a program that converts a numerical grade into a letter
grade:

Use the following grading scale: A = 90-100, B = 80-89, C = 70-79, D = 60-69, F = 0-59.
Print an error message if the grade is larger than 100 or less than O. Hint: Break the grade
into two digits, then use a switch statement to test the ten's digit.
*/
#include <stdio.h>
int main()
{
    float marks;
    int grade;
    printf("Enter the mark of the student: \n");
    scanf("%f", &marks);
    grade= (marks/10);
    if (marks <0) printf("Invalid");
    else if (marks <=99) switch (grade) {
        case 0: case 1: case 2: case 3: case 4: case 5: 
        printf("Letter grade: F");
        break;
        case 6: printf("Letter grade: D");
        break;
        case 7: printf("Letter grade: C");
        break;
        case 8: printf("Letter grade: B");
        break;
        case 9: printf("Letter grade: A");
        break;
    } else if(marks == 100) printf("Letter grade: A");
    else printf("Invalid");
   
return 0;
}