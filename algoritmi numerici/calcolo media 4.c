#include<stdio.h>

int main(){
int v=0,n,s=0,i;
double m=0;
printf("inserisci quante volte si deve fare /n attenzione, se metti un numero negativo o maggiore di 100 il voto sarà 0");
scanf("%d", &n);
for(i = 1; i <= n; i++){
 s+=v;
 printf("inserisci il voto");
 scanf("%d",&v);
 if (v < 0 || v > 100)
   v = 0;
}
m = (s*1.0f)/(n-1);
printf("media=%.2f",m);
if(m >= 60)
  printf("la classe è passata");
else
  printf("la classe non è passata");
return 0;
}
