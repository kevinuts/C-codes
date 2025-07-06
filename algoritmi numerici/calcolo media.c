#include<stdio.h>

int main(void){
int b=0,s=0,u,i,ii,in;
int e[4];
double p;
printf("questo programma serve a contare i voti totali e a indicare chi ha superato l'esame e chi no \n se metti un numero negativo o maggiore di 10, s sarà 0 \n inserisci gli studenti");
scanf("%d", &u);
for(i = 1; i <= u ; i++){
    for(ii=0; ii <= 4 ; ii++){
    printf("inserisci il voto");
    scanf ("%d", &in);
	if (in <= -1 || in >= 11)
	  in = 0;
	e[ii] = in;
	}
printf("passiamo al prossimo studente");
p = (e[0] + e[1] + e[2] + e[3] + e[4]) / 5;
if (p >= 6)
    s++;
else
    b++;
}
printf("studenti=%d \n",u);
printf("superati=%d \n",s);
printf("bocciati=%d \n",b); 
return 0;
}
