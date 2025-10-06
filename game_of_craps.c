/*
Write a program that simulates the game of craps, which is played with two dice. On the
first roll, the player wins if the sum of the dice is 7 or 11. The player loses if the sum is 2, 3,
or 12. Any other roll is called the "point" and the game continues. On each subsequent roll,
the player wins if he or she rolls the point again. The player loses by rolling 7. Any other roll
is ignored and the game continues. At the end of each game, the program will ask the user
whether or not to play again. When the user enters a response other than y or Y, the program
will display the number of wins and losses and then terminate.
Yo u r o l l e d : 8
Yo u r p o i n t i s 8
Y o u r o l l e d : 3
Y o u r o l l e d : 1 0
You r o l l e d : 8
Y o u w i n !
Play again? y
You r o l l e d : 6
Your p o i n t i s 6
Yo u r o l l e d : 5
You r o l l e d : 12
Yo u r o l l e d : 3
You r o l l e d : 7
Y o u l o s e !
Play again? y
You r o l l e d : 11
Yo u w i n !
Play again? n
Wi n s : 2 L o s s e s : 1
Write your program as three functions: main, roll_dice, and play_game. Here are
the prototypes for the latter two functions:
i n t r o l l d i c e (void) ;
bool play_game (void) ;
r o l l _ d i c e should generate two random numbers, each between 1 and 6, and return their
sum. play_game should play one craps game (calling roll_dice to determine the out-
come of each dice roll); it will return true if the player wins and false if the player loses.
play_game is also responsible for displaying messages showing the results of the player's
dice rolls. main will call play_game repeatedly, keeping track of the number of wins and
losses and displaying the "you win" and "you lose" messages. Hint: Use the rand function
to generate random numbers. See the deal. e program in Section 8.2 for an example of
how t o call r a n d and the related s r a n d function.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int roll_dice();
int play_game();
int main(){int check,win=0,loss=0,check1=2;
    srand(time(NULL));
    printf("Do you want to play the game(Yes-1/No-0):\n");
    scanf("%d",&check);
    if (check==0) return 0;
    else if (check==1) {
    while (check1 !=0){
        int outcome=play_game();
        if (outcome==2) win +=1;
        else if (outcome==1) loss +=1;
        else {printf("There is something wrong in code");
            return 0;}
        printf("Do you want to continue: Yes-1/No-0: \n");
        scanf("%d",&check1);
        if (check1==1) continue;
        if (check1==0) {
            printf("Wins: %d \nLosses: %d",win,loss);
            return 0;
        }
    }

    


    } else {
        printf("Error,wrong input");
        return 0;
    }
}
int roll_dice(){
   
        int rd= 1+ rand()%6;
        return rd;
    }
int play_game(){
    int check;
    int d1= roll_dice();
    int d2=roll_dice();
    printf("Your dice is %d\n",d1+d2);
    if (d1+d2==7||d1+d2==11) {
        printf("You win \n");
         return 2;}
    else if (d1+d2==2||d1+d2==3||d1+d2==12) {
        printf("You lose \n");
        return 1;
    }
    else {
        int pointer= d1+d2;
        test:{ int e1=roll_dice();
        int e2=roll_dice();
        
        printf("Your dice is %d\n",e1+e2);
        if (e1+e2==pointer) {
        printf("You win \n");
        return 2;}
        else if (e1+e2==7) {
        printf("You lose \n");
        return 1;
        }}
        
        goto test;
    
    }
    
}




