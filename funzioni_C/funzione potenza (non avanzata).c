#include <stdio.h>
int p (int a, int b);
int main(){
int c,d;
printf("metti 2 numeri, il secondo numero e la potenza");
scanf("%d", &c);
scanf("%d", &d);
printf("il risultato = %d", p(c,d));
return 0;
}
int p (int a,int b){
int i;
float n = 1;
for (i = b; i >= 1; i--){
     n*=a;
}
return n;
}
