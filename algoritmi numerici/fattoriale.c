#include <stdio.h>
int main (){
long int f = 1;
short int n, i;
printf("inserisci il numero");
scanf("%d", &n);
if (n == 0) printf("il suo fattoriale e 1");
else
  for (i = n; i >= 1; i--){
  f *= i;
  }
  printf("il suo fattoriale e %d", f);
return 0;
}
