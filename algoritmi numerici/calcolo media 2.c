#include<stdio.h>

int main(){
int n,s=0,i=0,t;
printf("inserisci i numeri, il programma si ferma quando metti 0 \n");
while (n != 0){
    printf("inserisci il numero");
    scanf ("%d", &n);
    s+=n;
    i++;
}
t=s/(i-1);
printf("media=%d",t); 
return 0;
}
