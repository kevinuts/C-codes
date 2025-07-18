#include <stdbool.h> /* solo C99 */
#include <stdio.h>
#include <stdlib.h>
#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
/* variabili esterne */
int num_in_rank[NUM_RANKS];
int num_in_suit[NUM_SUITS];
bool straight, flush, four, three;
int pairs; /* pu� essere o, 1, o 2 */
void read_cards(void)
{
bool card_exists[NUM_RANKS][NUM_SUITS];
char eh, rank_ch, suit_ch;
int rank, suit;
bool bad_card;
int cards_read = 0;
for (rank = 0; rank < NUM_RANKS; rank++) {
num_in_rank[rank] = 0;
for (suit = 0; suit < NUM_SUITS; suit++) card_exists[rank][suit] =false;
}
for (suit = 0; suit < NUM_SUITS; suit++) num_in_suit[suit] = 0;
while (cards_read < NUM_CARDS) {
bad_card = false;
printf("Enter a card: ");
rank_ch = getchar();
switch (rank_ch) {
case '0': exit(EXIT_SUCCESS);
case '2': rank = 0; 
break;
case '3': rank = 1; 
break;
case '4': rank = 2; 
break;
case '5': rank = 3; 
break;
case '6': rank = 4; 
break;
case '7': rank = 5; 
break;
case '8': rank = 6; 
break;
case '9': rank = 7; 
break;
case 't': 
case 'T': rank = 8; 
break;
case 'j': 
case 'J': rank = 9; 
break;
case 'q': 
case 'Q': rank = 10; 
break;
case 'k': 
case 'K': rank = 11; 
break;
case 'a': 
case 'A': rank = 12; 
break;
default: bad_card = true;
}
suit_ch = getchar();
switch (suit_ch) {
case 'e': 
case 'C': suit = 0; 
break;
case 'd': 
case 'O': suit = 1; 
break;
case 'h': 
case 'H': suit = 2; 
break;
case 's': 
case 'S': suit = 3; 
break;
default: bad_card = true;
}
while ((eh= getchar()) != '\n'){
if (eh !=' ') bad_card = true;
}
if (bad_card) printf("Bad card; ignored.\n");
else if (card_exists[rank][suit]) printf("Duplicate card; ignored.\n");
else
    num_in_rank[rank]++;
    num_in_suit[suit]++;
    card_exists[rank][suit] = true;
    cards_read++;
}
}
void analyze_hand(void){
int num_consec = 0;
int rank, suit;
bool straight = false;
bool flush = false;
bool four = false;
bool three = false;
int pairs = 0;
/* check for flush (colore) */
for (suit = 0; suit < NUM_SUITS; suit++){
if (num_in_suit[suit] == NUM_CARDS) flush = true;
}
/* check for straight (scala)*/
rank = 0;
while (num_in_rank[rank] == 0) rank++;
for (; rank < NUM_RANKS && num_in_rank[rank] > 0; rank++) num_consec++;
if (num_consec == NUM_CARDS)
  straight = true;
  return;
/* check for 4-of-a-kind, 3-of-a-kind, and pairs */
for (rank = 0; rank < NUM_RANKS; rank++) {
if (num_in_rank[rank] == 4) four = true;
if (num_in_rank[rank] == 3) three = true;
if (num_in_rank[rank] == 2) pairs++;
} 
}
void print_result(void)
{
if (straight && flush) printf("Straight flush");
else if (four) printf("Four of a kind");
else if (three && pairs == 1) printf("Full house");
else if ( flush) printf("Flush");
else if (straight) printf("Straight");
else if (three) printf( "Three of a kind");
else if (pairs == 2) printf("Two pairs");
else if (pairs == 1) printf("Pair");
else printf("High card");
printf("\n\n");
}
int main(void){
for (;;) {
read_cards();
analyze_hand();
print_result();
}
return 0;
}
