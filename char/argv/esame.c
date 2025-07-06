#include <stdio.h>

int zmaking(char *s, char *t, char *z){
while(*s == *t){
s++;
t++;
}
s--;
*s = ' ';
s++;
while(*s != '\0') s++;
s--;
while (*s != ' '){
if (*s != *z) return 0;
s--;
z++;
}
while (*t != '\0') {
if (*t != *z) return 0;
t++;
z++;
}
if (*z == '\0' || *(z++) == '\0') return 1;
return 0;
}

int main(int argc, char *argv[]){
if (argc != 4){
printf("metti almeno 3 parole!");
return -1;
}
if (zmaking(argv[1], argv[2], argv[3]) == 1) printf("si");
else printf("no");
return 0;
}
