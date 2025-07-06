#include <stdio.h>
int main(){
char c;
printf("scrivi una parola");
do{
c = getchar();
putchar(c);
}while(c != '\n');
return 0;
}
