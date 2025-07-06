#include <stdio.h>
int main(){
short int y;
printf("inserisci l'anno");
scanf("%d", &y);
if (y >= 1600 && y % 400 == 0) printf("l'anno e bisestile \n");
else printf("l'anno non e bisestile \n");
if (y % 4 == 0) printf("l'anno e secolare \n");
else printf("l'anno non e secolare \n");
return 0;
}
