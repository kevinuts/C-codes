#include <stdio.h>
#include <stdlib.h>
int m(char *s, char *t);
int main (int argc, char *argv[]){
if (argc != 3) 
  return -1;
printf("m = %d", m(argv[1], argv[2]));
return 0;
}
int m(char *s, char *t){
char *pt = t;
while (*pt != '\0') pt++;
if (pt - t < 2) return 0;
for (pt = pt-2; *pt == *s; pt--, s++) if (pt == t) break;
return (*s == *t && t == pt && *(s+1) == '\0')? 1 : 0;
}
//questo codice verifica se la seconda parola ha il contrario della prima
