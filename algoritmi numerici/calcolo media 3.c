#include<stdio.h>

int main(){
int v=0,n=0,s=0;
float m=0;
printf("questo programma si ferma solo se metti un numero negativo nell'inserimento del voto \n inserisci un numero negativo per fermare il programma");
for(;;){
 s+=v;
 n++;
 printf("inserisci il voto");
 scanf ("%d",&v);
 if(v < 0 || v > 100)
   break;
}
m = (s*1.0f)/(n-1);
printf("media=%.2f",m);
if(m >= 60)
  printf("la classe è passata");
else
  printf("la classe non è passata");
return 0;
}
