#include<stdio.h>

int main(void){
int n,min,max,s=0;
printf("inserisci i numeri, il programma si ferma quando metti un numero negativo o 0 \n");
scanf("%d",&n);
min=max=s=n;
while (n > 0){
    if(min > n)
      min = n;
    else if(max < n)
      max=n;
    printf("inserisci il numero");
    scanf ("%d", &n);
    s+=n;
}
printf("somma=%d \n",s);
printf("minimo=%d \n",min);
printf("massimo=%d \n",max); 
return 0;
}
