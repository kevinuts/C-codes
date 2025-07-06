#include<stdio.h>
#include<stdlib.h>
int raddoppiamento (char *s, char *t){
int flag = 0;
if (*s != *t) return 0;
for (; *s == *t; s++, t++) ;
if ((*s == '\0') || (*t == '\0')) return 0;
printf ("%c %c \n", *s, *t);
if (*s == *(s-1)){
s++;
flag = 1;
}
else if(*t == *(t+1)){
flag = 2;
t++;
}
else return 0;
for(; *s == *t; s++, t++) if ((*(s+1) == '\0') && (*(t+1) == '\0')) return flag;
return 0;
}
int main(int argc, char *argv[]){
if (argc != 3){
fprintf(stderr, "METTI SOLO 2 PAROLE!!! \n");
return -1;
}
printf("%d \n", raddoppiamento(argv[1], argv[2]));
return 0;
}
