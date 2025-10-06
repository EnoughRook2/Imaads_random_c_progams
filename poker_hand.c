/*
The program will read and classify a poker hand.
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//constants 
#define NUM_SUITS 4
#define NUM_RANKS 13
#define NUM_CARDS 5
//External Variables
int num_suits[NUM_SUITS];
int num_rank[NUM_RANKS];
bool straight,flush,four,three;
int pair;
// Prototypes
void read_cards();
void analyse_cards();
void print_cards();
//main function- used to call  read_cards, analyse_cards and print_cards.
int main(){
    for (;;){
        read_cards();
        analyse_cards();
        print_cards();
    }
}
//read_cards: Puts values into the external variables num_suits and num_rank, check for duplicates and bad stuff
void read_cards(){
    bool card_exists[NUM_RANKS][NUM_SUITS];
    bool bad_card;
    char card,rank_card,suit_card;
    int rank,suit;
    int cards_read =0;
    for (rank=0;rank<NUM_RANKS;rank++){
        num_rank[rank]=0;
        for (suit=0;suit<NUM_SUITS;suit++){
            card_exists[rank][suit]= false;

        }
    }
    for (suit=0;suit<NUM_SUITS;suit++){
        num_suits[suit]=0;
    }
    while (cards_read<NUM_CARDS){
        bad_card=false;
        printf("Enter a card: \n");
        rank=getchar();
        switch (rank){
            case '0': exit(EXIT_SUCCESS);
            case '2': rank=0;break;
            case '3': rank=1;break;
            case '4': rank=2;break;
            case '5': rank=3;break;
            case '6': rank=4;break;
            case '7': rank=5;break;
            case '8': rank=6;break;
            case '9': rank=7;break;
            case 't': case 'T': rank =8; break;
            case 'j': case 'J': rank=9;break;
            case 'q': case 'Q': rank=10;break;
            case 'k': case 'K': rank=11;break;
            case 'a': case 'A': rank=12; break;
            default: bad_card=true;
        }
        suit=getchar();
        switch (suit){
            case 'c':case 'C': suit=0;break;
            case 'd':case 'D': suit=1;break;
            case 'h':case 'H': suit=2;break;
            case 's':case 'S': suit=3;break;
            default: bad_card=true;
        }
        while ((card= getchar()) != '\n') 
           { if (card != ' ') bad_card = true;}
        if (bad_card) printf("Bad card, It is ignored \n");
        else if (card_exists[rank][suit]) printf("Duplicate card, ignored \n");
        else {
            num_rank[rank]++;
            num_suits[suit]++;
            card_exists[rank][suit]=true;
            cards_read++;
        }

    }
}
//Determines whether the hand contains straight,flush,four-of a kind,three of a kind, determines the number of pairs
//stores the results into external variables straight,fush,four,three and pairs.
 void analyse_cards(){
    int consec=0;
    int rank,suit;
    straight =false;
    flush=false;
    four=false;
    three=false;
    pair=0;
    //flush check
    for (suit=0;suit<NUM_SUITS;suit++)
        if (num_suits[suit]==NUM_CARDS ) flush = true;
    //check for straight
    rank=0;
    while (num_rank[rank] ==0) rank++;
    for (;rank<NUM_RANKS && num_rank[rank]>0;rank++) consec++;
    if (consec==NUM_CARDS){
        straight =true;
        return;
    }
    //check for 4-kind,4-kind and pairs
    for (rank=0;rank<NUM_RANKS;rank++){
        if (num_rank[rank]==4) four=true;
        if (num_rank[rank]==3) three= true;
        if (num_rank[rank]==2) pair++;
    }
 }
 //print classification
 void print_cards(){
    if (straight && flush) printf("straight flush");
    else if (four) printf("Four of a kind");
    else if (three && pair==1) printf("Full house");
    else if (flush) printf("Flush");
    else if (straight) printf("Straight");
    else if (three) printf("Three of a kind");
    else if (pair==2) printf("Two pairs");
    else if (pair==1) printf("pair");
    else printf("High Card");
    printf("\n\n");
 }