#include <stdio.h>
int p (int a);
int main(){
int b;
printf("inserisci il numero");
scanf("%d", &b);
if (p(b)) printf("e numero primo");
else printf("non e numero primo");
return 0;
}
int p (int a){
int i,c;
for(i = 2; i < a; i++){
if (a % i == 0) return 0;
}
return 1;
}
