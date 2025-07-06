#include <stdio.h>
#include <stdlib.h>

int anti(char *s, int i){
char *p, ch;
int j;
while(i-- && *s) s++;
if(*s == '\0') return 0;
p = s;
printf("%s \n", p);
while(*(s + 1)){
printf("%c \n", *s);
s++;
}
printf("%s\n", s);
for(; p < s; p++, s--){
ch = *p;
*p = *s;
*s = ch;
}
return 1;
}

int main(int argc, char *argv[]){
//char a[] = {'p','a','l','l','i','n','o'}; //non so perchè ho messo questo, ma sembra importante, quindi lo solo messo come commento, prima non lo era e sembrava uno spreco di ram
anti(argv[1], atoi(argv[2]));
printf("%s\n", argv[1]);
return 0;
}
