#include <stdio.h>

int main(){
int a,b,c,d, e = 999;
printf("inserisci tre numeri, per il volume del parallelepipedo");
scanf("%d %d %d", &a, &b, &c);
d = a*b*c;
printf("volume: %d /n sei al %.1d %%", d, e);
return 0;
}
