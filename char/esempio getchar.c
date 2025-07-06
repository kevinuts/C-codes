#include <stdio.h>
int main(){
short int a;
printf("inserisci i caratteri \n");
while(getchar() != '\n'){
a++;
}
printf("i caratteri sono %d", a);
return 0;
}
