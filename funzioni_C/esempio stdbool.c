#include <stdio.h>
#include <stdbool.h>
bool p(int a, int b);
int main(){
int c,d;
printf("scrivi 2 numeri \n");
scanf("%d%d", &c, &d);
if (p(c,d) == true) printf("la loro somma e pari");
else printf("la loro somma e dispari");
return 0;
}
bool p(int a, int b){
bool e = false;
if ((a + b) % 2 == 0) e = true;
return e;
}
