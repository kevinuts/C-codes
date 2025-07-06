#include <stdio.h>
#include <stdlib.h>
int z (char *s , char *t);
int main(int argv, char *argc[]){
    if (argv != 3) return -1;
    printf("zeppa? %d", z(argc[1],argc[2]));
    return 0;
}
int z (char *s , char *t){
    if (*s != *t) return 0;
    for(;*s == *t;s++,t++) if (*s == '\0' || *t == '\0') return 0;
    if (*s == *(t + 1) || *t == *(s + 1)) return 1;
    return 0; /*s++;
    else t++;
    for(;*s == *t;s++,t++) if (*s == '\0') return 1;
    return 0; */
}
//questo programma ti controlla e è una zeppa
