#include <stdio.h>
int main(){
int a;
printf("inserisci la transazione");
scanf("%d", &a);
if (a <= 2500) printf("commissione : 1.7%% (30 $) ");
else if (a > 2500 && a <= 6250) printf("commisione : 0.66%% + 56 $");
else if (a > 6250 && a <= 20000) printf("commisione : 0.34%% + 75 $");
else if (a > 20000 && a <= 50000) printf("commisione : 0.22%% + 100 $");
else if (a > 50000 && a <= 500000) printf("commisione : 0.11%% + 155 $");
else if (a > 500000) printf("commisione : 0.09%% (255 $)");
return 0;
}
