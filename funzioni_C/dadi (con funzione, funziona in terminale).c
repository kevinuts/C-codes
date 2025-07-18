#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
short int p_r;
void guessing_e(void){
short int r;
p_r = rand() % 20;
printf("you rolled %d your objective \n", p_r);
while (r != p_r){
r = rand() % 20;
printf("you rolled %d \n", r);
}
printf("you win! \n");
}
void guessing_h(void){
short int r,i;
bool win;
p_r = rand() % 20;
printf("you rolled %d your objective \n", p_r);
for (i = 0; i < 10; i++){
r = rand() % 20;
printf("you rolled %d \n", r);
if ( r == p_r){
win = true;
break;
}
}
if (win == true) printf("you win! \n");
else printf("you lose! \n");
}
int main(void){
srand ((unsigned)time(NULL));
short int d;
y:
printf("choose your difficulty (1 for easy, 2 for hard) \n");
scanf("%d", &d);
if (d == 1) guessing_e();
else guessing_h();
printf("want to play again? (1 for yes, 2 for no) \n");
scanf("%d", &d);
if (d == 1) goto y;
else printf("then see you next time \n");
return 0;
}
