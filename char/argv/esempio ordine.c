#include <stdio.h>
#define L 50

int so(char *s, char *t){
for (; *s; s++){
t++;
if (*t == '\0') return 1;
}
return 0;
}
int main(int argc, char *argv[]){
if (argc != 3) return -1;
if (so(argv[1], argv[2])) printf("si \n");
else printf("no \n");
return 0;
}
//questo programma verifica se la parola t rispetta l'ordine di s, esempio ciao rispetta l'ordine della parola "chiaro" ma non "camino" ne "acido"
