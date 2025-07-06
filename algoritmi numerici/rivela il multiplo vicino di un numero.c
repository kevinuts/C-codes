#include <stdio.h>
int l(int a, int b);
int main(){
int m,n;
printf("inserisci 2 numeri");
scanf("%d%d", &m, &n);
printf("il multiplo piu vicino e : %d", l(m,n));
return 0;
}
int l (int a, int b){
int u;
if (a > 0 && b > 0) 
  if(a % b >= b / 2.0f)u = a + (b - (a % b));
  else u = b * (a / b);
return u;
} 
