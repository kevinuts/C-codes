#include<stdio.h>

int main(){
int v=0,s=0,i;
double m=0;
printf("questo programma può registrare massimo 10 studenti /n metti 0 nei prossimi imput se gli studenti sono meno di 10 /n attenzione, se metti un numero negativo o maggiore di 100 il voto sarà 0");
for(i = 1; i <= 10; i++){
 s+=v;
 printf("inserisci il voto");
 scanf("%d",&v);
 if (v < 0 || v > 100)
   v = 0;
}
m = (s*1.0f)/(9);
printf("media=%.2f",m);
if(m >= 60)
  printf("la classe è passata");
else
  printf("la classe non è passata");
return 0;
}
