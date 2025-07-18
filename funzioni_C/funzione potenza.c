#include <stdio.h>
double p (int a, int b);
int main(){
int c,d;
printf("metti 2 numeri, il secondo numero è la potenza");
scanf("%d", &c);
scanf("%d", &d);
printf("il risultato = %f", p(c,d));
return 0;
}
double p (int a,int b){
int i;
double n = 1.0;
if (b < 0)
  for (i = b; i >= 1; i--){
    n*=a;
  }
else
  for (i = b; i <= 1; i++){
        n*=a;
  }
  n = 1/n;
return n;
}
