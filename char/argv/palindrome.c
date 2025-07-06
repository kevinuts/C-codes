#include <stdio.h>
#include <stdlib.h>
int p (char *s);
int main (int argc, char *argv[]){
if (argc != 2) return -1;
if (p(argv[1]) == 1) printf("sono palindromi");
else printf("non sono palindromi");
return 0;
}
int p(char *s){
char *t = s;
while(*t != '\0') t++;
for (t = t - 1; s < t; s++,t--){
while (*s == '_') s++;
while (*t == '_') t--;
if (*s != *t) return 0;
} 
return 1;
}
