#include <stdio.h>
int main(){
int i,tw,te,f,o;
printf("inserisci gli euro");
scanf("%d", &i);
tw = i/20;
i %= 20;
te = i/10;
i %= 10;
f = i/5;
i %= 5;
o = i;
printf("20 euro: %d \n", tw);
printf("10 euro: %d \n", te);
printf("5 euro: %d \n", f);
printf("1 euro: %d \n", o);
return 0;
}
