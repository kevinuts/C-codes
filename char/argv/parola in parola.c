#include <stdio.h>
#include <stdlib.h>
int sr(char *s, char *t);
int main(int argc, char *argv[]){
if (argc != 3) return -1;
printf("zeppa = %d", sr(argv[1],argv[2]));
return 0;
}
int sr(char *s, char *t){
char *ps, *pt;
for (;*s;s++){
for (ps = s, pt = t; *pt != '\0' && *ps == *pt; ps++, pt++);
if (*pt == '\0') return 1;
}

return 0;
}
//questo programma verifica se la seconda parola è conetnuta nella prima
