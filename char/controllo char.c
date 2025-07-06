#include <stdio.h>
int main(){
char c;
short int t = 0, s = 0, v = 0, tt = 0;
printf("inserisci una parola");
do{
c = getchar();
switch (c){
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
v++;
break;
case ' ':
s++;
t--;
break;
}
t++;
tt++;
if (t == 1) printf("la parola e :");
putchar(c);
}while(c != '\n');
printf("le vocali sono %d \n gli spazi sono %d \n il totale di lettere sono %d \n e il totale dei caratteri sono %d \n", v, s, t, tt);
return 0;
}
