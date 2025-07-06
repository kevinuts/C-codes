#include <stdio.h>
int main(){
short int e;
float p;
printf("inserisci la tua eta e peso");
scanf("%d%f", &e, &p);
if (e <= 6) printf("cena gratis");
else if (e > 6 && e <= 15) printf("la cena costa %.2f euro", 0.1 *p);
else if (e > 15 && e <= 60) printf("la cena costa 10.50 euro");
else if (e > 60) printf("la cena costa 7.50 euro");
return 0;
}
