#include<stdio.h>

int main(){
int n=0,sti,odd,s=0;
printf("inserisci i numeri, il programma si ferma quando metti un numero negativo \n alla fine del programma ti indica quanti numeri pari e dispari ci sono \n");
goto debug;
while (n >= 0){
    s++;
    if(n % 2 == 0)
      sti++;
    else
      odd++;
    debug:
    printf("inserisci il numero");
    scanf ("%d", &n);
}
printf("numeri messi=%d \n",s);
printf("totale pari=%d \n",sti);
printf("totale dispari=%d \n",odd); 
return 0;
}
