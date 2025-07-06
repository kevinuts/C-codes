#include<stdio.h>
int main(void) {
int voto;
printf("Inserisci il voto:\n");
scanf("%d", &voto);
if (voto > 100) voto = 100;
if (voto<=59) printf("Riprova\n");
if ((voto>=60) && (voto<=89)) printf("Superato\n");
if ((voto>=90) && (voto<=100)) printf("Eccellente!\n");
if (voto > 100) printf("Eccellente!\n");
return 0;
}
