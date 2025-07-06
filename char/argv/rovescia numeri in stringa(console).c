#include <stdio.h> //cerca numeri nella stringa

void r (char *s){
char *p, *q, ch;
while(*s){
if(*s < '0' || *s > '9') s++;
else{
q = s;
while(*s && (*s >= '0' && *s <= '9')) s++;
//printf("fine cifra, stampo s %c \n", *s);
p = s-1;
while (q < p){
ch = *p;
*p-- = *q;
*q++ = ch;
}
}
}
}

int main(int argc, char *argv[]){
if(argc != 2){
printf("SCRIVI UNA SOLA PAROLA!!!");
return -1;
}
r (argv[1]);
printf("%s \n", argv[1]);
return 0;
}
