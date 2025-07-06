//questo programma indica la parola più grande, that's it

#include <stdio.h>
#include <string.h>
#define N 80

char *gw(char *s, char *m){
char *p = s;
for(; *s; s++){
if (*s == ' '){
*s = '\0';
//printf("parola massima = %s \n", m); //questi printf non utilizzati è per controllare il codice, mettili a non commento per fare controlli
//printf("p: %s \n", p);
if (strcmp(m, p) < 0) strcpy(m,p);
p = s+1;
//printf("p=s+1= %s \n", p);
}
}
if (strcmp(m, p) < 0) return p;
else return m;
}
int main(void){
printf("inserisci le parole \n"); //attenzione: usa getchar al posto di scanf, quindi devi fare nessun invio, ma [parola][spazio][parola]
char a[N+1], p[N+1], ch;
int i = 0;
while((ch = getchar()) != '\n'){
if (i < N) a[i] = ch;
i++;
}
a[i] = '\0';
char *ris = gw(a,p);
printf("parola massima è : ");
puts (ris);
return 0;
}
