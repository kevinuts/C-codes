#include <stdio.h>
int main(){
int n, res = 1;
printf("inserisci il numero");
scanf("%d", &n);
while(res < n){
res *= 2;
}
printf("la potenza e : %d", res/2);
return 0;
}