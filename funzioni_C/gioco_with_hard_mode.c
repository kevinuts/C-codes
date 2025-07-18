#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_NUMBER 100
int secret_number;
void initialize_number_generator(void){
srand((unsigned) time(NULL));
}
void choose_new_secret_number(void) {
secret_number = rand() % MAX_NUMBER + 1;
}
void read_guesses(void) {
int guess, num_guesses = 0;
for (;;) {
num_guesses++;
printf("Enter guess: ");
scanf("%d", &guess);
if (guess == secret_number) {
  printf("You won in %d guesses\n", num_guesses);
return;
} else if (guess < secret_number)
  printf("Too low; try again.\n");
else printf("Too high; try again.\n");
}
}
void read_guesses_tries(int a) {
int guess, num_guesses = 0;
for(; num_guesses < a;) {
num_guesses++;
printf("Enter guess: ");
scanf("%d", &guess);
if (guess == secret_number) {
  printf("You won in %d guesses\n", num_guesses);
return;
} else if (guess < secret_number)
  printf("Too low; try again.\n");
else printf("Too high; try again.\n");
}
printf("[GAME OVER]");
return;
}
int main(void)
{
char command;
int choise;
printf("benvenuto al gioco indovina numeri.\n");
printf("Regole: Indovina il numero tra 1 e %d.\n", MAX_NUMBER);
initialize_number_generator();
do {
printf("scegli i numeri di tentativi (0 o negativo = infinito):\n");
scanf("%d", &choise);
choose_new_secret_number();
printf("A new number has been chosen.\n");
if(choise <= 0) read_guesses();
else read_guesses_tries(choise);
printf("Play again? (Y/N) ");
scanf(" %c", &command);
printf("\n");
} while (command == 'y' || command == 'Y');
printf("see you next time ;^) \n");
return 0;
}
